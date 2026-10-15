#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAHKKMIFGGB.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipInfo; }

#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD118260)
#define RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_0__GETEQUIPRECOMMENDROLEIDLIST_B__0_OFFSET UNITYSDK_OFFSET(0xD118AB0)

namespace RPG::Client
{
	class GridFightEquipInfo___c__DisplayClass37_0 : public ::System::Object
	{
	public:
		::CAHKKMIFGGB comparerContext; // 0x10
		::RPG::Client::GridFightEquipInfo* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_0_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetEquipRecommendRoleIDList_b__0(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPINFO___C__DISPLAYCLASS37_0__GETEQUIPRECOMMENDROLEIDLIST_B__0_OFFSET))(this, a1, a2);
		}

	};
}
