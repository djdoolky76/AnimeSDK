#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMJOBMIJLD.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x10588F60)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListDialogRowWidgetController_ItemData_TypeDefinitionIndex = 49951;

	class UIZenkovWishListDialogRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::HJMJOBMIJLD SrcType; // 0x10
		::System::UInt32 SrcId; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTDIALOGROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
