#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWindowController.h"

#define MOLEMOLE_UIZENKOVSEASONRESULTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1671CDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovSeasonResultPageController_TypeDefinitionIndex = 51547;

	class UIZenkovSeasonResultPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVSEASONRESULTPAGECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
