#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventWriteAIParamEntry_ParaType_TypeDefinitionIndex = 57543;

	enum class AnimatorEventWriteAIParamEntry_ParaType : ::System::Int32
	{
		String = 2,
		Int = 1,
		Float = 0,
		Bool = 3,
	};
}
