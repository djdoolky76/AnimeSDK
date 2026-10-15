#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChenLingBattleValueGetter; }
namespace RPG::GameCore { class ChenLingBattleBuffTypeExtraConfig; }

#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D582980)
#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D582990)
#define RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D582820)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBuffTypeExtraConfig_TypeDefinitionIndex = 15797;

	class ChenLingBattleBuffTypeExtraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChenLingBattleValueGetter*>* CommonParams; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingBattleBuffTypeExtraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGBATTLEBUFFTYPEEXTRACONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
