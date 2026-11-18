#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class NKAFHDNBAJN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_KKJCBHLIDDL_OFFSET UNITYSDK_OFFSET(0x17F8C1C0)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_NDJGMHACKGJ_OFFSET UNITYSDK_OFFSET(0x17F8C7C0)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F8BBC0)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17F8BD40)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F8BC50)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F8BB60)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17F8C480)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17F8C570)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x17F8C600)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17F8C6A0)
#define MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17F8C730)

namespace MoleMole
{
	inline static constexpr unsigned int UILevelUpDetailsRow02WidgetController_TypeDefinitionIndex = 55662;

	class UILevelUpDetailsRow02WidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::NKAFHDNBAJN* _view; // 0x2F8
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* JEMGKNPHNLN; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* MHHAHNBHECH; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnSmallWidgetController* NDJGMHACKGJ(::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* KLOOKFMCDMG, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* LALLLNDBNIG, ::System::Int32 HPEMFJDOAKL)
		{
			return ((::MoleMole::UIItemIconBtnSmallWidgetController*(*)(::PVOID, ::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_NDJGMHACKGJ_OFFSET))(this, KLOOKFMCDMG, LALLLNDBNIG, HPEMFJDOAKL);
		}

		::System::Void KKJCBHLIDDL(::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*>* ACKLLJFMLHL, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* LALLLNDBNIG, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* BNFJGHMLGID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*>*, ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVELUPDETAILSROW02WIDGETCONTROLLER_KKJCBHLIDDL_OFFSET))(this, ACKLLJFMLHL, LALLLNDBNIG, BNFJGHMLGID);
		}
	};
}
