#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class MPDDADKFPBP;

#define MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17F87EE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnWidgetController_Context_TypeDefinitionIndex = 55106;

	class UIItemIconBtnWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::MPDDADKFPBP* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
