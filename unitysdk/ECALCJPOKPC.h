#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDENDNDOFLF.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureMuteLevel.h"
#include "unitysdk/RPG/GameCore/AdventureFeatureNormalActiveReason.h"
#include "unitysdk/RPG/GameCore/AdventureModifierBehaviorFlag.h"
class EFHJJIGLPDL;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class GameEntity; }

#define ECALCJPOKPC_CTOR_OFFSET UNITYSDK_OFFSET(0x12D05BB0)
#define ECALCJPOKPC_FDKEHBDDNGC_OFFSET UNITYSDK_OFFSET(0x12D05C50)
#define ECALCJPOKPC_GET_FLAG_OFFSET UNITYSDK_OFFSET(0x12D05DE0)
#define ECALCJPOKPC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x12D05C00)
#define ECALCJPOKPC_LICLBMEDGJM_OFFSET UNITYSDK_OFFSET(0x12D05CD0)

	class ECALCJPOKPC : public ::BDENDNDOFLF
	{
	public:
		::EFHJJIGLPDL* CHAOCFGKDAP; // 0x68
		::RPG::GameCore::AdventureAbilityComponent* NJFKODGGCFA; // 0x70
		::RPG::GameCore::AdventureModifierBehaviorFlag _Flag_k__BackingField; // 0x78
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + ECALCJPOKPC_CTOR_OFFSET))(this, a1);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECALCJPOKPC_HADOHLNHHGB_OFFSET))(this);
		}

		::RPG::GameCore::AdventureFeatureMuteLevel FDKEHBDDNGC()
		{
			return ((::RPG::GameCore::AdventureFeatureMuteLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + ECALCJPOKPC_FDKEHBDDNGC_OFFSET))(this);
		}

		::System::Void LICLBMEDGJM(::System::Boolean a1, ::System::Boolean a2, ::RPG::GameCore::AdventureFeatureNormalActiveReason a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::RPG::GameCore::AdventureFeatureNormalActiveReason))((::PBYTE)hIl2Cpp + ECALCJPOKPC_LICLBMEDGJM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::AdventureModifierBehaviorFlag get_Flag()
		{
			return ((::RPG::GameCore::AdventureModifierBehaviorFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + ECALCJPOKPC_GET_FLAG_OFFSET))(this);
		}

	};
