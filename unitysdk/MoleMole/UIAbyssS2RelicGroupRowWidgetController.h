#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class JHGEEOEHBGM;
class PNENPNKGMGF;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13F32C10)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13F32D20)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13F32CA0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13F32BB0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET UNITYSDK_OFFSET(0x13F33120)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCURRENTSELECT_OFFSET UNITYSDK_OFFSET(0x13F33340)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13F33590)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13F33620)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13F336B0)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13F33750)
#define MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13F337E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RelicGroupRowWidgetController_TypeDefinitionIndex = 75067;

	class UIAbyssS2RelicGroupRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::PNENPNKGMGF* _view; // 0x2F8
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* ManageredItems; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetClickCallBack(::System::Action_1<::JHGEEOEHBGM*>* clickCallBack)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::JHGEEOEHBGM*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCLICKCALLBACK_OFFSET))(this, clickCallBack);
		}

		::System::Void SetCurrentSelect(::JHGEEOEHBGM* currentData)
		{
			return ((::System::Void(*)(::PVOID, ::JHGEEOEHBGM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER_SETCURRENTSELECT_OFFSET))(this, currentData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2RELICGROUPROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
