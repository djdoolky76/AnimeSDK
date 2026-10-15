#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AliveStateMask.h"
#include "unitysdk/System/Object.h"
class MJNIGJBCEII;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define MJNIGJBCEII___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB96A6B0)
#define MJNIGJBCEII___C__DISPLAYCLASS1_0___ONAFTERFIREEFFECTCOMPLETED_B__0_OFFSET UNITYSDK_OFFSET(0xB96A6C0)

inline static constexpr unsigned int MJNIGJBCEII___c__DisplayClass1_0_TypeDefinitionIndex = 55727;

	class MJNIGJBCEII___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::MJNIGJBCEII* __4__this; // 0x10
		::RPG::GameCore::AliveStateMask aliveMask; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNIGJBCEII___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* __OnAfterFireEffectCompleted_b__0(::RPG::GameCore::TargetEvaluator* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::TargetEvaluator*))((::PBYTE)hIl2Cpp + MJNIGJBCEII___C__DISPLAYCLASS1_0___ONAFTERFIREEFFECTCOMPLETED_B__0_OFFSET))(this, a1);
		}

	};
