#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class Object; }
template <typename T> class ABGINBDKGEK_1;

#define MOLEMOLE_UIURBANMAPRIGHTDOUBLELISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166FED30)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightDoubleListRowWidgetController_Context_TypeDefinitionIndex = 45524;

	class UIUrbanMapRightDoubleListRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::ABGINBDKGEK_1<::System::Object*>* BossList; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTDOUBLELISTROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
