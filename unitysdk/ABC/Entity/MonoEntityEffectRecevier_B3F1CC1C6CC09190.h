#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

namespace ABC::Entity
{
	inline static constexpr unsigned int MonoEntityEffectRecevier_B3F1CC1C6CC09190_TypeDefinitionIndex = 7549;

	struct alignas(8) MonoEntityEffectRecevier_B3F1CC1C6CC09190
	{
		::UnityEngine::Renderer* A7CD318CE49BBD36; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* F482A424C8B89E69; // 0x18
	};
}
