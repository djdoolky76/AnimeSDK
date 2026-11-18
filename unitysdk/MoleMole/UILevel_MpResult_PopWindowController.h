#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AHCBCBDEIMG_DOPBFKHLMHM.h"
#include "unitysdk/AHCBCBDEIMG_HPLAKBEKMGD.h"
#include "unitysdk/MoleMole/UILevelGeneralWinResultDialogPopWindowController.h"

namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILevel_MpResult_PopWindowController_ExitMpGameProgress; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET UNITYSDK_OFFSET(0x19033130)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_BAOIANONFOM_OFFSET UNITYSDK_OFFSET(0x190333E0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_DPKAOFFJGDN_OFFSET UNITYSDK_OFFSET(0x190333C0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET UNITYSDK_OFFSET(0x19033200)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET UNITYSDK_OFFSET(0x19033250)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_NCPCPDBKOBH_OFFSET UNITYSDK_OFFSET(0x19033400)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET UNITYSDK_OFFSET(0x190332A0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x19033080)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x190333A0)
#define MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x190333B0)

namespace MoleMole
{
	inline static constexpr unsigned int UILevel_MpResult_PopWindowController_TypeDefinitionIndex = 73179;

	class UILevel_MpResult_PopWindowController : public ::MoleMole::UILevelGeneralWinResultDialogPopWindowController
	{
	public:
		// static const ::System::String* DGLOGNPLEPL; // 0x0
		::MoleMole::UILevel_MpResult_PopWindowController_ExitMpGameProgress* AJBLPNEDPIC; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void AcquireTitleText(::System::String*& mainTitleTextID, ::System::String*& resultTitleTextID)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ACQUIRETITLETEXT_OFFSET))(this, mainTitleTextID, resultTitleTextID);
		}

		::AHCBCBDEIMG_HPLAKBEKMGD GetButtonCombineState()
		{
			return ((::AHCBCBDEIMG_HPLAKBEKMGD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETBUTTONCOMBINESTATE_OFFSET))(this);
		}

		::AHCBCBDEIMG_DOPBFKHLMHM GetPanelState()
		{
			return ((::AHCBCBDEIMG_DOPBFKHLMHM(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_GETPANELSTATE_OFFSET))(this);
		}

		::System::Void OnPopShowed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_ONPOPSHOWED_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void DPKAOFFJGDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_DPKAOFFJGDN_OFFSET))(this);
		}

		::System::Void BAOIANONFOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_BAOIANONFOM_OFFSET))(this);
		}

		::System::Void NCPCPDBKOBH(::System::EventArgs* PIIPCLCCOIG)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILEVEL_MPRESULT_POPWINDOWCONTROLLER_NCPCPDBKOBH_OFFSET))(this, PIIPCLCCOIG);
		}
	};
}
