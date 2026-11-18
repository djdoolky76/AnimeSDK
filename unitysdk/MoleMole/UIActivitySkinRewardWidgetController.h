#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class NMAJOLCAHPF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x17032D60)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17032C50)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17032CE0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17032A00)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17032BE0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_SETSKINREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x17032DB0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170330A0)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17033100)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17033190)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17033220)
#define MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170332B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySkinRewardWidgetController_TypeDefinitionIndex = 47970;

	class UIActivitySkinRewardWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::NMAJOLCAHPF* _view; // 0x2C8
		::System::Collections::Generic::List_1<::System::Object*>* PCJGDFMOGCI; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::NMAJOLCAHPF* GetView()
		{
			return ((::NMAJOLCAHPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetSkinRewardState(::System::Collections::Generic::List_1<::System::Int32>* skinList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER_SETSKINREWARDSTATE_OFFSET))(this, skinList);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSKINREWARDWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
