#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseDayTabWidgetController.h"

class KEIIDJNOFOH;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1918A810)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x1918A910)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1918AF90)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1918AFF0)
#define MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_REFRESHENTRY_OFFSET UNITYSDK_OFFSET(0x1918B0C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooUAVDayTabWidgetController_TypeDefinitionIndex = 83014;

	class UIBangbooUAVDayTabWidgetController : public ::MoleMole::UITowerDefenseDayTabWidgetController
	{
	public:
		::KEIIDJNOFOH* _view; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshEntry(::System::Int32 entryid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER_REFRESHENTRY_OFFSET))(this, entryid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshEntry(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVDAYTABWIDGETCONTROLLER___BASE_REFRESHENTRY_OFFSET))(this, P0);
		}
	};
}
