#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTCHALLENGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1480EDC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightChallengePageController_Context_TypeDefinitionIndex = 75777;

	class UIScaryNightChallengePageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
