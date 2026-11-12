#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAddItemSourceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightEquipInfo; }
namespace System { class Object; }

#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xDAD19D0)
#define RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS10_0__GETRECIPESCANCRAFTBYADDITEM_B__2_OFFSET UNITYSDK_OFFSET(0xDAD2460)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipCraftMapInfo___c__DisplayClass10_0_TypeDefinitionIndex = 66048;

	class GridFightEquipCraftMapInfo___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::GridFightEquipInfo* equipInfo; // 0x10
		::RPG::GameCore::GridFightAddItemSourceType sourceType; // 0x18
		::System::UInt32 itemID; // 0x1C
		::System::UInt32 seasonID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRecipesCanCraftByAddItem_b__2(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTEQUIPCRAFTMAPINFO___C__DISPLAYCLASS10_0__GETRECIPESCANCRAFTBYADDITEM_B__2_OFFSET))(this, a1);
		}

	};
}
