#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class PMEDIBJHJOB;

#define MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1902D590)
#define MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1902D5A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotOverNightPopWindowController_TypeDefinitionIndex = 69829;

	class UIInterKnotOverNightPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::PMEDIBJHJOB* _view; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTOVERNIGHTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}
	};
}
