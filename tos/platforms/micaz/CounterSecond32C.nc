/**
 * Builds a TSecond counter from Micaz/Iris AlarmCounterMilliP for use mainly in LocalTimeSecondC.
 * Using functionality other than get is not recommended and may interfere with LocalTimeMilliC
 * and TimerMilliC operation!
 *
 * @author Raido Pahtma
 */
configuration CounterSecond32C
{
  provides interface Counter<TSecond,uint32_t>;
}
implementation
{

  components AlarmCounterMilliP as CounterFrom;

  components new TransformCounterC(TSecond,uint32_t,TMilli,uint32_t,10,uint32_t) as Transform;

  Counter = Transform.Counter;

  Transform.CounterFrom -> CounterFrom;

}
