#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/PBHBAGIPLGK.h"

class CBMDHKLONOL;
class DENNNBBPNEO;
class KIKKNBFEGID;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_FLFNKKOGJMG_OFFSET UNITYSDK_OFFSET(0x1799AE90)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_GGACOAAOGDC_OFFSET UNITYSDK_OFFSET(0x17999F70)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET UNITYSDK_OFFSET(0x1799AE10)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1799A850)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1799A740)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1799A6A0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1799A5F0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1799A7D0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17999C50)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17999D40)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1799A9C0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1799AAA0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1799AB30)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1799ABC0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1799AC60)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1799ACF0)
#define MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1799AD80)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABDataStatWidgetController_TypeDefinitionIndex = 82516;

	class UIRABDataStatWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KIKKNBFEGID* _view; // 0x2C8
		::DENNNBBPNEO* JEBFIPGBIBL; // 0x2D0
		::System::Collections::Generic::List_1<::CBMDHKLONOL*>* FLKHEHCDMFM; // 0x2D8
		::PBHBAGIPLGK DEFMLKJPBLD; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::MoleMole::ScrollViewItemWidgetController* KOIDHIAEOAK(::System::Func_1<::MoleMole::UIControlReference*>* IHFDFJICHLA)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_KOIDHIAEOAK_OFFSET))(this, IHFDFJICHLA);
		}

		::System::Collections::Generic::List_1<::CBMDHKLONOL*>* GGACOAAOGDC()
		{
			return ((::System::Collections::Generic::List_1<::CBMDHKLONOL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_GGACOAAOGDC_OFFSET))(this);
		}

		::System::Void FLFNKKOGJMG(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABDATASTATWIDGETCONTROLLER_FLFNKKOGJMG_OFFSET))(this, ABHBKFJKINO);
		}
	};
}
