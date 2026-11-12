#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PC/OS/CXHandheld/HandheldUserAgreementDialog_DisplayMode.h"
#include "unitysdk/MiHoYo/SDK/EnvType.h"
#include "unitysdk/MiHoYo/SDK/RealNameOperation.h"
#include "unitysdk/MiHoYo/SDK/ReportType.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::PC::OS::CXHandheld { class LoginManagerBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ASYNHANDHELDLOGIN_OFFSET UNITYSDK_OFFSET(0x1D082600)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D085310)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANCELDBINDING_OFFSET UNITYSDK_OFFSET(0x1D085060)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET UNITYSDK_OFFSET(0x1D083A40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET UNITYSDK_OFFSET(0x1D085210)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D085C20)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ENVCHANGED_OFFSET UNITYSDK_OFFSET(0x1D0824C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1D0857C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET UNITYSDK_OFFSET(0x1D085510)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1D082350)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGIN_OFFSET UNITYSDK_OFFSET(0x1D082580)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1D082860)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET UNITYSDK_OFFSET(0x1D085300)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET UNITYSDK_OFFSET(0x1D084C00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET UNITYSDK_OFFSET(0x1D0837A0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1D085830)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET UNITYSDK_OFFSET(0x1D085BB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1D083F30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REQUESTLOGINBYHANDHELD_OFFSET UNITYSDK_OFFSET(0x1D0846E0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET UNITYSDK_OFFSET(0x1D083BD0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1D083AA0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET UNITYSDK_OFFSET(0x1D0834B0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET UNITYSDK_OFFSET(0x1D0831C0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET UNITYSDK_OFFSET(0x1D082B30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET UNITYSDK_OFFSET(0x1D083D00)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET UNITYSDK_OFFSET(0x1D082CB0)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET UNITYSDK_OFFSET(0x1D084430)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SWITCHROLE_OFFSET UNITYSDK_OFFSET(0x1D082920)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x1D083A30)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET UNITYSDK_OFFSET(0x1D085C40)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET UNITYSDK_OFFSET(0x1D085EB0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	inline static constexpr unsigned int LoginManagerBase_TypeDefinitionIndex = 8755;

	class LoginManagerBase : public ::System::Object
	{
	public:
		::System::String* Platform; // 0x10
		::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* loginCallback; // 0x18
		::System::String* accessToken; // 0x20
		::System::Boolean isNoRegister; // 0x28
		::System::Boolean forceTokenRefresh; // 0x29
		::System::Boolean isAgreementAccepted; // 0x2A
		::System::Byte _padding0[0x1];
		::MiHoYo::SDK::EnvType _envType; // 0x2C
		::MiHoYo::SDK::ReportType _loginReportType; // 0x30
		::MiHoYo::SDK::ReportType _registerReportType; // 0x34
		static ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase** StaticGet__instance()
		{
			return (::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase**)UnitySDK::FromName("MiHoYo.SDK.PC.OS.CXHandheld", "LoginManagerBase")->GetStaticField(0xDF60);
		}

		// static const ::System::String* PRIVACY_PROTOCOL; // 0x0
		// static const ::System::String* USER_AGREEMENT; // 0x0
		// static const ::System::String* CHILDREN_PROTOCOL; // 0x0
		// static const ::System::Object NEW_CONSOLE_USER; // 0x0
		// static const ::System::Object ACCOUNT_PLAT_NEW_CONSOLE_USER; // 0x0
		// static const ::System::Object TOKEN_INVALID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CTOR_OFFSET))(this);
		}

		static ::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase* get_Instance()
		{
			return ((::MiHoYo::SDK::PC::OS::CXHandheld::LoginManagerBase*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GET_INSTANCE_OFFSET))();
		}

		::System::Void Login(::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_3<::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGIN_OFFSET))(this, a1);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_LOGOUT_OFFSET))(this);
		}

		::System::Void SwitchRole(::System::Action_1<::System::String*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SWITCHROLE_OFFSET))(this, a1);
		}

		::System::Void ShowReactivateDialog(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWREACTIVATEDIALOG_OFFSET))(this, a1);
		}

		::System::Void ShowUserAgreement(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENT_OFFSET))(this, a1);
		}

		::System::Void ShowPrivacyProtocol(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWPRIVACYPROTOCOL_OFFSET))(this, a1);
		}

		::System::Void ShowChildrenPrivacy(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWCHILDRENPRIVACY_OFFSET))(this, a1);
		}

		::System::Void OpenProtocolWebView(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_OPENPROTOCOLWEBVIEW_OFFSET))(this, a1);
		}

		::System::Void SyncFriendList(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SYNCFRIENDLIST_OFFSET))(this, a1);
		}

		::System::Boolean CanOpenUserCenter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANOPENUSERCENTER_OFFSET))(this);
		}

		::System::Void ShowAccountUserAgreement(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTUSERAGREEMENT_OFFSET))(this, a1);
		}

		::System::Void ShowAccountPrivacyPolicy(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWACCOUNTPRIVACYPOLICY_OFFSET))(this, a1);
		}

		::System::Void ShowUserAgreementDialog(::System::Action* a1, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog_DisplayMode))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWUSERAGREEMENTDIALOG_OFFSET))(this, a1, a2);
		}

		::System::Void ShowWelcomeDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_SHOWWELCOMEDIALOG_OFFSET))(this);
		}

		::System::Void RequestLoginByHandheld(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REQUESTLOGINBYHANDHELD_OFFSET))(this, a1);
		}

		::System::Void AsynHandheldLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ASYNHANDHELDLOGIN_OFFSET))(this);
		}

		::System::Void CanceldBinding()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CANCELDBINDING_OFFSET))(this);
		}

		::System::Void CreateAndBindNewAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_CREATEANDBINDNEWACCOUNT_OFFSET))(this);
		}

		::System::Void OnBindExistingAccountCanceled()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONBINDEXISTINGACCOUNTCANCELED_OFFSET))(this);
		}

		::System::Void BindExistingAccount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_BINDEXISTINGACCOUNT_OFFSET))(this);
		}

		::System::Void OnLoginCallback(::System::Int32 a1, ::System::String* a2, ::MiHoYo::SDK::AccountModel* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ONLOGINCALLBACK_OFFSET))(this, a1, a2, a3);
		}

		::MiHoYo::SDK::RealNameOperation GetRealNameOperationType(::MiHoYo::SDK::JSONNode* a1)
		{
			return ((::MiHoYo::SDK::RealNameOperation(*)(::PVOID, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETREALNAMEOPERATIONTYPE_OFFSET))(this, a1);
		}

		::System::String* GetAccountParameters(::MiHoYo::SDK::AccountModel* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MiHoYo::SDK::AccountModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_GETACCOUNTPARAMETERS_OFFSET))(this, a1);
		}

		::System::Boolean EnvChanged()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_ENVCHANGED_OFFSET))(this);
		}

		::System::Void ReportShowAgreementDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTSHOWAGREEMENTDIALOG_OFFSET))(this);
		}

		::System::Void ReportAcceptAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTACCEPTAGREEMENTS_OFFSET))(this);
		}

		::System::Void ReportRefuseAgreements()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE_REPORTREFUSEAGREEMENTS_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_0_OFFSET))(this);
		}

		::System::Void _ShowReactivateDialog_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERBASE__SHOWREACTIVATEDIALOG_B__16_1_OFFSET))(this);
		}

	};
}
