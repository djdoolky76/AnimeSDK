#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMJIDLEMBON;
namespace RPG::Client { class EquipmentItemData; }
namespace System { class String; }

#define PMJIDLEMBON___C__DISPLAYCLASS1_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC323AC0)
#define PMJIDLEMBON___C__DISPLAYCLASS1_0__CREATEITEM_B__0_OFFSET UNITYSDK_OFFSET(0xC323AE0)

	class PMJIDLEMBON___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::PMJIDLEMBON* __4__this; // 0x10
		::RPG::Client::EquipmentItemData* equip; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJIDLEMBON___C__DISPLAYCLASS1_0_CTOR_OFFSET))(this);
		}

		::System::String* _CreateItem_b__0()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMJIDLEMBON___C__DISPLAYCLASS1_0__CREATEITEM_B__0_OFFSET))(this);
		}

	};
