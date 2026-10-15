#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_PVSSCENEBUDGETSTATTOOLWINDOWVISUALIZEHELPER_OJEGBJLMMFA_CTOR_OFFSET UNITYSDK_OFFSET(0xE87DC60)

namespace RPG::SceneOptimizer::PVSSceneBudgetStatTool
{
	inline static constexpr unsigned int PVSSceneBudgetStatToolWindowVisualizeHelper_OJEGBJLMMFA_TypeDefinitionIndex = 51789;

	class PVSSceneBudgetStatToolWindowVisualizeHelper_OJEGBJLMMFA : public ::System::Object
	{
	public:
		::UnityEngine::Bounds IJNBNFHBENO; // 0x10
		::UnityEngine::Color FGAGBOPDDOE; // 0x28
		::System::Void _ctor(::UnityEngine::Bounds a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_PVSSCENEBUDGETSTATTOOLWINDOWVISUALIZEHELPER_OJEGBJLMMFA_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
