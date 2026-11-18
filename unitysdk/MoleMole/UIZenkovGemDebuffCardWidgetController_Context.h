#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVGEMDEBUFFCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18F6A1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovGemDebuffCardWidgetController_Context_TypeDefinitionIndex = 86672;

	class UIZenkovGemDebuffCardWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 Total; // 0x28
		::System::Int32 GemDebuffKey; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVGEMDEBUFFCARDWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
