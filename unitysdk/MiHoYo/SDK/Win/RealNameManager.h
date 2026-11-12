#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/REAL_NAME_DIALOG_TYPE.h"
#include "unitysdk/MiHoYo/SDK/RealNameOperation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MiHoYo/SDK/UniWebViewMessage.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace MiHoYo::SDK { class Web; }
namespace MiHoYo::SDK::Win { class RealNameManager; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_REALNAMEMANAGER_BINDREALNAME_OFFSET UNITYSDK_OFFSET(0x1CF68EC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF6AFC0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_CHECKMODIFYREALNAME_OFFSET UNITYSDK_OFFSET(0x1CF67950)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1CF6AFB0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETALERTCONTENT_OFFSET UNITYSDK_OFFSET(0x1CF66710)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETPHONEVERIFYCODE_OFFSET UNITYSDK_OFFSET(0x1CF68000)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1CF661D0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HELPCOMMAND_OFFSET UNITYSDK_OFFSET(0x1CF66AA0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x1CF69E40)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x1CF69540)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEREALNAME_OFFSET UNITYSDK_OFFSET(0x1CF66480)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDESECONDREALNAME_OFFSET UNITYSDK_OFFSET(0x1CF67190)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ISREALNAMEACCOUNT_OFFSET UNITYSDK_OFFSET(0x1CF57B50)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_1_OFFSET UNITYSDK_OFFSET(0x1CF677E0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_OFFSET UNITYSDK_OFFSET(0x1CF68230)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONBINDREALNAME_OFFSET UNITYSDK_OFFSET(0x1CF69190)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETPAGECLOSE_OFFSET UNITYSDK_OFFSET(0x1CF6AE10)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETTICKETBYTOKEN_OFFSET UNITYSDK_OFFSET(0x1CF68C90)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET UNITYSDK_OFFSET(0x1CF6AA00)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_ONTICKETINVALID_OFFSET UNITYSDK_OFFSET(0x1CF6A740)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_OTHERVERIFY_OFFSET UNITYSDK_OFFSET(0x1CF6A750)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_POPUPREALNAMEPARAMERROR_OFFSET UNITYSDK_OFFSET(0x1CF66B70)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REFUSEREALNAMECOMMAND_OFFSET UNITYSDK_OFFSET(0x1CF66870)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTREALNAMEAUTH_OFFSET UNITYSDK_OFFSET(0x1CF67E80)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTSECONDREALNAMEAUTH_OFFSET UNITYSDK_OFFSET(0x1CF67A50)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SECONDREALNAMEBINDCOMMAND_OFFSET UNITYSDK_OFFSET(0x1CF677B0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAILPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF6A030)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAIL_OFFSET UNITYSDK_OFFSET(0x1CF688C0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF69730)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONE_OFFSET UNITYSDK_OFFSET(0x1CF684F0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF66DE0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x1CF57B80)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEPLUGINUI_OFFSET UNITYSDK_OFFSET(0x1CF67410)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEVIEW_OFFSET UNITYSDK_OFFSET(0x1CF67BD0)
#define MIHOYO_SDK_WIN_REALNAMEMANAGER__MODIFYREALNAME_B__28_0_OFFSET UNITYSDK_OFFSET(0x1CF6B010)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int RealNameManager_TypeDefinitionIndex = 9356;

	class RealNameManager : public ::System::Object
	{
	public:
		::MiHoYo::SDK::AccountModel* accountModel; // 0x10
		::System::Action_1<::System::String*>* m_callbackPluginUIGetCaptcha; // 0x18
		::System::Action* OnBack; // 0x20
		::System::String* m_strName; // 0x28
		::MiHoYo::SDK::Web* webView; // 0x30
		::System::String* actionTicket; // 0x38
		::System::String* m_strIdentity; // 0x40
		::System::Action_3<::System::String*, ::System::String*, ::System::String*>* OnSuccess; // 0x48
		::System::Boolean isGrant; // 0x50
		static ::MiHoYo::SDK::Win::RealNameManager** StaticGet_Instance()
		{
			return (::MiHoYo::SDK::Win::RealNameManager**)UnitySDK::FromName("MiHoYo.SDK.Win", "RealNameManager")->GetStaticField(0x26C50);
		}

		// static const ::System::String* ModifyRealNameType; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_CCTOR_OFFSET))();
		}

		static ::System::Boolean IsRealNameAccount(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Boolean(*)(::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ISREALNAMEACCOUNT_OFFSET))(a1);
		}

