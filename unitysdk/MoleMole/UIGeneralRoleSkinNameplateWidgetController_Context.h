#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A271B90)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralRoleSkinNameplateWidgetController_Context_TypeDefinitionIndex = 92962;

	class UIGeneralRoleSkinNameplateWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* SubName; // 0x28
		::System::String* Name; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALROLESKINNAMEPLATEWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
