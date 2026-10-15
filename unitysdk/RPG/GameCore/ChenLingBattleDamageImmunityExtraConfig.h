#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingBattleBuffTypeExtraConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleDamageImmunityExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582A80)
#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D582A90)
#define RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D583440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleDamageImmunityExtraConfig_TypeDefinitionIndex = 15798;

	class ChenLingBattleDamageImmunityExtraConfig : public ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig
	{
	public:
		::RPG::GameCore::BaseChenLingBattleValueGetter* Duration; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleDamageImmunityExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEDAMAGEIMMUNITYEXTRACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
