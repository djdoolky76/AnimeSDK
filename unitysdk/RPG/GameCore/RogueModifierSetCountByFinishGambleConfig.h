#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierSetCountByFinishGambleConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1A530)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1A540)
#define RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1A4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierSetCountByFinishGambleConfig_TypeDefinitionIndex = 17720;

	class RogueModifierSetCountByFinishGambleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierSetCountByFinishGambleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERSETCOUNTBYFINISHGAMBLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
