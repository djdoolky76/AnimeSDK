#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActAddRogueModifierConfig; }

#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99D130)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99D140)
#define RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99D0F0)

namespace RPG::GameCore
{
	class RogueActAddRogueModifierConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActAddRogueModifierConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActAddRogueModifierConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTADDROGUEMODIFIERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
