#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPEGLPPPAJJ;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDEDF030)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0__REMOVETRIGGEREDACTIONID_B__0_OFFSET UNITYSDK_OFFSET(0xDEE2C90)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c__DisplayClass40_0_TypeDefinitionIndex = 67364;

	class RogueAdventureModule___c__DisplayClass40_0 : public ::System::Object
	{
	public:
		::System::UInt32 actionID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveTriggeredActionID_b__0(::DPEGLPPPAJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPEGLPPPAJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS40_0__REMOVETRIGGEREDACTIONID_B__0_OFFSET))(this, a1);
		}

	};
}
