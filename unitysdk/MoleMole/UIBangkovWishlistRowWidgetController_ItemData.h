#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMJOBMIJLD.h"
#include "unitysdk/OFDKEANKAIL.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A24D290)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishlistRowWidgetController_ItemData_TypeDefinitionIndex = 65565;

	class UIBangkovWishlistRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::HJMJOBMIJLD SrcType; // 0x10
		::System::UInt32 SrcId; // 0x14
		::OFDKEANKAIL PlayType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
