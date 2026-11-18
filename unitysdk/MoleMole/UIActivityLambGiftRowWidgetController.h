#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LOIACDBLCAK.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class FCIHHFJMMJK;
class LAJOPJANACI;
namespace MoleMole { class UIActivityLambGiftItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET UNITYSDK_OFFSET(0x19159B30)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19158DE0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19158EF0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19158E70)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19158910)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x191596C0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19159D60)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19159D70)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19159E00)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19159EA0)
#define MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19159F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityLambGiftRowWidgetController_TypeDefinitionIndex = 45306;

	class UIActivityLambGiftRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::Int32 CKEEECJBAID = 0x2; // 0x0
		::LAJOPJANACI* _view; // 0x2F8
		::FCIHHFJMMJK* LADPIPOMBJM; // 0x300
		::Il2CppArray<::MoleMole::UIActivityLambGiftItemWidgetController*>* PNAJMHCNIKA; // 0x308
		::System::Collections::Generic::Dictionary_2<::LOIACDBLCAK, ::UnityEngine::GameObject*>* DCOGHJDCBNG; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnClickRewardItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_ONCLICKREWARDITEM_OFFSET))(this);
		}

		::System::Void RefreshRewardState(::LOIACDBLCAK nowRewardState)
		{
			return ((::System::Void(*)(::PVOID, ::LOIACDBLCAK))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET))(this, nowRewardState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYLAMBGIFTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
