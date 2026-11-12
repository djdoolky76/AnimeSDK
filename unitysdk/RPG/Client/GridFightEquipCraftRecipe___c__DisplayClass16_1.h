#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipItemData; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS16_1_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD4DD0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS16_1___CANCRAFTTOROLEWITHSOURCE_B__0_OFFSET UNITYSDK_OFFSET(0xDAD4E80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftRecipe___c__DisplayClass16_1_TypeDefinitionIndex = 66044;

	template <typename T>
	class GridFightEquipCraftRecipe___c__DisplayClass16_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::UInt32> kv; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS16_1_CTOR_OFFSET))(this);
		}

		::System::Boolean __CanCraftToRoleWithSource_b__0(::RPG::Client::GridFightEquipItemData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::GridFightEquipItemData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTRECIPE___C__DISPLAYCLASS16_1___CANCRAFTTOROLEWITHSOURCE_B__0_OFFSET))(this, a1);
		}

	};
}
