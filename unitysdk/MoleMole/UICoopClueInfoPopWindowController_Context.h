#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class CPINLODJHPN_CPOIENCAPPG;

#define MOLEMOLE_UICOOPCLUEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1705A800)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueInfoPopWindowController_Context_TypeDefinitionIndex = 56378;

	class UICoopClueInfoPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::CPINLODJHPN_CPOIENCAPPG* Data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEINFOPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
