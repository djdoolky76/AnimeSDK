#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_DialogBtnMode.h"
#include "unitysdk/RPG/Client/ConfirmDialogContext_OnClickType.h"
#include "unitysdk/RPG/Client/UIController.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/TextID.h"
class IAINCJNENGI;
namespace RPG::Client { class LocalizedText; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1C999490)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_CUSTOMEXIT_OFFSET UNITYSDK_OFFSET(0x1C99A6F0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLETOGGLE_OFFSET UNITYSDK_OFFSET(0x1C99B1E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLEWARNINGTIPS_OFFSET UNITYSDK_OFFSET(0x1C99B580)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLETOGGLE_OFFSET UNITYSDK_OFFSET(0x1C99AFA0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLEWARNINGTIPS_OFFSET UNITYSDK_OFFSET(0x1C99B450)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCANCEL_OFFSET UNITYSDK_OFFSET(0x1C99ACF0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCONTENT_OFFSET UNITYSDK_OFFSET(0x1C99AC50)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTOK_OFFSET UNITYSDK_OFFSET(0x1C99AD90)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTTITLE_OFFSET UNITYSDK_OFFSET(0x1C99ABC0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x1C9999F0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNBGCLICK_OFFSET UNITYSDK_OFFSET(0x1C99A930)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET UNITYSDK_OFFSET(0x1C99A7F0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCLOSECLICK_OFFSET UNITYSDK_OFFSET(0x1C99A890)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNOKCLICK_OFFSET UNITYSDK_OFFSET(0x1C99A750)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNTOGGLECLICK_OFFSET UNITYSDK_OFFSET(0x1C99A9D0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNBGINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x1C99A140)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNMODE_OFFSET UNITYSDK_OFFSET(0x1C99AB70)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETCONTENT_OFFSET UNITYSDK_OFFSET(0x1C99AEE0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETDESCTIP_OFFSET UNITYSDK_OFFSET(0x1C99B310)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETSETTINGBTNACTIVE_OFFSET UNITYSDK_OFFSET(0x1C999FE0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTITLE_OFFSET UNITYSDK_OFFSET(0x1C99AE20)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTOGGLETIPS_OFFSET UNITYSDK_OFFSET(0x1C99B120)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_BGDISPATCH_OFFSET UNITYSDK_OFFSET(0x1C99BAF0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_CLOSEDISPATCH_OFFSET UNITYSDK_OFFSET(0x1C99BB40)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1C99BB90)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCANCEL_OFFSET UNITYSDK_OFFSET(0x1C99B9E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCONTENT_OFFSET UNITYSDK_OFFSET(0x1C99B620)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDOK_OFFSET UNITYSDK_OFFSET(0x1C99B8E0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDTITLE_OFFSET UNITYSDK_OFFSET(0x1C99B730)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1C999570)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONBTNSETTINGCLICK_OFFSET UNITYSDK_OFFSET(0x1C99AAD0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONEXITFINALSTEP_OFFSET UNITYSDK_OFFSET(0x1C99A540)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__PROCESSEXITDISPATCH_OFFSET UNITYSDK_OFFSET(0x1C99A5D0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPINCONTROLBTN_OFFSET UNITYSDK_OFFSET(0x1C99A240)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPMODEBTN_OFFSET UNITYSDK_OFFSET(0x1C999CC0)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPTILELAYOUT_OFFSET UNITYSDK_OFFSET(0x1C99A450)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1C999A60)
#define RPG_CLIENT_CONFIRMDIALOGCONTEXT__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x1C99A080)

namespace RPG::Client
{
	inline static constexpr unsigned int ConfirmDialogContext_TypeDefinitionIndex = 74789;

	class ConfirmDialogContext : public ::RPG::Client::UIController
	{
	public:
		::System::Action* ExitAction; // 0x190
		::System::Action_1<::System::Boolean>* _ToggleDispatch; // 0x198
		::System::Action_1<::System::Boolean>* OkOrCancelDispatch; // 0x1A0
		::System::Action* _BgDispatch; // 0x1A8
		::System::Action* _CloseDispatch; // 0x1B0
		::System::Action* NoneDispatch; // 0x1B8
		::RPG::Client::ConfirmDialogContext_OnClickType _ClickType; // 0x1C0
		::System::Boolean _IsToggleSelected; // 0x1C4
		::System::Boolean CallDispatchBeforeExit; // 0x1C5
		::System::Byte _padding0[0x2];
		::RPG::Client::ConfirmDialogContext_DialogBtnMode _Mode; // 0x1C8
		::System::Void _ctor(::RPG::Client::UILayer a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UILayer))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_CTOR_OFFSET))(this, a1);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupModeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPMODEBTN_OFFSET))(this);
		}

		::System::Void _SetupIncontrolBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPINCONTROLBTN_OFFSET))(this);
		}

		::System::Void _SetupTileLayout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__SETUPTILELAYOUT_OFFSET))(this);
		}

		::System::Void _OnExitFinalStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONEXITFINALSTEP_OFFSET))(this);
		}

		::System::Void _ProcessExitDispatch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__PROCESSEXITDISPATCH_OFFSET))(this);
		}

		::System::Void CustomExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_CUSTOMEXIT_OFFSET))(this);
		}

		::System::Void OnBtnOkClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNOKCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCancelClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCANCELCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnCloseClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNCLOSECLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnBgClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNBGCLICK_OFFSET))(this, a1);
		}

		::System::Void OnBtnToggleClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ONBTNTOGGLECLICK_OFFSET))(this, a1);
		}

		::System::Void _OnBtnSettingClick(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT__ONBTNSETTINGCLICK_OFFSET))(this, a1);
		}

		::System::Void SetBtnBgInteractable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNBGINTERACTABLE_OFFSET))(this, a1);
		}

		::System::Void SetBtnMode(::RPG::Client::ConfirmDialogContext_DialogBtnMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETBTNMODE_OFFSET))(this, a1);
		}

		::RPG::Client::LocalizedText* GetComponentTitle()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTTITLE_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentContent()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCONTENT_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentCancel()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTCANCEL_OFFSET))(this);
		}

		::RPG::Client::LocalizedText* GetComponentOK()
		{
			return ((::RPG::Client::LocalizedText*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GETCOMPONENTOK_OFFSET))(this);
		}

		::System::Void SetTitle(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTITLE_OFFSET))(this, a1, a2);
		}

		::System::Void SetContent(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETCONTENT_OFFSET))(this, a1, a2);
		}

		::System::Void EnableToggle(::System::Boolean a1, ::System::Action_1<::System::Boolean>* a2, ::RPG::Client::TextID a3, ::Il2CppArray<::System::Object*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action_1<::System::Boolean>*, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLETOGGLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DisableToggle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLETOGGLE_OFFSET))(this);
		}

		::System::Void SetToggleTips(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETTOGGLETIPS_OFFSET))(this, a1, a2);
		}

		::System::Void SetDescTip(::RPG::Client::TextID a1, ::Il2CppArray<::System::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETDESCTIP_OFFSET))(this, a1, a2);
		}

		::System::Void SetSettingBtnActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SETSETTINGBTNACTIVE_OFFSET))(this, a1);
		}

		::System::Void EnableWarningTips(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_ENABLEWARNINGTIPS_OFFSET))(this, a1);
		}

		::System::Void DisableWarningTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_DISABLEWARNINGTIPS_OFFSET))(this);
		}

		::System::Void set_TextIDContent(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCONTENT_OFFSET))(this, a1);
		}

		::System::Void set_TextIDTitle(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDTITLE_OFFSET))(this, a1);
		}

		::System::Void set_TextIDOK(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDOK_OFFSET))(this, a1);
		}

		::System::Void set_TextIDCancel(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_TEXTIDCANCEL_OFFSET))(this, a1);
		}

		::System::Void set_BgDispatch(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_BGDISPATCH_OFFSET))(this, a1);
		}

		::System::Void set_CloseDispatch(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_CLOSEDISPATCH_OFFSET))(this, a1);
		}

		::System::Void set_Mode(::RPG::Client::ConfirmDialogContext_DialogBtnMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ConfirmDialogContext_DialogBtnMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_SET_MODE_OFFSET))(this, a1);
		}

		::IAINCJNENGI* get_View()
		{
			return ((::IAINCJNENGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CONFIRMDIALOGCONTEXT_GET_VIEW_OFFSET))(this);
		}

	};
}
