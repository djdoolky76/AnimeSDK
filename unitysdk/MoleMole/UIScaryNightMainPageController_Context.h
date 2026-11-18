#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15C689F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightMainPageController_Context_TypeDefinitionIndex = 91401;

	class UIScaryNightMainPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 OpenArg; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTMAINPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
