#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMJOBMIJLD.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x12FC0F90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListkRowWidgetController_ItemData_TypeDefinitionIndex = 75758;

	class UIZenkovWishListkRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::HJMJOBMIJLD SrcType; // 0x10
		::System::UInt32 SrcId; // 0x14
		::System::Boolean IsEmpty; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
