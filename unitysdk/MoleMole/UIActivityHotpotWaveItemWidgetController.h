#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class MPPPPIKDEHM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_CLOSEBYSCALE_OFFSET UNITYSDK_OFFSET(0x1A20A1C0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_JHJIIOHCBGM_OFFSET UNITYSDK_OFFSET(0x1A20DF70)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A20E010)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A20DE50)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A20E0A0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A20DD80)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A20DDE0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_REGONCLOSEDEALLOCATE_OFFSET UNITYSDK_OFFSET(0x1A1FF700)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SETBUBBLEINDEX_OFFSET UNITYSDK_OFFSET(0x1A1FF6B0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWBYSCALE_OFFSET UNITYSDK_OFFSET(0x1A20DEC0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWWAVE_OFFSET UNITYSDK_OFFSET(0x1A1FF8C0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A20E120)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A20E1C0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A20E250)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A20E2F0)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A20E380)
#define MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A20E410)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotWaveItemWidgetController_TypeDefinitionIndex = 53579;

	class UIActivityHotpotWaveItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MPPPPIKDEHM* _view; // 0x2C8
		::System::Int32 PPMHKDNNDNE; // 0x2D0
		::System::Byte _padding0[0x4];
		::System::Action_1<::MoleMole::UIActivityHotpotWaveItemWidgetController*>* OEOEFPBOAOB; // 0x2D8
		::System::String* BKOLCDPOJAL; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetBubbleIndex(::System::Int32 bubbleIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SETBUBBLEINDEX_OFFSET))(this, bubbleIndex);
		}

		::System::Void ShowWave()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWWAVE_OFFSET))(this);
		}

		::System::Void RegOnCloseDeallocate(::System::Action_1<::MoleMole::UIActivityHotpotWaveItemWidgetController*>* onDeallocate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::MoleMole::UIActivityHotpotWaveItemWidgetController*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_REGONCLOSEDEALLOCATE_OFFSET))(this, onDeallocate);
		}

		::System::Void CloseByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_CLOSEBYSCALE_OFFSET))(this);
		}

		::System::Void ShowByScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_SHOWBYSCALE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::Cysharp::Threading::Tasks::UniTask JHJIIOHCBGM()
		{
			return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTWAVEITEMWIDGETCONTROLLER_JHJIIOHCBGM_OFFSET))(this);
		}
	};
}
