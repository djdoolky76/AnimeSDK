#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client::UI3DGame { class MonopolyGameController; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0xEDCBA70)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0__ONUIENTERTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xEDCEFC0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyGameController___c__DisplayClass23_0_TypeDefinitionIndex = 78117;

	class MonopolyGameController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::UI3DGame::MonopolyGameController* __4__this; // 0x10
		::RPG::Client::AdventurePhase* adventurePhase; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnUIEnterTrigger_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0__ONUIENTERTRIGGER_B__0_OFFSET))(this);
		}

	};
}
