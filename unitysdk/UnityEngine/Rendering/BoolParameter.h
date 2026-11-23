#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/BoolParameter_A55474EF37E44AFF.h"

#define UNITYENGINE_RENDERING_BOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x402ECE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BoolParameter_TypeDefinitionIndex = 20354;

	class BoolParameter
	{
	public:
		::UnityEngine::Rendering::BoolParameter_A55474EF37E44AFF displayType; // 0x20

		::System::Void _ctor(::System::Boolean E937D4885DAA1AE8, ::System::Boolean F61D1A6BA6063471)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BOOLPARAMETER__CTOR_OFFSET))(this, E937D4885DAA1AE8, F61D1A6BA6063471);
		}
	};
}
