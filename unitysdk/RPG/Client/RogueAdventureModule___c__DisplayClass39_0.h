#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DPEGLPPPAJJ;

#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS39_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDEE95D0)
#define RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS39_0__MARKSELECTACTIONACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0xDEED2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueAdventureModule___c__DisplayClass39_0_TypeDefinitionIndex = 67363;

	class RogueAdventureModule___c__DisplayClass39_0 : public ::System::Object
	{
	public:
		::DPEGLPPPAJJ* action; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS39_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _MarkSelectActionActive_b__0(::DPEGLPPPAJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DPEGLPPPAJJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEADVENTUREMODULE___C__DISPLAYCLASS39_0__MARKSELECTACTIONACTIVE_B__0_OFFSET))(this, a1);
		}

	};
}
