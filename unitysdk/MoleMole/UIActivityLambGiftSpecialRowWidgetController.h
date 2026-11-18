#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOIACDBLCAK.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class FCIHHFJMMJK;
class LMFPLIFFHDM;
namespace MoleMole { class UIActivityLambGiftItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET UNITYSDK_OFFSET(0x13A31750)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A30A00)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13A30B10)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A30A90)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A30530)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x13A312E0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13A31980)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13A31990)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x13A31A20)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13A31AC0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13A31B50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityLambGiftSpecialRowWidgetController_TypeDefinitionIndex = 59734;

	class UIActivityLambGiftSpecialRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 CKEEECJBAID = 0x2; // 0x0
		::LMFPLIFFHDM* _view; // 0x2F8
		::FCIHHFJMMJK* LADPIPOMBJM; // 0x300
		::Il2CppArray<::MoleMole::UIActivityLambGiftItemWidgetController*>* PNAJMHCNIKA; // 0x308
		::System::Collections::Generic::Dictionary_2<::LOIACDBLCAK, ::UnityEngine::GameObject*>* DCOGHJDCBNG; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickRewardItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET))(this);
		}

		::System::Void RefreshRewardState(::LOIACDBLCAK nowRewardState)
		{
			return ((::System::Void(*)(::PVOID, ::LOIACDBLCAK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET))(this, nowRewardState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTSPECIALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
