#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameRef; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD163050)
#define RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_0__UNLIKE_B__0_OFFSET UNITYSDK_OFFSET(0xD166210)

namespace RPG::Client
{
	class GridFightGameRef___c__DisplayClass96_0 : public ::System::Object
	{
	public:
		::System::String* id; // 0x10
		::RPG::Client::GridFightGameRef* __4__this; // 0x18
		::System::Action* callback; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_0_CTOR_OFFSET))(this);
		}

		::System::Void _Unlike_b__0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREF___C__DISPLAYCLASS96_0__UNLIKE_B__0_OFFSET))(this, a1);
		}

	};
}
