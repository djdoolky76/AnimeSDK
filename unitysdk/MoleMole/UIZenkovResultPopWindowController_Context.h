#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class BDNDEKNMBOH;
class LPGNKALPGAF;

#define MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x170D8F50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultPopWindowController_Context_TypeDefinitionIndex = 40679;

	class UIZenkovResultPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::LPGNKALPGAF* DirectNotify; // 0x28
		::BDNDEKNMBOH* GameContext; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
