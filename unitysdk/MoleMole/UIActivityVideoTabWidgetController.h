#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AKIIBAKCEBN;
class CJIEIHEDMME;
class JMMMHPCFKDH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_BEBEFBDBPGI_OFFSET UNITYSDK_OFFSET(0x19912E00)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_DENKIOJIIDA_OFFSET UNITYSDK_OFFSET(0x199125F0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_HCDEMLADPAE_OFFSET UNITYSDK_OFFSET(0x19911BB0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_KCNOMHFHKAC_OFFSET UNITYSDK_OFFSET(0x19912D50)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19911990)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19911A20)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19911860)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19911920)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19911AB0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19912350)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x199123B0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19912440)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x199124D0)
#define MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19912560)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityVideoTabWidgetController_TypeDefinitionIndex = 46191;

	class UIActivityVideoTabWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JMMMHPCFKDH* _view; // 0x2C8
		::UnityEngine::RectTransform* BPIJHOCKJBO; // 0x2D0
		::UnityEngine::RectTransform* BHPEFNFPCDB; // 0x2D8
		::System::Action_1<::System::Int32>* IOECJEIBKLI; // 0x2E0
		::AKIIBAKCEBN* CNPNOANBFIN; // 0x2E8
		::CJIEIHEDMME* DKOGLJIJPAN; // 0x2F0
		::System::Int32 NCNFIEPIEFO; // 0x2F8
		::System::Boolean IJBCKKGNJEN; // 0x2FC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::CJIEIHEDMME* activityBaseData, ::UnityEngine::RectTransform* videoRoot, ::UnityEngine::RectTransform* activityRoot, ::System::Action_1<::System::Int32>* onTabSelected)
		{
			return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*, ::UnityEngine::RectTransform*, ::UnityEngine::RectTransform*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, activityBaseData, videoRoot, activityRoot, onTabSelected);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DENKIOJIIDA(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_DENKIOJIIDA_OFFSET))(this, ABHBKFJKINO);
		}

		::System::Void KCNOMHFHKAC(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_KCNOMHFHKAC_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void HCDEMLADPAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_HCDEMLADPAE_OFFSET))(this);
		}

		::System::Void BEBEFBDBPGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYVIDEOTABWIDGETCONTROLLER_BEBEFBDBPGI_OFFSET))(this);
		}
	};
}
