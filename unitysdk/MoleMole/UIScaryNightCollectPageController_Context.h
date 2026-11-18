#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x14CCD8A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightCollectPageController_Context_TypeDefinitionIndex = 81850;

	class UIScaryNightCollectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CardID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
