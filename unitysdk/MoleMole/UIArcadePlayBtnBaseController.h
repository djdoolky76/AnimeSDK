#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIVirtualPlayBtnBaseController.h"

#define MOLEMOLE_UIARCADEPLAYBTNBASECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19F9A250)

namespace MoleMole
{
	inline static constexpr unsigned int UIArcadePlayBtnBaseController_TypeDefinitionIndex = 39319;

	class UIArcadePlayBtnBaseController : public ::MoleMole::UIVirtualPlayBtnBaseController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARCADEPLAYBTNBASECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
