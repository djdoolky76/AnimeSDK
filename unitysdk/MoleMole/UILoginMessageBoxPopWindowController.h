#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBJMDNJNIBO.h"
#include "unitysdk/GMFAKIPCDED.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/System/Nullable_1.h"

class IALONMBJDKA;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_CFCGPBJCNMC_OFFSET UNITYSDK_OFFSET(0x183E4FA0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_FAFDAIDOCIC_OFFSET UNITYSDK_OFFSET(0x183E5090)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_FJHBPPPOCPN_OFFSET UNITYSDK_OFFSET(0x183E5070)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x183E3020)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_ISFORCEIGNORESDKPANEL_OFFSET UNITYSDK_OFFSET(0x183E3040)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x183E3030)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECANCEL_OFFSET UNITYSDK_OFFSET(0x183E4BC0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECONFIRM_OFFSET UNITYSDK_OFFSET(0x183E4C30)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x183E3860)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_MFLFOGPONHH_OFFSET UNITYSDK_OFFSET(0x183E50B0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E3570)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x183E37D0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183E3670)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E3600)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E30E0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELBTNTEXT_OFFSET UNITYSDK_OFFSET(0x183E47E0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELINTERACT_OFFSET UNITYSDK_OFFSET(0x183E4CA0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCONFIRMINTERACT_OFFSET UNITYSDK_OFFSET(0x183E4D10)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETOKBTN_OFFSET UNITYSDK_OFFSET(0x183E45A0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETTITLECONTENTTEXT_OFFSET UNITYSDK_OFFSET(0x183E4A20)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x183E3050)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWERRORCODE_OFFSET UNITYSDK_OFFSET(0x183E3A10)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWMESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x183E3D10)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x183E4D80)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x183E4D90)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x183E4E20)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x183E4EB0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x183E4EE0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x183E4EF0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x183E4F00)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x183E4F10)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginMessageBoxPopWindowController_TypeDefinitionIndex = 62522;

	class UILoginMessageBoxPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::IALONMBJDKA* _view; // 0x320
		::System::Action* GODDDLDNLMN; // 0x328
		::System::Action* JFAFHDDJKOD; // 0x330
		::System::Boolean GKHICOGOKFC; // 0x338

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::GBJMDNJNIBO get_HotSwitchRootLayerState()
		{
			return ((::GBJMDNJNIBO(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::GMFAKIPCDED get_windowType()
		{
			return ((::GMFAKIPCDED(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsForceIgnoreSDKPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_ISFORCEIGNORESDKPANEL_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void ShowErrorCode(::System::Int32 errorCode, ::System::Collections::Generic::List_1<::System::String*>* errorCodeParams, ::System::Action* okBtnCb, ::System::Action* cancelBtnCb, ::System::String* okText, ::System::String* cancelText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action*, ::System::Action*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWERRORCODE_OFFSET))(this, errorCode, errorCodeParams, okBtnCb, cancelBtnCb, okText, cancelText);
		}

		::System::Void ShowMessageBox(::System::String* content, ::System::String* okText, ::System::Action* okBtnCb, ::System::String* cancelText, ::System::Action* cancelBtnCb, ::System::String* titleText, ::System::Nullable_1<::Foundation::AssetPath> okBtnIcon, ::System::Nullable_1<::Foundation::AssetPath> cancelBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*, ::System::String*, ::System::Action*, ::System::String*, ::System::Nullable_1<::Foundation::AssetPath>, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWMESSAGEBOX_OFFSET))(this, content, okText, okBtnCb, cancelText, cancelBtnCb, titleText, okBtnIcon, cancelBtnIcon);
		}

		::System::Void SetOkBtn(::System::String* text, ::System::Action* okBtnCb, ::System::Nullable_1<::Foundation::AssetPath> okBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETOKBTN_OFFSET))(this, text, okBtnCb, okBtnIcon);
		}

		::System::Void SetCancelBtnText(::System::String* text, ::System::Action* cancelBtnCb, ::System::Nullable_1<::Foundation::AssetPath> cancelBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELBTNTEXT_OFFSET))(this, text, cancelBtnCb, cancelBtnIcon);
		}

		::System::Void SetTitleContentText(::System::String* content, ::System::String* titleText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETTITLECONTENTTEXT_OFFSET))(this, content, titleText);
		}

		::System::Void HideCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECANCEL_OFFSET))(this);
		}

		::System::Void HideConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECONFIRM_OFFSET))(this);
		}

		::System::Void SetCancelInteract(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELINTERACT_OFFSET))(this, interactable);
		}

		::System::Void SetConfirmInteract(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCONFIRMINTERACT_OFFSET))(this, interactable);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void CFCGPBJCNMC(::System::Boolean EKMLBMNKOKI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_CFCGPBJCNMC_OFFSET))(this, EKMLBMNKOKI);
		}

		::System::Void FJHBPPPOCPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_FJHBPPPOCPN_OFFSET))(this);
		}

		::System::Void FAFDAIDOCIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_FAFDAIDOCIC_OFFSET))(this);
		}

		::System::Void MFLFOGPONHH(::System::Boolean EKMLBMNKOKI)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_MFLFOGPONHH_OFFSET))(this, EKMLBMNKOKI);
		}
	};
}
