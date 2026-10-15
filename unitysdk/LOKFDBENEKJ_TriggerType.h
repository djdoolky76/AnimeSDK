#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LOKFDBENEKJ_TriggerType_TypeDefinitionIndex = 75494;

	enum class LOKFDBENEKJ_TriggerType : ::System::Int32
	{
		None = 0,
		OnPreProgressing = 1,
		OnProgressing = 2,
		OnProgressingAddition = 3,
		OnFinishProgressing = 4,
		OnPostProgressing = 5,
		OnStatChange = 6,
	};
