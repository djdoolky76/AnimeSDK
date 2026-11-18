#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x164A14D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIScaryNightChallengeRoleDataWidgetController_Context_TypeDefinitionIndex = 52432;

	class UIScaryNightChallengeRoleDataWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 AvatarID; // 0x28
		::System::Int32 Score; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISCARYNIGHTCHALLENGEROLEDATAWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
