#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class GGLBGKMMOPF;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISnakeDuelOnlineEndingChildWindowController; }
namespace MoleMole::Arcade::SnakeDemo { class UISnakeDuelEndingChildWindowController; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1F917820)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F917C00)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1F917830)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F917C90)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F917D00)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1F917D10)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1F917DA0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1F917DB0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UISnakeGameEndPageController_TypeDefinitionIndex = 96585;

	class UISnakeGameEndPageController : public ::MoleMole::UIWindowController
	{
	public:
		::GGLBGKMMOPF* _view; // 0x320
		::MoleMole::Arcade::SnakeDemo::UISnakeDuelEndingChildWindowController* GLLCELNDEAH; // 0x328
		::MoleMole::UISnakeDuelOnlineEndingChildWindowController* NHHDEKPBDNP; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
