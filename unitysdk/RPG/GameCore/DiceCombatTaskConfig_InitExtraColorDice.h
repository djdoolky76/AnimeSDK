#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatTaskConfig_InitExtraColorDice; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D612120)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D612130)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D612090)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_InitExtraColorDice_TypeDefinitionIndex = 16056;

	class DiceCombatTaskConfig_InitExtraColorDice : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_InitExtraColorDice*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_INITEXTRACOLORDICE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
