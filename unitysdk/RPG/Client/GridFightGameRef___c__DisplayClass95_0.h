#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameRef; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD162F00)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_0__LIKE_B__0_OFFSET UNITYSDK_OFFSET(0xD166060)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass95_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightGameRef* __4__this; // 0x10
		::System::Action* callback; // 0x18
		::System::String* id; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_0_CTOR_OFFSET))(this);
		}

		::System::Void _Like_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS95_0__LIKE_B__0_OFFSET))(this, a1);
		}

	};
}
