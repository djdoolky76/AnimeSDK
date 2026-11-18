#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGHFICOEKBH.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/UnityEngine/Vector2.h"

class EIDAHAPFKML;
class KAEAIMHJJJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UICinemaRewardLevelRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_EXITPREPPAGE_OFFSET UNITYSDK_OFFSET(0x19674FA0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19673CE0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITFIRSTSELECTLEVEL_OFFSET UNITYSDK_OFFSET(0x19674620)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x19674080)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSINGLELEVELMOVIE_OFFSET UNITYSDK_OFFSET(0x19674CB0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSTARTSINGLELEVEL_OFFSET UNITYSDK_OFFSET(0x19674D00)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19673CF0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x19674530)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x19674430)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196744C0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19673D80)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHDIFFICULT_OFFSET UNITYSDK_OFFSET(0x19673630)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET UNITYSDK_OFFSET(0x196734F0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRANKINFO_OFFSET UNITYSDK_OFFSET(0x19673740)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET UNITYSDK_OFFSET(0x196731E0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_RESETCLICKMASK_OFFSET UNITYSDK_OFFSET(0x19675120)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_SETNOWINDEX_OFFSET UNITYSDK_OFFSET(0x19674950)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19675170)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19675230)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET UNITYSDK_OFFSET(0x196752C0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x196753B0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196753C0)
#define MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x196753D0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSingleMoviePageController_TypeDefinitionIndex = 69032;

	class UICinemaSingleMoviePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Il2CppArray<::BGHFICOEKBH>* pointLevels; // 0x320
		::KAEAIMHJJJA* _view; // 0x328
		::System::Collections::Generic::List_1<::EIDAHAPFKML*>* movieLevelList; // 0x330
		::EIDAHAPFKML* nowSelectLevelData; // 0x338
		::System::Collections::Generic::List_1<::MoleMole::UICinemaRewardLevelRowWidgetController*>* rewardLevelRowList; // 0x340
		::System::Boolean CGAOIAIOHMG; // 0x348
		::System::Byte _padding0[0x3];
		::System::Int32 nowIndex; // 0x34C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void RefreshRightInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRIGHTINFO_OFFSET))(this);
		}

		::System::Void RefreshMovieInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHMOVIEINFO_OFFSET))(this);
		}

		::System::Void RefreshDifficult(::System::Int32 levelDifficult)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHDIFFICULT_OFFSET))(this, levelDifficult);
		}

		::System::Void RefreshRankInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_REFRESHRANKINFO_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 curIndex, ::System::Int32 nextIndex, ::MoleMole::InputActionEvent actionEvent, ::UnityEngine::Vector2 moveDir)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, gamepadModule, curIndex, nextIndex, actionEvent, moveDir);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 InitFirstSelectLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_INITFIRSTSELECTLEVEL_OFFSET))(this);
		}

		::System::Void OnClickSingleLevelMovie(::System::Int32 clickIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSINGLELEVELMOVIE_OFFSET))(this, clickIndex);
		}

		::System::Void SetNowIndex(::System::Int32 selectIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_SETNOWINDEX_OFFSET))(this, selectIndex);
		}

		::System::Void OnClickStartSingleLevel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_ONCLICKSTARTSINGLELEVEL_OFFSET))(this);
		}

		::System::Void ExitPrepPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_EXITPREPPAGE_OFFSET))(this);
		}

		::System::Void ResetClickMask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER_RESETCLICKMASK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Int32 __base_OnGamepadModuleTryOverrideNextSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::System::Int32 P2, ::MoleMole::InputActionEvent P3, ::UnityEngine::Vector2 P4)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::System::Int32, ::MoleMole::InputActionEvent, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONGAMEPADMODULETRYOVERRIDENEXTSELECTINDEX_OFFSET))(this, P0, P1, P2, P3, P4);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEMOVIEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
