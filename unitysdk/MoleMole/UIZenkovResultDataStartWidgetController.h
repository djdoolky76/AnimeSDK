#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class JDDDGMACMPE;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171C1960)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171C19F0)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171C1890)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171C18F0)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_SETSTARSTATE_OFFSET UNITYSDK_OFFSET(0x171C1A70)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1209EF70)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1209EFD0)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1209F060)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1209F0F0)
#define MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1209F180)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovResultDataStartWidgetController_TypeDefinitionIndex = 41476;

	class UIZenkovResultDataStartWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::JDDDGMACMPE* _view; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetStarState(::System::Boolean lit, ::System::Boolean half)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER_SETSTARSTATE_OFFSET))(this, lit, half);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVRESULTDATASTARTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
