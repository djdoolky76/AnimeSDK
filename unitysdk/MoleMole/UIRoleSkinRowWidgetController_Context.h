#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/MoleMole/UIRoleSkinRowWidgetController_ERoleCardType.h"

class PNIHGNDLMIN;

#define MOLEMOLE_UIROLESKINROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x17BE6630)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSkinRowWidgetController_Context_TypeDefinitionIndex = 63817;

	class UIRoleSkinRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::PNIHGNDLMIN* data; // 0x28
		::MoleMole::UIRoleSkinRowWidgetController_ERoleCardType roleCardType; // 0x30
		::System::Boolean isGetMethodPreview; // 0x34
		::System::Boolean isAvatarObtained; // 0x35

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESKINROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
