#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaTriggerStyleSelectConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A0DC0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A0DD0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A0D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleSelectConfig_TypeDefinitionIndex = 19712;

	class RogueActPersonaTriggerStyleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaTriggerStyleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLESELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
