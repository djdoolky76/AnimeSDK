#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RoguePersonaStyleGiftConfig; }

#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2C3A0)
#define RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2C360)

namespace RPG::GameCore
{
	class RoguePersonaStyleGiftConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RoguePersonaStyleGiftConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RoguePersonaStyleGiftConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPERSONASTYLEGIFTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
