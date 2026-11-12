#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightPendingActionManager; }
namespace RPG::Client { class GridFightPreparationPendingAction; }

#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER___C__DISPLAYCLASS13_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDC20170)
#define RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER___C__DISPLAYCLASS13_0__INSERTACTION_B__0_OFFSET UNITYSDK_OFFSET(0xDC20710)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPendingActionManager___c__DisplayClass13_0_TypeDefinitionIndex = 66709;

	class GridFightPendingActionManager___c__DisplayClass13_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightPreparationPendingAction* action; // 0x10
		::RPG::Client::GridFightPendingActionManager* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER___C__DISPLAYCLASS13_0_CTOR_OFFSET))(this);
		}

		::System::Void _InsertAction_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPENDINGACTIONMANAGER___C__DISPLAYCLASS13_0__INSERTACTION_B__0_OFFSET))(this);
		}

	};
}
