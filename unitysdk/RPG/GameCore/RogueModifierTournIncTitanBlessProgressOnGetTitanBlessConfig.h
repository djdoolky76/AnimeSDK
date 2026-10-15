#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1ABE0)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1ABF0)
#define RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1ABA0)

namespace RPG::GameCore
{
	class RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTournIncTitanBlessProgressOnGetTitanBlessConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTOURNINCTITANBLESSPROGRESSONGETTITANBLESSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
