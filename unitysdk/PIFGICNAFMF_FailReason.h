#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PIFGICNAFMF_FailReason_TypeDefinitionIndex = 60217;

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
