#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/GNOBAILCJGL.h"
#include "unitysdk/MLIGDOAGEAI.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"

class JLCKKAANIHI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHoundGame3DModelController; }
namespace MoleMole { class UISoulHoundsIIIInLevelChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_BIPENALOCFC_OFFSET UNITYSDK_OFFSET(0x187D6640)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_CLPNEPAFCNK_OFFSET UNITYSDK_OFFSET(0x187D62E0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_DPLHKDOOOEM_OFFSET UNITYSDK_OFFSET(0x187D6920)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x187D3770)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x187D3760)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEGAMEUI_OFFSET UNITYSDK_OFFSET(0x187D42A0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x187D4430)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x187D3A80)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_MBPNBDHLDMJ_OFFSET UNITYSDK_OFFSET(0x187D6A90)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_NGFFGFMEEHH_OFFSET UNITYSDK_OFFSET(0x187D64D0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OJCKOFCPHBJ_OFFSET UNITYSDK_OFFSET(0x187D69D0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187D3780)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x187D4660)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x187D3B80)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONREVCWORLDINITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x187D6000)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187D4490)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187D3810)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187D3940)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OPENGAMEUI_OFFSET UNITYSDK_OFFSET(0x187D3EC0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETGAMETYPE_OFFSET UNITYSDK_OFFSET(0x187D5F70)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETWWISEFOLLOWINGLISTENER_OFFSET UNITYSDK_OFFSET(0x187D3BE0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x187D6060)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x187D6170)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x187D6200)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x187D6230)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x187D6240)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x187D6250)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGamePageController_TypeDefinitionIndex = 93276;

	class UIHoundGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::JLCKKAANIHI* _view; // 0x320
		::MoleMole::UIHoundGame3DModelController* houndGame3dCtrl; // 0x328
		::MoleMole::UISoulHoundsIIIInLevelChildWindowController* inLevelPageCtrl; // 0x330
		::MoleMole::MiniGame::HoundMiniGameWorld* CDKNNDNLNBI; // 0x338
		::System::Collections::Generic::HashSet_1<::MoleMole::MiniGame::TartarusHounds::Direction>* AOBAAJODNMO; // 0x340
		::Il2CppArray<::System::Boolean>* AFOLGNHIAKM; // 0x348
		::Il2CppArray<::System::Boolean>* LAFBMJMHKNF; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MLIGDOAGEAI get_UICursorHideState()
		{
			return ((::MLIGDOAGEAI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* mingGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, mingGameWorld);
		}

		::System::Void OpenGameUI(::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OPENGAMEUI_OFFSET))(this, fade);
		}

		::System::Void HideGameUI(::System::Action* fadeCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEGAMEUI_OFFSET))(this, fadeCB);
		}

		::System::Void HideImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetGameType(::GNOBAILCJGL gameType)
		{
			return ((::System::Void(*)(::PVOID, ::GNOBAILCJGL))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETGAMETYPE_OFFSET))(this, gameType);
		}

		::System::Void OnRevcWorldInitScNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONREVCWORLDINITSCNOTIFY_OFFSET))(this);
		}

		::System::Void SetWwiseFollowingListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETWWISEFOLLOWINGLISTENER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CLPNEPAFCNK(::System::Single EIFONLCJOPG)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_CLPNEPAFCNK_OFFSET))(this, EIFONLCJOPG);
		}

		::System::Void NGFFGFMEEHH(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD, ::System::Boolean NPAPOPKBHBK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_NGFFGFMEEHH_OFFSET))(this, DAAEHEHLLLD, NPAPOPKBHBK);
		}

		::System::Void DPLHKDOOOEM(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_DPLHKDOOOEM_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void BIPENALOCFC(::MoleMole::MiniGame::TartarusHounds::Direction DAAEHEHLLLD, ::System::Boolean NPAPOPKBHBK)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_BIPENALOCFC_OFFSET))(this, DAAEHEHLLLD, NPAPOPKBHBK);
		}

		::System::Void OJCKOFCPHBJ(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OJCKOFCPHBJ_OFFSET))(this, OJPFHPALLHG);
		}

		::System::Void MBPNBDHLDMJ(::System::EventArgs* OJPFHPALLHG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_MBPNBDHLDMJ_OFFSET))(this, OJPFHPALLHG);
		}
	};
}
