#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::MathUtil
{
	inline static constexpr unsigned int FloatExtension_eEpsType_TypeDefinitionIndex = 91846;

	enum class FloatExtension_eEpsType : ::System::Int32
	{
		Normal = 1,
		Mild = 0,
		Strong = 2,
	};
}
