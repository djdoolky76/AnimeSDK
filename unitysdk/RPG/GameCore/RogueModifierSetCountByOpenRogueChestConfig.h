#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByOpenRogueChestConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A590)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A5A0)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A550)

namespace RPG::GameCore
{
	class RogueModifierSetCountByOpenRogueChestConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByOpenRogueChestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYOPENROGUECHESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
