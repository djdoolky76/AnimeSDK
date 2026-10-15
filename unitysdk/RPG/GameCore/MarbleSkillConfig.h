#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleSkillConfig; }
namespace RPG::GameCore { class MarbleTaskConfig; }

#define RPG_GAMECORE_MARBLESKILLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D81B7F0)
#define RPG_GAMECORE_MARBLESKILLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D81B120)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleSkillConfig_TypeDefinitionIndex = 16898;

	class MarbleSkillConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnPerformance; // 0x10
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnLaunch; // 0x18
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnHitBeforeDeal; // 0x20
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnHitAfterDeal; // 0x28
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnHitNoDeal; // 0x30
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnRoundStart; // 0x38
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnRoundEnd; // 0x40
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnTurnStart; // 0x48
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnActionStart; // 0x50
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnActionEnd; // 0x58
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnHpChange; // 0x60
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnUnlock; // 0x68
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnKill; // 0x70
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnDie; // 0x78
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnRevive; // 0x80
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnEnterTrigger; // 0x88
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnStopInTrigger; // 0x90
		::Il2CppArray<::RPG::GameCore::MarbleTaskConfig*>* OnDoDamage; // 0x98
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESKILLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleSkillConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleSkillConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLESKILLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
