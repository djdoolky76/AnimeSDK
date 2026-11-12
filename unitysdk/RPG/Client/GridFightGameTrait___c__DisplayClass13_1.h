#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightGameTrait; }
namespace RPG::Client { class GridFightNPC; }

#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDB53820)
#define RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_1__ONMEMBERSCHANGEDEVENTHANDLER_B__1_OFFSET UNITYSDK_OFFSET(0xDB59920)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameTrait___c__DisplayClass13_1_TypeDefinitionIndex = 67301;

	template <typename T>
	class GridFightGameTrait___c__DisplayClass13_1 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightNPC* npc; // 0x10
		::RPG::Client::GridFightGameTrait* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnMembersChangedEventHandler_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMETRAIT___C__DISPLAYCLASS13_1__ONMEMBERSCHANGEDEVENTHANDLER_B__1_OFFSET))(this);
		}

	};
}
