#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class OIGKEOIKPEN;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x19679080)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19678ED0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19678F70)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x196790F0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196791D0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x19679230)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x196792D0)
#define MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x19679370)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopClueBrokenClueWidgetController_TypeDefinitionIndex = 90602;

	class UICoopClueBrokenClueWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::OIGKEOIKPEN* OGMPOGIHBIK()
		{
			return ((::OIGKEOIKPEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPCLUEBROKENCLUEWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
