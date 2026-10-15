#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"

#define RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_PVSSCENEBUDGETSTATTOOLWINDOWVISUALIZEHELPER_OJEGBJLMMFA_CTOR_OFFSET UNITYSDK_OFFSET(0xE888010)

namespace RPG::SceneOptimizer::PVSSceneBudgetStatTool
{
	class PVSSceneBudgetStatToolWindowVisualizeHelper_OJEGBJLMMFA : public ::System::Object
	{
	public:
		::UnityEngine::Color FGAGBOPDDOE; // 0x10
		::UnityEngine::Bounds IJNBNFHBENO; // 0x20
		::System::Void _ctor(::UnityEngine::Bounds a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + RPG_SCENEOPTIMIZER_PVSSCENEBUDGETSTATTOOL_PVSSCENEBUDGETSTATTOOLWINDOWVISUALIZEHELPER_OJEGBJLMMFA_CTOR_OFFSET))(this, a1, a2);
		}

	};
}
