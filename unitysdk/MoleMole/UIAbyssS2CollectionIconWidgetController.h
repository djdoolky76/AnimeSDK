#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ELIGOENBOLP;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }

#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A74CFE0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A74D070)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A74CF10)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A74CF70)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A74D0F0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x1A74D1B0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETOUTLINE_OFFSET UNITYSDK_OFFSET(0x1A74D230)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A74D2B0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A74D310)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A74D3A0)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A74D430)
#define MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A74D4C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2CollectionIconWidgetController_TypeDefinitionIndex = 56866;

	class UIAbyssS2CollectionIconWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::ELIGOENBOLP* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::String* iconPath, ::System::Boolean outlineActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, iconPath, outlineActive);
		}

		::System::Void SetOutline(::System::Boolean outlineActive)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETOUTLINE_OFFSET))(this, outlineActive);
		}

		::System::Void SetIcon(::System::String* iconPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER_SETICON_OFFSET))(this, iconPath);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2COLLECTIONICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
