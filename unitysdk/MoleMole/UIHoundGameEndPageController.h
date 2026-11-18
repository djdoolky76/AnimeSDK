#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class MAMPNAAOKAO;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISoulHoundsIIIEndingChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }

#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18F34F60)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F34F70)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x18F35070)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F35000)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F351F0)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F35200)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F35290)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGameEndPageController_TypeDefinitionIndex = 84244;

	class UIHoundGameEndPageController : public ::MoleMole::UIWindowController
	{
	public:
		::MAMPNAAOKAO* _view; // 0x320
		::MoleMole::MiniGame::HoundMiniGameWorld* PIGCHNAOLBD; // 0x328
		::MoleMole::UISoulHoundsIIIEndingChildWindowController* FAOKAELHKBH; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, miniGameWorld);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
