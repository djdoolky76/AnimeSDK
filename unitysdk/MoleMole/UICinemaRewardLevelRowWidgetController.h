#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/PODFMEPAHOA.h"
#include "unitysdk/Foundation/AssetPath.h"

class AAAGMKINKLC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x159815C0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x159814B0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15981540)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15981360)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15981440)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCRAWTEXT_OFFSET UNITYSDK_OFFSET(0x159816A0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCTEXT_OFFSET UNITYSDK_OFFSET(0x15981610)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_1_OFFSET UNITYSDK_OFFSET(0x15981780)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_OFFSET UNITYSDK_OFFSET(0x15981710)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15981810)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15981870)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x159818C0)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15981900)
#define MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15981940)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaRewardLevelRowWidgetController_TypeDefinitionIndex = 68188;

	class UICinemaRewardLevelRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::AAAGMKINKLC* _view; // 0x2C8
		::MoleMole::UIItemIconBtnSmallWidgetController* itemIconSmall; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::AAAGMKINKLC* GetView()
		{
			return ((::AAAGMKINKLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void SetDescText(::System::String* descKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCTEXT_OFFSET))(this, descKey);
		}

		::System::Void SetDescRawText(::System::String* desc)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETDESCRAWTEXT_OFFSET))(this, desc);
		}

		::System::Void SetFavourIcon(::PODFMEPAHOA favourLevelType)
		{
			return ((::System::Void(*)(::PVOID, ::PODFMEPAHOA))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_OFFSET))(this, favourLevelType);
		}

		::System::Void SetFavourIcon_1(::Foundation::AssetPath path)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER_SETFAVOURICON_1_OFFSET))(this, path);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAREWARDLEVELROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
