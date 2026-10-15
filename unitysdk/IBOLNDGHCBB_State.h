#pragma once
#include "unitysdk/unitysdk.h"
	enum class IBOLNDGHCBB_State : ::System::Int32
	{
		WaitStart = 0,
		WaitRsp = 1,
		RspWin = 2,
		RspFail = 3,
		RspKickOut = 4,
		RspError = 5,
		RspTimeOut = 6,
		OutOfDate = 7,
		Finalize = 8,
	};
