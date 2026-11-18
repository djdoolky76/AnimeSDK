#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GGAKHGCLJFE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UINewsStyleWidgetController; }

#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_DEMGPEMFDMB_OFFSET UNITYSDK_OFFSET(0x15D1F520)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ENABLEFOCUS_OFFSET UNITYSDK_OFFSET(0x15D1F910)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D1F7A0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D1F830)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D1F330)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET UNITYSDK_OFFSET(0x15D1F8B0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D1F970)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D1F9D0)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D1FA60)
#define MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D1FAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UINewsStandContentWidgetController_TypeDefinitionIndex = 83279;

	class UINewsStandContentWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GGAKHGCLJFE* _view; // 0x2C8
		::MoleMole::UINewsStyleWidgetController* PDPFJCCLGEN; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowDetailWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_SHOWDETAILWINDOW_OFFSET))(this);
		}

		::System::Void EnableFocus(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_ENABLEFOCUS_OFFSET))(this, enable);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::UINewsStyleWidgetController* DEMGPEMFDMB(::System::Int32 IFBIKDHCCOF)
		{
			return ((::MoleMole::UINewsStyleWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWSSTANDCONTENTWIDGETCONTROLLER_DEMGPEMFDMB_OFFSET))(this, IFBIKDHCCOF);
		}
	};
}
