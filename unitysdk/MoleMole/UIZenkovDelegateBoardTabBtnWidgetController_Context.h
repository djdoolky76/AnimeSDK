#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHMFPHBDBAD.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIZENKOVDELEGATEBOARDTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12C09930)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovDelegateBoardTabBtnWidgetController_Context_TypeDefinitionIndex = 66507;

	class UIZenkovDelegateBoardTabBtnWidgetController_Context : public ::System::Object
	{
	public:
		::System::Action_1<::IHMFPHBDBAD>* OnTabClicked; // 0x10
		::IHMFPHBDBAD SubType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVDELEGATEBOARDTABBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
