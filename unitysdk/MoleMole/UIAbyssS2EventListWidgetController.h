#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AKAMKPAELFP;
class BPNGLLLIMDC;
class LBNBIMMAOPJ;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_EENNAFOJIGJ_OFFSET UNITYSDK_OFFSET(0x13A135E0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_KPEHDHGIEKD_OFFSET UNITYSDK_OFFSET(0x13A136B0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_MOMKDKBBMBJ_OFFSET UNITYSDK_OFFSET(0x13A130E0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A12E90)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A12F20)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A12B10)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13A12E20)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13A12FA0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A13340)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A133A0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A13430)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A134C0)
#define MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13A13550)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2EventListWidgetController_TypeDefinitionIndex = 43940;

	class UIAbyssS2EventListWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::AKAMKPAELFP* _view; // 0x2C8
		::BPNGLLLIMDC* PJIMHAAOKLF; // 0x2D0
		::System::Collections::Generic::List_1<::LBNBIMMAOPJ*>* CNFHFFJOJCK; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Collections::Generic::List_1<::LBNBIMMAOPJ*>* configs, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::LBNBIMMAOPJ*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, configs, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void EENNAFOJIGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_EENNAFOJIGJ_OFFSET))(this);
		}

		::System::Void MOMKDKBBMBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_MOMKDKBBMBJ_OFFSET))(this);
		}

		::System::Void KPEHDHGIEKD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2EVENTLISTWIDGETCONTROLLER_KPEHDHGIEKD_OFFSET))(this);
		}
	};
}
