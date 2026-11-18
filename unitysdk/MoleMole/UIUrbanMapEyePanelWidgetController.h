#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ANJHJCMOPAE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanMapEyePanelWidgetItemWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_CHECKUPDATE_OFFSET UNITYSDK_OFFSET(0x166FDCF0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_CLGLHHKNFFI_OFFSET UNITYSDK_OFFSET(0x166FD970)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_FABMDFEGMEK_OFFSET UNITYSDK_OFFSET(0x166FD6D0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_LELIGBALFCC_OFFSET UNITYSDK_OFFSET(0x166FE210)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166FDA80)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166FDB10)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166FD660)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166FD890)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_PFBCKBPCLFN_OFFSET UNITYSDK_OFFSET(0x166FE2D0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x166FDEF0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x166FDFD0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x166FE060)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x166FE0F0)
#define MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x166FE180)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapEyePanelWidgetController_TypeDefinitionIndex = 75637;

	class UIUrbanMapEyePanelWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::ANJHJCMOPAE* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIUrbanMapEyePanelWidgetItemWidgetController*>* PMFEEGILCCO; // 0x2D0
		::System::UInt32 GIBKDIAHPLB; // 0x2D8
		::System::Boolean OAIPGGKAPED; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void CheckUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_CHECKUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CLGLHHKNFFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_CLGLHHKNFFI_OFFSET))(this);
		}

		::System::Void PFBCKBPCLFN(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_PFBCKBPCLFN_OFFSET))(this, PIIPCLCCOIG);
		}

		::System::Void LELIGBALFCC(::System::UInt32 KAMKFCNBHNF)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_LELIGBALFCC_OFFSET))(this, KAMKFCNBHNF);
		}

		::System::Void FABMDFEGMEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPEYEPANELWIDGETCONTROLLER_FABMDFEGMEK_OFFSET))(this);
		}
	};
}
