#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JFDMHLOBDGB;
namespace MoleMole { class UIMedalIconRowWidgetController_Context; }

#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183F7420)
#define MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__REFRESHMEDALVIEW_B__0_OFFSET UNITYSDK_OFFSET(0x183F7430)

namespace MoleMole
{
	inline static constexpr unsigned int UIMedalEditPopWindowController___c__DisplayClass15_0_TypeDefinitionIndex = 48429;

	class UIMedalEditPopWindowController___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::JFDMHLOBDGB* currentDisplayData; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshMedalView_b__0(::MoleMole::UIMedalIconRowWidgetController_Context* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIMedalIconRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMEDALEDITPOPWINDOWCONTROLLER___C__DISPLAYCLASS15_0__REFRESHMEDALVIEW_B__0_OFFSET))(this, context);
		}
	};
}
