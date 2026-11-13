#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }

#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C735370)
#define RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0__GETROLESBYTRAIT_B__2_OFFSET UNITYSDK_OFFSET(0x1C7380D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightBattleGameContext___c__DisplayClass53_0_TypeDefinitionIndex = 65853;

	class GridFightBattleGameContext___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRolesByTrait_b__2(::RPG::Client::GridFightRole* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightRole*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTBATTLEGAMECONTEXT___C__DISPLAYCLASS53_0__GETROLESBYTRAIT_B__2_OFFSET))(this, a1);
		}

	};
}
