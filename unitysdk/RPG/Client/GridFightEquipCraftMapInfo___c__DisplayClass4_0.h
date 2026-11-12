#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD0750)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS4_0__GETRECIPESCONTAINSITEM_B__2_OFFSET UNITYSDK_OFFSET(0xDAD2D80)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass4_0_TypeDefinitionIndex = 66053;

	class GridFightEquipCraftMapInfo___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::UInt32 itemID; // 0x10
		::System::UInt32 seasonID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecipesContainsItem_b__2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS4_0__GETRECIPESCONTAINSITEM_B__2_OFFSET))(this, a1);
		}

	};
}
