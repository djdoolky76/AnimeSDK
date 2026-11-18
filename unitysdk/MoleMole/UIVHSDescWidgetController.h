#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIGeneralShopDescWidgetController.h"

class OKNCHCKBLHI;

#define MOLEMOLE_UIVHSDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET UNITYSDK_OFFSET(0x13BD19A0)
#define MOLEMOLE_UIVHSDESCWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BD1B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSDescWidgetController_TypeDefinitionIndex = 79878;

	class UIVHSDescWidgetController : public ::MoleMole::UIGeneralShopDescWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSDESCWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void SetByTemplate(::OKNCHCKBLHI* template_)
		{
			return ((::System::Void(*)(::PVOID, ::OKNCHCKBLHI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSDESCWIDGETCONTROLLER_SETBYTEMPLATE_OFFSET))(this, template_);
		}
	};
}
