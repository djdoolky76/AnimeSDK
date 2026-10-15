#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueAdventureConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueAdventureEscapeLayserConfig; }

#define RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A3B90)
#define RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A3BA0)
#define RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A3C30)

namespace RPG::GameCore
{
	class RogueAdventureEscapeLayserConfig : public ::RPG::GameCore::RogueAdventureConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureEscapeLayserConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureEscapeLayserConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueAdventureEscapeLayserConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueAdventureEscapeLayserConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEADVENTUREESCAPELAYSERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
