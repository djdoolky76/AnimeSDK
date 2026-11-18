#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HJMJOBMIJLD.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FF9950)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovWishListkRowWidgetController_ItemData_TypeDefinitionIndex = 54405;

	class UIBangkovWishListkRowWidgetController_ItemData : public ::System::Object
	{
	public:
		::System::Boolean IsEmpty; // 0x10
		::System::Byte _padding0[0x3];
		::HJMJOBMIJLD SrcType; // 0x14
		::System::UInt32 SrcId; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVWISHLISTKROWWIDGETCONTROLLER_ITEMDATA__CTOR_OFFSET))(this);
		}
	};
}
