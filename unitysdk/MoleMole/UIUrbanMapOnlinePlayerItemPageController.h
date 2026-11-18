#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OHIKNKIKPNI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIUrbanOnLinePlayerWidgetContext; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1709FEA0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_LHHDJMNEJLO_OFFSET UNITYSDK_OFFSET(0x170A04E0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x170A01D0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1709FEB0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1709FFC0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170A0240)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170A02B0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x170A0310)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170A03B0)
#define MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170A0450)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapOnlinePlayerItemPageController_TypeDefinitionIndex = 69139;

	class UIUrbanMapOnlinePlayerItemPageController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIUrbanOnLinePlayerWidgetContext* DAAAEJDBNFI; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::OHIKNKIKPNI* OGMPOGIHBIK()
		{
			return ((::OHIKNKIKPNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void LHHDJMNEJLO(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPONLINEPLAYERITEMPAGECONTROLLER_LHHDJMNEJLO_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
