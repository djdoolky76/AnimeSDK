#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class AJPMAGNBPNF;
class NBDIHLFAHAB;
class PKACIEGCJFL;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ISNEW_OFFSET UNITYSDK_OFFSET(0x170390E0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17037FC0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONLEVELCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x17038050)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17039280)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17037D10)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17037F50)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETLEVEL_OFFSET UNITYSDK_OFFSET(0x170389D0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETREAD_OFFSET UNITYSDK_OFFSET(0x170385C0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETSELECT_OFFSET UNITYSDK_OFFSET(0x17038940)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17039300)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17039360)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170393F0)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17039480)
#define MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17039510)

namespace MoleMole
{
	inline static constexpr unsigned int UIArpeggioLevelSpotWidgetController_TypeDefinitionIndex = 87314;

	class UIArpeggioLevelSpotWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::PKACIEGCJFL* _view; // 0x2C8
		::System::Action* LevelClickAction; // 0x2D0
		::AJPMAGNBPNF* DDDGJJLMDFH; // 0x2D8
		::NBDIHLFAHAB* EKKINPHCNAP; // 0x2E0
		::System::String* FloorStr; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLevelClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONLEVELCLICKHANDLE_OFFSET))(this);
		}

		::System::Void SetSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetLevel(::System::Int32 levelID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETLEVEL_OFFSET))(this, levelID);
		}

		::System::Boolean IsNew()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ISNEW_OFFSET))(this);
		}

		::System::Void SetRead()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_SETREAD_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIARPEGGIOLEVELSPOTWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
