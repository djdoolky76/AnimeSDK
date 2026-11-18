#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPBIMDNDPLK.h"
#include "unitysdk/MoleMole/ESystemSettingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class NAKAFNEHFGA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET UNITYSDK_OFFSET(0x17DA2F40)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_JBOLFLOHOAH_OFFSET UNITYSDK_OFFSET(0x17DA34C0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_JCBJPLGNKMP_OFFSET UNITYSDK_OFFSET(0x17DA3840)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_KNGMCCPFEOJ_OFFSET UNITYSDK_OFFSET(0x17DA3620)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_NIPKAPNIJMK_OFFSET UNITYSDK_OFFSET(0x17DA39F0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DA2D60)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DA3230)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DA2DF0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17DA32B0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17DA3310)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17DA33A0)
#define MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17DA3430)

namespace MoleMole
{
	inline static constexpr unsigned int UISettingJumpWidgetController_TypeDefinitionIndex = 55647;

	class UISettingJumpWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::NAKAFNEHFGA* _view; // 0x2C8
		::System::Boolean MBMIDGJKKDG; // 0x2D0
		::System::Byte _padding0[0x3];
		::System::Int32 LPBPGOBKOHL; // 0x2D4
		::HPBIMDNDPLK FOIJODLFJFM; // 0x2D8
		::MoleMole::ESystemSettingType AGEKGBDOBKH; // 0x2DC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void JBOLFLOHOAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_JBOLFLOHOAH_OFFSET))(this);
		}

		::System::Void KNGMCCPFEOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_KNGMCCPFEOJ_OFFSET))(this);
		}

		::System::Void BHCNMKAFFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_BHCNMKAFFNI_OFFSET))(this);
		}

		::System::Void NIPKAPNIJMK(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_NIPKAPNIJMK_OFFSET))(this, KOIBHLHLMFC);
		}

		::System::Void JCBJPLGNKMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISETTINGJUMPWIDGETCONTROLLER_JCBJPLGNKMP_OFFSET))(this);
		}
	};
}
