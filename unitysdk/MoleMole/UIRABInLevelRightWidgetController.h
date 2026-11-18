#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CLEDLOMCHEI;
class JJOKKBDDGNN;
class JPGAKCLPEPK;
class ODNBJIEICJH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIRABDataStatWidgetController; }
namespace MoleMole { class UIRABInLevelBangbooInfoWidgetController; }
namespace MoleMole { class UIRABInLevelPageController; }

#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_BINDVIEW_OFFSET UNITYSDK_OFFSET(0x18EE4660)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEBANGBOOINFO_OFFSET UNITYSDK_OFFSET(0x18EE4B60)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEDATASTAT_OFFSET UNITYSDK_OFFSET(0x18EE5000)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_HMFKIIDIHAK_OFFSET UNITYSDK_OFFSET(0x18EE5450)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EE4550)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EE45E0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EE43E0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EE44E0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENBANGBOOINFO_OFFSET UNITYSDK_OFFSET(0x18EE4820)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENDATASTAT_OFFSET UNITYSDK_OFFSET(0x18EE4D10)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18EE51B0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18EE5210)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18EE52A0)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18EE5330)
#define MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18EE53C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRABInLevelRightWidgetController_TypeDefinitionIndex = 66018;

	class UIRABInLevelRightWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::CLEDLOMCHEI* _view; // 0x2C8
		::ODNBJIEICJH* KDEBCMGNCNH; // 0x2D0
		::JPGAKCLPEPK* FFDBFAEKDCL; // 0x2D8
		::MoleMole::UIRABDataStatWidgetController* OCJGOAFHAGF; // 0x2E0
		::MoleMole::UIRABInLevelBangbooInfoWidgetController* JDNAOAFDMEM; // 0x2E8
		::MoleMole::UIRABInLevelPageController* OKJPBIEFFEF; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindView(::JPGAKCLPEPK* viewModel)
		{
			return ((::System::Void(*)(::PVOID, ::JPGAKCLPEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_BINDVIEW_OFFSET))(this, viewModel);
		}

		::System::Void OpenBangbooInfo(::JJOKKBDDGNN* slotData)
		{
			return ((::System::Void(*)(::PVOID, ::JJOKKBDDGNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENBANGBOOINFO_OFFSET))(this, slotData);
		}

		::System::Void CloseBangbooInfo(::System::Boolean hide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEBANGBOOINFO_OFFSET))(this, hide);
		}

		::System::Void OpenDataStat()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_OPENDATASTAT_OFFSET))(this);
		}

		::System::Void CloseDataStat(::System::Boolean hide)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_CLOSEDATASTAT_OFFSET))(this, hide);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void HMFKIIDIHAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRABINLEVELRIGHTWIDGETCONTROLLER_HMFKIIDIHAK_OFFSET))(this);
		}
	};
}
