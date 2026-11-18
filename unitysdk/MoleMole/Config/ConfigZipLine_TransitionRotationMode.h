#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigZipLine_TransitionRotationMode_TypeDefinitionIndex = 54279;

	enum class ConfigZipLine_TransitionRotationMode : ::System::Int32
	{
		SwitchDirection_Lerp = 4,
		TargetTangent_Lerp = 1,
		SwitchDirection_Instant = 3,
		SourceTangent_Instant = 2,
		SwitchDirection_TargetTangent_Lerp = 5,
		TargetTangent_Instant = 0,
	};
}
