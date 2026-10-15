#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByOtherModifiersConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A5F0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A600)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A5B0)

namespace RPG::GameCore
{
	class RogueModifierSetCountByOtherModifiersConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByOtherModifiersConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOTHERMODIFIERSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
