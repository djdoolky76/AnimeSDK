#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS3_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD110210)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS3_0__GETRECIPESCONTAINSITEM_B__2_OFFSET UNITYSDK_OFFSET(0xD110220)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass3_0_TypeDefinitionIndex = 64520;

	class GridFightEquipCraftMapInfo___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS3_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecipesContainsItem_b__2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS3_0__GETRECIPESCONTAINSITEM_B__2_OFFSET))(this, a1);
		}

	};
}
