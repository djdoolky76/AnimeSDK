#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D611350)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D611360)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D611260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint_TypeDefinitionIndex = 16043;

	class DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* Point; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_AttackEffect_IgnoreDefendPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_ATTACKEFFECT_IGNOREDEFENDPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
