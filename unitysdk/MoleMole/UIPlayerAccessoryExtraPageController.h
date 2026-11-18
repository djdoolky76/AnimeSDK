#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPlayerAccessoryPageController.h"

#define MOLEMOLE_UIPLAYERACCESSORYEXTRAPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1744A450)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryExtraPageController_TypeDefinitionIndex = 47125;

	class UIPlayerAccessoryExtraPageController : public ::MoleMole::UIPlayerAccessoryPageController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYEXTRAPAGECONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