		static ::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETREALNAMEOPERATIONTYPE_OFFSET))(a1);
		}

		::System::Void HideRealName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEREALNAME_OFFSET))(this);
		}

		::System::String* GetAlertContent(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETALERTCONTENT_OFFSET))(this, a1);
		}

		::System::Void RefuseRealNameCommand(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REFUSEREALNAMECOMMAND_OFFSET))(this, a1, a2);
		}

		::System::Void HelpCommand()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HELPCOMMAND_OFFSET))(this);
		}

		::System::Void PopupRealNameParamError()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_POPUPREALNAMEPARAMERROR_OFFSET))(this);
		}

		::System::Boolean ShowRealNamePluginUI(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void ShowRealNameView(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWREALNAMEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void HideSecondRealName()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDESECONDREALNAME_OFFSET))(this);
		}

		::System::Boolean ShowSecondRealNamePluginUI(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEPLUGINUI_OFFSET))(this, a1, a2);
		}

		::System::Void SecondRealNameBindCommand(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SECONDREALNAMEBINDCOMMAND_OFFSET))(this, a1);
		}

		::System::Void ShowSecondRealNameView(::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE a1, ::MiHoYo::SDK::AccountModel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::REAL_NAME_DIALOG_TYPE, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWSECONDREALNAMEVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void RequestRealNameAuth(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTREALNAMEAUTH_OFFSET))(this, a1);
		}

		::System::Void RequestSecondRealNameAuth(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_REQUESTSECONDREALNAMEAUTH_OFFSET))(this, a1);
		}

		::System::Void GetPhoneVerifyCode(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_GETPHONEVERIFYCODE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void ModifyRealName(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CheckModifyRealName(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_CHECKMODIFYREALNAME_OFFSET))(this, a1);
		}

		::System::Void ModifyRealName_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_MODIFYREALNAME_1_OFFSET))(this);
		}

		::System::Void OnGetTicketByToken(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETTICKETBYTOKEN_OFFSET))(this, a1);
		}

		::System::Void BindRealName(::System::String* a1, ::System::String* a2, ::System::String* a3, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*, ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_BINDREALNAME_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OnBindRealName(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONBINDREALNAME_OFFSET))(this, a1);
		}

		::System::Void HideGrantPhone()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTPHONE_OFFSET))(this);
		}

		::System::Boolean ShowGrantPhonePluginUI(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Action* a4, ::System::Action_1<::System::String*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONEPLUGINUI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ShowGrantPhone(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTPHONE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HideGrantMail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_HIDEGRANTMAIL_OFFSET))(this);
		}

		::System::Boolean ShowGrantMailPluginUI(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3, ::System::Action* a4, ::System::Action_1<::System::String*>* a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean, ::System::Action*, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAILPLUGINUI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void ShowGrantMail(::MiHoYo::SDK::AccountModel* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::AccountModel*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_SHOWGRANTMAIL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnTicketInvalid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONTICKETINVALID_OFFSET))(this);
		}

		::System::Void OtherVerify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_OTHERVERIFY_OFFSET))(this);
		}

		::System::Void OnGetUniWebViewMessage(::MiHoYo::SDK::Web* a1, ::MiHoYo::SDK::UniWebViewMessage a2)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*, ::MiHoYo::SDK::UniWebViewMessage))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETUNIWEBVIEWMESSAGE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGetPageClose(::MiHoYo::SDK::Web* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Web*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER_ONGETPAGECLOSE_OFFSET))(this, a1);
		}

		::System::Void _ModifyRealName_b__28_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_REALNAMEMANAGER__MODIFYREALNAME_B__28_0_OFFSET))(this, a1);
		}

	};
}
