#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class EJIMBJACCDA;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { template <typename T> class Func_1; }

#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_CPEMMEIBGGH_OFFSET UNITYSDK_OFFSET(0x1886FCD0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_EPNKBDPOPKO_OFFSET UNITYSDK_OFFSET(0x1886FA10)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_GBCIOIMAIJL_OFFSET UNITYSDK_OFFSET(0x1886F040)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1886EF20)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_HPDKAEDNIEE_OFFSET UNITYSDK_OFFSET(0x1886FB90)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x1886F850)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1886EF30)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1886EFF0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1886F370)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1886F8C0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1886F8D0)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1886F970)
#define MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1886F980)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePVEPageController_TypeDefinitionIndex = 48456;

	class UIAutoBattlePVEPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void GBCIOIMAIJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_GBCIOIMAIJL_OFFSET))(this);
		}

		::EJIMBJACCDA* OGMPOGIHBIK()
		{
			return ((::EJIMBJACCDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Int32 EPNKBDPOPKO(::System::Int32 ABHBKFJKINO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_EPNKBDPOPKO_OFFSET))(this, ABHBKFJKINO);
		}

		::MoleMole::ScrollViewItemWidgetController* HPDKAEDNIEE(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_HPDKAEDNIEE_OFFSET))(this, MNDIBLLFAJI);
		}

		::MoleMole::ScrollViewItemWidgetController* CPEMMEIBGGH(::System::Func_1<::MoleMole::UIControlReference*>* MNDIBLLFAJI)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPVEPAGECONTROLLER_CPEMMEIBGGH_OFFSET))(this, MNDIBLLFAJI);
		}
	};
}
