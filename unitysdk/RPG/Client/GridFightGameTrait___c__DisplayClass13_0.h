#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD67A40)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_0__ONMEMBERSCHANGEDEVENTHANDLER_B__0_OFFSET UNITYSDK_OFFSET(0x1CD6DC40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass13_0_TypeDefinitionIndex = 67300;

	class GridFightGameTrait___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::RPG::Client::GridFightGameTrait* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _OnMembersChangedEventHandler_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_0__ONMEMBERSCHANGEDEVENTHANDLER_B__0_OFFSET))(this);
		}

	};
}
