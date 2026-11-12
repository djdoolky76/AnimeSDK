#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_ExchangeHP; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E84FCB0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E84FCC0)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E84FC20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_ExchangeHP_TypeDefinitionIndex = 16251;

	class DiceCombatTaskConfig_ExchangeHP : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_ExchangeHP*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_EXCHANGEHP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
