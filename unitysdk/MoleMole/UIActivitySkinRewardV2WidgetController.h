#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CJIEIHEDMME;
class MNFDHBGHKEG;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONCLICKSKINBTN_OFFSET UNITYSDK_OFFSET(0x1885F130)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1885EB20)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1885EBB0)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1885E750)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1885EAB0)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_SETROOTACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x1885EF40)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_SETSKINREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x1885EC30)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1885F1C0)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1885F220)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1885F2B0)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1885F340)
#define MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1885F3D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkinRewardV2WidgetController_TypeDefinitionIndex = 69647;

	class UIActivitySkinRewardV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MNFDHBGHKEG* _view; // 0x2C8
		::System::Collections::Generic::List_1<::System::Object*>* JHLOFCCHEKD; // 0x2D0
		::CJIEIHEDMME* rootActivityData; // 0x2D8
		::CJIEIHEDMME* doubleSkinActivityData; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetSkinRewardState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_SETSKINREWARDSTATE_OFFSET))(this);
		}

		::System::Void SetRootActivityData(::CJIEIHEDMME* activityData)
		{
			return ((::System::Void(*)(::PVOID, ::CJIEIHEDMME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_SETROOTACTIVITYDATA_OFFSET))(this, activityData);
		}

		::System::Void OnClickSkinBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER_ONCLICKSKINBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
