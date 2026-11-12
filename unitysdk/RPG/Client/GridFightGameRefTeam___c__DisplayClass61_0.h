#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB42300)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0__GETROLESBYTRAIT_B__0_OFFSET UNITYSDK_OFFSET(0xDB43540)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0__GETROLESBYTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0xDB435E0)
#define RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0__GETROLESBYTRAIT_B__3_OFFSET UNITYSDK_OFFSET(0xDB436B0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameRefTeam___c__DisplayClass61_0_TypeDefinitionIndex = 66356;

	class GridFightGameRefTeam___c__DisplayClass61_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__0(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0__GETROLESBYTRAIT_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0__GETROLESBYTRAIT_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _GetRolesByTrait_b__3(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMEREFTEAM___C__DISPLAYCLASS61_0__GETROLESBYTRAIT_B__3_OFFSET))(this, a1);
		}

	};
}
