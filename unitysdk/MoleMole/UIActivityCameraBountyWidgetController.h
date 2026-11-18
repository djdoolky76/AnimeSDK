#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class ADHIEHKDMFN;
class CBMNPCAPJIF;
class EEBLNDKIOAM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIPhotoTaskRowWidgetController; }

#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1C107B80)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1C107C10)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1C107A30)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1C107B10)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_SETBOUNTYSNAPSHOTDATA_OFFSET UNITYSDK_OFFSET(0x1C107C90)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1081B0)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1C108210)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1C1082A0)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1C108330)
#define MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1C1083C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraBountyWidgetController_TypeDefinitionIndex = 83138;

	class UIActivityCameraBountyWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::ADHIEHKDMFN* _view; // 0x2C8
		::MoleMole::UIPhotoTaskRowWidgetController* NEBLGLOJBMI; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetBountySnapshotData(::EEBLNDKIOAM* snapshot, ::CBMNPCAPJIF* photoActivityQuest)
		{
			return ((::System::Void(*)(::PVOID, ::EEBLNDKIOAM*, ::CBMNPCAPJIF*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER_SETBOUNTYSNAPSHOTDATA_OFFSET))(this, snapshot, photoActivityQuest);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERABOUNTYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
