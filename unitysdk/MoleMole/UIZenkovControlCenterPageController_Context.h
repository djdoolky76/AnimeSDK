#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMKJPFMGGHJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVCONTROLCENTERPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x13B3EF50)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovControlCenterPageController_Context_TypeDefinitionIndex = 84536;

	class UIZenkovControlCenterPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::GMKJPFMGGHJ InitBuildingType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCONTROLCENTERPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
