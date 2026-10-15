#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExecActionOnRogueCoinChangeConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA15540)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA15550)
#define RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA15500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExecActionOnRogueCoinChangeConfig_TypeDefinitionIndex = 17830;

	class RogueModifierExecActionOnRogueCoinChangeConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExecActionOnRogueCoinChangeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXECACTIONONROGUECOINCHANGECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
