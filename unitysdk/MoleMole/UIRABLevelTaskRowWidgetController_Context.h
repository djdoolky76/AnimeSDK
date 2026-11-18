#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class AONHAICLNNE;

#define MOLEMOLE_UIRABLEVELTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x167A8000)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABLevelTaskRowWidgetController_Context_TypeDefinitionIndex = 44545;

	class UIRABLevelTaskRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::AONHAICLNNE* data; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABLEVELTASKROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
