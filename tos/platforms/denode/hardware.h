/**
 *  IMPORTANT: READ BEFORE DOWNLOADING, COPYING, INSTALLING OR USING.  By
 *  downloading, copying, installing or using the software you agree to
 *  this license.  If you do not agree to this license, do not download,
 *  install, copy or use the software.
 *
 *  Copyright (c) 2004-2005 Crossbow Technology, Inc.
 *  Copyright (c) 2002-2003 Intel Corporation.
 *  Copyright (c) 2000-2003 The Regents of the University  of California.
 *  All rights reserved.
 *
 *  Permission to use, copy, modify, and distribute this software and its
 *  documentation for any purpose, without fee, and without written
 *  agreement is hereby granted, provided that the above copyright
 *  notice, the (updated) modification history and the author appear in
 *  all copies of this source code.
 *
 *  Permission is also granted to distribute this software under the
 *  standard BSD license as contained in the TinyOS distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
 *  PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE INTEL OR ITS
 *  CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 *  EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 *  PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
 *  PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
 *  LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
 *  NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 *  SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 *  @author Jason Hill, Philip Levis, Nelson Lee, David Gay
 *  @author Alan Broad <abroad@xbow.com>
 *  @author Matt Miller <mmiller@xbow.com>
 *  @author Martin Turon <mturon@xbow.com>
 */

#ifndef HARDWARE_H
#define HARDWARE_H

#include <atm128hardware.h>
#include <Atm128Adc.h>

// Andres 07.06.11: actually PLATFORM_MHZ is not having effect right now.
// tos/chips/atm128rfa1/timer/TimerConfig.h overwrites this define to 16 MHz.
// tos/chips/atm128rfa1/timer/McuinitP.nc is used, however this TimerConfig.h overrides PLATFORM_MHZ.
// For now McuinitP uses internal RC oscillator prescaler - they are different with the tranceiver clock
// So this platform is hardcoded to 16 MHz.
#ifndef PLATFORM_MHZ
#define PLATFORM_MHZ 16
#endif

// enum so components can override power saving,
// as per TEP 112.
enum {
	TOS_SLEEP_NONE = ATM128_POWER_IDLE,
};

#ifndef PLATFORM_BAUDRATE
#define PLATFORM_BAUDRATE 115200L
#endif

// we have no external pullups
#define ATM128_I2C_EXTERNAL_PULLDOWN TRUE

#endif //HARDWARE_H
