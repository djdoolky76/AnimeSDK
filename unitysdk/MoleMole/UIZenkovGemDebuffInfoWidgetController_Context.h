#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CHALNAEKBPO;

#define MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1138FE90)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffInfoWidgetController_Context_TypeDefinitionIndex = 87211;

	class UIZenkovGemDebuffInfoWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CHALNAEKBPO* Config; // 0x28
		::System::Int32 ZenkovItemID; // 0x30
		::System::Int32 Stack; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFINFOWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
