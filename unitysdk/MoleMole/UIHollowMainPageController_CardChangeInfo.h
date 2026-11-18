#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIHollowMainPageController_CardSlot; }

#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ADD_OFFSET UNITYSDK_OFFSET(0x176A5480)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x176A5460)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x176A54C0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_SLOT_OFFSET UNITYSDK_OFFSET(0x176A54A0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ADD_OFFSET UNITYSDK_OFFSET(0x176A5490)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEMID_OFFSET UNITYSDK_OFFSET(0x176A5470)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x176A54D0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_SLOT_OFFSET UNITYSDK_OFFSET(0x176A54B0)
#define MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x176A54E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMainPageController_CardChangeInfo_TypeDefinitionIndex = 84628;

	class UIHollowMainPageController_CardChangeInfo : public ::System::Object
	{
	public:
		::HGAJKHIMKJP* _item_k__BackingField; // 0x10
		::MoleMole::UIHollowMainPageController_CardSlot* _slot_k__BackingField; // 0x18
		::System::Boolean _add_k__BackingField; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 _itemid_k__BackingField; // 0x24

		::System::Void _ctor(::HGAJKHIMKJP* item, ::System::Boolean add, ::MoleMole::UIHollowMainPageController_CardSlot* tmpSlot)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*, ::System::Boolean, ::MoleMole::UIHollowMainPageController_CardSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO__CTOR_OFFSET))(this, item, add, tmpSlot);
		}

		::System::Int32 get_itemid()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEMID_OFFSET))(this);
		}

		::System::Void set_itemid(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEMID_OFFSET))(this, value);
		}

		::System::Boolean get_add()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ADD_OFFSET))(this);
		}

		::System::Void set_add(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ADD_OFFSET))(this, value);
		}

		::MoleMole::UIHollowMainPageController_CardSlot* get_slot()
		{
			return ((::MoleMole::UIHollowMainPageController_CardSlot*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_SLOT_OFFSET))(this);
		}

		::System::Void set_slot(::MoleMole::UIHollowMainPageController_CardSlot* value)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHollowMainPageController_CardSlot*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_SLOT_OFFSET))(this, value);
		}

		::HGAJKHIMKJP* get_item()
		{
			return ((::HGAJKHIMKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_GET_ITEM_OFFSET))(this);
		}

		::System::Void set_item(::HGAJKHIMKJP* value)
		{
			return ((::System::Void(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMAINPAGECONTROLLER_CARDCHANGEINFO_SET_ITEM_OFFSET))(this, value);
		}
	};
}
