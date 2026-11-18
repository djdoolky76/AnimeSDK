#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIJJNLNMPNL.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class GBOFEFILPJE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_CPHKDAGMFON_OFFSET UNITYSDK_OFFSET(0x13BFC420)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13BFBEE0)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13BFBF70)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13BFBE10)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13BFBE70)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_OVERRIDETAGKEY_OFFSET UNITYSDK_OFFSET(0x13BFC150)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13BFBFF0)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13BFC510)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13BFC570)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13BFC600)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13BFC690)
#define MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13BFC720)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovQuestTypeWidgetController_TypeDefinitionIndex = 70000;

	class UIZenkovQuestTypeWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::GBOFEFILPJE* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::LIJJNLNMPNL type)
		{
			return ((::System::Void(*)(::PVOID, ::LIJJNLNMPNL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, type);
		}

		::System::Void OverrideTagKey(::LIJJNLNMPNL type, ::System::String* textKey)
		{
			return ((::System::Void(*)(::PVOID, ::LIJJNLNMPNL, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_OVERRIDETAGKEY_OFFSET))(this, type, textKey);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::UnityEngine::RectTransform* CPHKDAGMFON(::LIJJNLNMPNL OBNIAHNMHPF)
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID, ::LIJJNLNMPNL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVQUESTTYPEWIDGETCONTROLLER_CPHKDAGMFON_OFFSET))(this, OBNIAHNMHPF);
		}
	};
}
