#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class FELJAMNHOKI;
class FHCMGOANDBE;
namespace MoleMole { class UIActivityPinkRowWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ECDIDAFCFIE_OFFSET UNITYSDK_OFFSET(0x19825A10)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_HDLEHAPMDGA_OFFSET UNITYSDK_OFFSET(0x198258B0)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ISSKINGET_OFFSET UNITYSDK_OFFSET(0x198253E0)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_KDLADFIENBL_OFFSET UNITYSDK_OFFSET(0x19825240)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_MHBCDAIJGCE_OFFSET UNITYSDK_OFFSET(0x19825C20)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_NIAFPCPDCNP_OFFSET UNITYSDK_OFFSET(0x19825760)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19825840)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19825020)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19825190)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x198250C0)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19825530)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19825590)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19825630)
#define MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x198256D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityPinkRowWidgetController_TypeDefinitionIndex = 79207;

	class UIActivityPinkRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIActivityPinkRowWidgetController_Context* AAOCANGHBDG; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		static ::System::Boolean IsSkinGet(::System::Int32 itemId)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ISSKINGET_OFFSET))(itemId);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::FHCMGOANDBE* NIAFPCPDCNP()
		{
			return ((::FHCMGOANDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_NIAFPCPDCNP_OFFSET))(this);
		}

		::System::Void HDLEHAPMDGA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_HDLEHAPMDGA_OFFSET))(this);
		}

		::System::Void ECDIDAFCFIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_ECDIDAFCFIE_OFFSET))(this);
		}

		::System::Void KDLADFIENBL(::MoleMole::UIActivityPinkRowWidgetController_Context* AAOCANGHBDG)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivityPinkRowWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_KDLADFIENBL_OFFSET))(this, AAOCANGHBDG);
		}

		::System::Void MHBCDAIJGCE(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_MHBCDAIJGCE_OFFSET))(this, KOIBHLHLMFC);
		}

		::FELJAMNHOKI* OGMPOGIHBIK()
		{
			return ((::FELJAMNHOKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYPINKROWWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
