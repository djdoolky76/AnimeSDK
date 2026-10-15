#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActPersonaTriggerStyleForceSelectConfig; }

#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9733A0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9733B0)
#define RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D973360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActPersonaTriggerStyleForceSelectConfig_TypeDefinitionIndex = 19715;

	class RogueActPersonaTriggerStyleForceSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActPersonaTriggerStyleForceSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTPERSONATRIGGERSTYLEFORCESELECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
