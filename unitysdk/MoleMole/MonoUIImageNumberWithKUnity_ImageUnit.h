#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UI { class Image; }

namespace MoleMole
{
	inline static constexpr unsigned int MonoUIImageNumberWithKUnity_ImageUnit_TypeDefinitionIndex = 83614;

	struct alignas(8) MonoUIImageNumberWithKUnity_ImageUnit
	{
		::System::Int32 digitIndex; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Image* digitImg; // 0x18
	};
}
