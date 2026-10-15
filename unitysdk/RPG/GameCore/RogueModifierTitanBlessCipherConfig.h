#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierTitanBlessCipherConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA1AB20)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA1AB30)
#define RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA1AAE0)

namespace RPG::GameCore
{
	class RogueModifierTitanBlessCipherConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierTitanBlessCipherConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERTITANBLESSCIPHERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
