#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class BPIGIJEPBKA;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_CBKJOPAOFEK_OFFSET UNITYSDK_OFFSET(0x179A0850)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ECNDHFACFJG_OFFSET UNITYSDK_OFFSET(0x1799F7C0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_EPNKBDPOPKO_OFFSET UNITYSDK_OFFSET(0x179A07D0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_FNODIPJLPAH_OFFSET UNITYSDK_OFFSET(0x179A0930)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1799F260)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONBKGHJELMM_OFFSET UNITYSDK_OFFSET(0x179A08D0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179A04F0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179A0580)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1799F270)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1799F4B0)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179A0620)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179A0690)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179A0720)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179A0730)
#define MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179A0740)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABStageInfoPopWindowController_TypeDefinitionIndex = 52418;

	class UIRABStageInfoPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* BKCPMNOGCDC; // 0x0
		// static const ::System::String* BKEELPMJAJA; // 0x0
		::BPIGIJEPBKA* _view; // 0x320
		::System::Collections::Generic::List_1<::System::Object*>* ACDKKCINLON; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Int32 EPNKBDPOPKO(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_EPNKBDPOPKO_OFFSET))(this, ABHBKFJKINO);
		}

		::MoleMole::ScrollViewItemWidgetController* CBKJOPAOFEK(::System::Func_1<::MoleMole::UIControlReference*>* JOLDOMEIKEF)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_CBKJOPAOFEK_OFFSET))(this, JOLDOMEIKEF);
		}

		::System::Void ECNDHFACFJG(::System::Int32 NDEKEFOBFNC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ECNDHFACFJG_OFFSET))(this, NDEKEFOBFNC);
		}

		::System::Void ONBKGHJELMM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_ONBKGHJELMM_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* FNODIPJLPAH(::System::Func_1<::MoleMole::UIControlReference*>* JOLDOMEIKEF)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABSTAGEINFOPOPWINDOWCONTROLLER_FNODIPJLPAH_OFFSET))(this, JOLDOMEIKEF);
		}
	};
}
