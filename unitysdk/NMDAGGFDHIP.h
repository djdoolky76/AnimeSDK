#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
namespace RPG::GameCore { class GameEntity; }

#define NMDAGGFDHIP_CTOR_OFFSET UNITYSDK_OFFSET(0xBC81AD0)
#define NMDAGGFDHIP_GET_FLAG_OFFSET UNITYSDK_OFFSET(0xBC81C00)
#define NMDAGGFDHIP_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0xBC81AE0)

	class NMDAGGFDHIP : public ::BDENDNDOFLF
	{
	public:
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x68
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMDAGGFDHIP_CTOR_OFFSET))(this, a1);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + NMDAGGFDHIP_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDAGGFDHIP_GET_FLAG_OFFSET))(this);
		}

	};
