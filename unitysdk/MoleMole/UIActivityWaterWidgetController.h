#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CJIEIHEDMME;
class KLPFMNDIADE;
namespace MoleMole { class ActivityWaterContext; }
namespace MoleMole { class UIActivityWaterProgressBarWidgetController; }
namespace MoleMole { class UIActivityWaterRewardWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_EBHAOKJJIAM_OFFSET UNITYSDK_OFFSET(0x1A0DB660)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GETREWARD_OFFSET UNITYSDK_OFFSET(0x1A0DB680)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A0DAE70)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0DAF00)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A0DAD20)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A0DAD80)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1A0DAF80)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0DB6E0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A0DB7C0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A0DB850)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A0DB8E0)
#define MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A0DB970)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWaterWidgetController_TypeDefinitionIndex = 65016;

	class UIActivityWaterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::KLPFMNDIADE* _view; // 0x2C8
		::MoleMole::ActivityWaterContext* DAAAEJDBNFI; // 0x2D0
		::MoleMole::UIActivityWaterProgressBarWidgetController* KOLPMIOCIHK; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIActivityWaterRewardWidgetController*>* KIPEIPCKPBC; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void GetReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_GETREWARD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::CJIEIHEDMME* EBHAOKJJIAM()
		{
			return ((::CJIEIHEDMME*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWATERWIDGETCONTROLLER_EBHAOKJJIAM_OFFSET))(this);
		}
	};
}
