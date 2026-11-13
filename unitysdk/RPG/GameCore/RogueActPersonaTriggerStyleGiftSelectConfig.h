#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaTriggerStyleGiftSelectConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x20737850)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x20737860)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x20737810)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleGiftSelectConfig_TypeDefinitionIndex = 20047;

	class RogueActPersonaTriggerStyleGiftSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaTriggerStyleGiftSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEGIFTSELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
