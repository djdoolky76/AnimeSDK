#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19B925E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotPageController_Context_TypeDefinitionIndex = 43360;

	class UIActivityHotPotPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
