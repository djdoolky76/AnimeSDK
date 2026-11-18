#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBMMDAFKB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1805D040)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryActivityPageController_Context_TypeDefinitionIndex = 51761;

	class UIGroceryActivityPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::DJPBMMDAFKB activityType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYACTIVITYPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
