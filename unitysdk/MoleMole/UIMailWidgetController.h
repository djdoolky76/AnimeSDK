#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class AAEKBENGCBO;
class AKLGDPKJDKB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIMAILWIDGETCONTROLLER_BECKENPHCIO_OFFSET UNITYSDK_OFFSET(0x19A7D080)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_DNGEAAHHPBC_OFFSET UNITYSDK_OFFSET(0x19A7B2D0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_GPCODOCAOCM_OFFSET UNITYSDK_OFFSET(0x19A7D3B0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET UNITYSDK_OFFSET(0x19A7B180)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_JGENOJBGCKN_OFFSET UNITYSDK_OFFSET(0x19A7BAB0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET UNITYSDK_OFFSET(0x19A7CF20)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A7AC60)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19A7B280)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A7AED0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A7B3E0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A7ACF0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A7AE60)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_PDKCHDBODJB_1_OFFSET UNITYSDK_OFFSET(0x19A7C380)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_PDKCHDBODJB_OFFSET UNITYSDK_OFFSET(0x19A7AF90)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER_SETGOTSTATE_OFFSET UNITYSDK_OFFSET(0x19A7B440)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19A7B730)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19A7B740)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x19A7B7D0)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19A7B860)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19A7B900)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19A7B990)
#define MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19A7BA20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMailWidgetController_TypeDefinitionIndex = 38695;

	class UIMailWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::AKLGDPKJDKB* _view; // 0x2F8
		::AAEKBENGCBO* KNBLCBAJEOC; // 0x300
		::System::UInt32 ACHBBPJIBIE; // 0x308
		::System::Byte _padding0[0x4];
		::MoleMole::UIGeneralPopUpHintWidgetController* FALCJEPDNFO; // 0x310
		::MoleMole::UIGeneralNewHintWidgetController* DLOFOPBHOCN; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetGotState(::System::Boolean state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_SETGOTSTATE_OFFSET))(this, state);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JGENOJBGCKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_JGENOJBGCKN_OFFSET))(this);
		}

		::System::Void PDKCHDBODJB(::AAEKBENGCBO* KNBLCBAJEOC)
		{
			return ((::System::Void(*)(::PVOID, ::AAEKBENGCBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_PDKCHDBODJB_OFFSET))(this, KNBLCBAJEOC);
		}

		::System::Void KOIDHIAEOAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET))(this);
		}

		::System::Void BECKENPHCIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_BECKENPHCIO_OFFSET))(this);
		}

		::System::Void HJNJLKMIJPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_HJNJLKMIJPH_OFFSET))(this);
		}

		::System::Void DNGEAAHHPBC(::System::Boolean JKBLDFBGBPK)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_DNGEAAHHPBC_OFFSET))(this, JKBLDFBGBPK);
		}

		::System::Void PDKCHDBODJB_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_PDKCHDBODJB_1_OFFSET))(this);
		}

		::System::Void GPCODOCAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAILWIDGETCONTROLLER_GPCODOCAOCM_OFFSET))(this);
		}
	};
}
