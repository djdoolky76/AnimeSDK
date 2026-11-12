#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRole; }
namespace RPG::Client { class RoleStarChangeData; }

#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS51_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDB4EF60)
#define RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS51_0___ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_B__0_OFFSET UNITYSDK_OFFSET(0xDB506E0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightGameSession___c__DisplayClass51_0_TypeDefinitionIndex = 66417;

	class GridFightGameSession___c__DisplayClass51_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightRole* role; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS51_0_CTOR_OFFSET))(this);
		}

		::System::Boolean __AddRoleIDChangedRoleToBattleChangeEvent_b__0(::RPG::Client::RoleStarChangeData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RoleStarChangeData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTGAMESESSION___C__DISPLAYCLASS51_0___ADDROLEIDCHANGEDROLETOBATTLECHANGEEVENT_B__0_OFFSET))(this, a1);
		}

	};
}
