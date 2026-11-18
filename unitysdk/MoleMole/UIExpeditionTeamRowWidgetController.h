#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class CIFBOKELGMC;
class HJDDHJBICOH;
class LJPMBKEGOLI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISuibianTempleExpeditionBangbooHeadWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ENANIBBGOEO_OFFSET UNITYSDK_OFFSET(0x1985D360)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_HAAIEKALNLM_OFFSET UNITYSDK_OFFSET(0x1985D580)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1985C120)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1985C1B0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1985BE90)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1985C0B0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0x1985C230)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1985D040)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1985D120)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1985D1B0)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1985D240)
#define MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1985D2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIExpeditionTeamRowWidgetController_TypeDefinitionIndex = 53568;

	class UIExpeditionTeamRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::HJDDHJBICOH* _view; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UISuibianTempleExpeditionBangbooHeadWidgetController*>* JJKFFBJDBDD; // 0x2D0
		::CIFBOKELGMC* ILBBGBDMOBL; // 0x2D8
		::LJPMBKEGOLI* KEIFBCOMAPP; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetData(::LJPMBKEGOLI* teamData)
		{
			return ((::System::Void(*)(::PVOID, ::LJPMBKEGOLI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, teamData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void ENANIBBGOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_ENANIBBGOEO_OFFSET))(this);
		}

		::System::Void HAAIEKALNLM(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIEXPEDITIONTEAMROWWIDGETCONTROLLER_HAAIEKALNLM_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
