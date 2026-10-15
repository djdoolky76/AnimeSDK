#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/GameCore/TriggerHitPropClientMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureHitConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerHitProp; }

#define RPG_GAMECORE_TRIGGERHITPROP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC538E0)
#define RPG_GAMECORE_TRIGGERHITPROP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC538F0)
#define RPG_GAMECORE_TRIGGERHITPROP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC538B0)

namespace RPG::GameCore
{
	class TriggerHitProp : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TriggerHitPropClientMode ClientMode; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::AdventureHitConfig* HitConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITPROP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerHitProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerHitProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITPROP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerHitProp* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerHitProp*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERHITPROP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
