#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }
namespace System::Collections::Generic { class KeyValuePair; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1_CTOR_OFFSET UNITYSDK_OFFSET(0xD111100)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1__CANCRAFTTOROLE_B__0_OFFSET UNITYSDK_OFFSET(0xD111270)

namespace RPG::Client
{
	template <typename T>
	class GridFightEquipCraftRecipe___c__DisplayClass4_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Collections::Generic::KeyValuePair* kv; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1_CTOR_OFFSET))(this);
		}

		::System::Boolean _CanCraftToRole_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS4_1__CANCRAFTTOROLE_B__0_OFFSET))(this, a1);
		}

	};
}
