#pragma once
#include "unitysdk/unitysdk.h"
	enum class PIFGICNAFMF_FailReason : ::System::Int32
	{
		None = 0,
		NodeNotFound = 1,
		NodeNotActive = 2,
		ImageCheckFail = 3,
		BtnCheckFail = 4,
		ScaleCheckFail = 5,
		MoveCheckFail = 6,
	};
