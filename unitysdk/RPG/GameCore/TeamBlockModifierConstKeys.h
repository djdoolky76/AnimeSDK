#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamBlockModifierConstKeys; }

#define RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4BE00)
#define RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4BC80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamBlockModifierConstKeys_TypeDefinitionIndex = 17104;

	class TeamBlockModifierConstKeys : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::StringHash KeyBlockValue; // 0x10
		::RPG::GameCore::StringHash KeyBlockPercent; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamBlockModifierConstKeys* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamBlockModifierConstKeys*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMBLOCKMODIFIERCONSTKEYS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
