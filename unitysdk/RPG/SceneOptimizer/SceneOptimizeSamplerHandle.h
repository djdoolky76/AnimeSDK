#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_SCENEOPTIMIZER_SCENEOPTIMIZESAMPLERHANDLE_CTOR_OFFSET UNITYSDK_OFFSET(0xF356AD0)

namespace RPG::SceneOptimizer
{
	inline static constexpr unsigned int SceneOptimizeSamplerHandle_TypeDefinitionIndex = 52871;

	class SceneOptimizeSamplerHandle : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_SCENEOPTIMIZESAMPLERHANDLE_CTOR_OFFSET))(this);
		}

	};
}
