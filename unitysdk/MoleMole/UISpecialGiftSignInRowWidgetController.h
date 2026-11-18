#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class ALHODHABIIN;
class GNIGBODIFOL;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_DNOPKFKKBEI_OFFSET UNITYSDK_OFFSET(0x15D656F0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ECKFDOJKBHC_OFFSET UNITYSDK_OFFSET(0x15D65400)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_GETITEMLIST_OFFSET UNITYSDK_OFFSET(0x15D650D0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_OEPAFMHPIFH_OFFSET UNITYSDK_OFFSET(0x15D64400)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D641F0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15D64300)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D64280)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D64080)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15D65120)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15D651B0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x15D65240)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15D652E0)
#define MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15D65370)

namespace MoleMole
{
	inline static constexpr unsigned int UISpecialGiftSignInRowWidgetController_TypeDefinitionIndex = 71425;

	class UISpecialGiftSignInRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::ALHODHABIIN* _view; // 0x2F8
		::GNIGBODIFOL* LGDIOLJHIGP; // 0x300
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* CDMBEOFBKCL; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GetItemList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_GETITEMLIST_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void ECKFDOJKBHC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_ECKFDOJKBHC_OFFSET))(this);
		}

		::System::Void OEPAFMHPIFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_OEPAFMHPIFH_OFFSET))(this);
		}

		::System::Boolean DNOPKFKKBEI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISPECIALGIFTSIGNINROWWIDGETCONTROLLER_DNOPKFKKBEI_OFFSET))(this);
		}
	};
}
