#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHGNMNLLHF;

#define MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17857790)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRoleCardWidgetController_Context_TypeDefinitionIndex = 63718;

	class UIHandBookRoleCardWidgetController_Context : public ::System::Object
	{
	public:
		::BPHGNMNLLHF* AvatarData; // 0x10
		::System::Boolean IsPromoted; // 0x18
		::System::Boolean IsExclusive; // 0x19
		::System::Boolean IsShowWishListTarget; // 0x1A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKROLECARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
