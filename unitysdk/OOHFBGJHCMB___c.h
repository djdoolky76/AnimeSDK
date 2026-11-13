#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }

#define OOHFBGJHCMB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x196A3A80)
#define OOHFBGJHCMB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x196A3AC0)
#define OOHFBGJHCMB___C__CHALLENGENORMAL_B__23_1_OFFSET UNITYSDK_OFFSET(0x196A3BA0)
#define OOHFBGJHCMB___C__INITNORMALLINEUPS_B__22_1_OFFSET UNITYSDK_OFFSET(0x196A3B90)
#define OOHFBGJHCMB___C__REVOKENORMALLINEUPS_B__32_1_OFFSET UNITYSDK_OFFSET(0x196A3C70)
#define OOHFBGJHCMB___C__SAVENORMALLINEUPS_B__31_1_OFFSET UNITYSDK_OFFSET(0x196A3C60)
#define OOHFBGJHCMB___C__SHOWPEAKTEAMEDIT_B__18_0_OFFSET UNITYSDK_OFFSET(0x196A3AD0)
#define OOHFBGJHCMB___C___HANDLESHOWENTRANCE_B__41_1_OFFSET UNITYSDK_OFFSET(0x196A3D30)
#define OOHFBGJHCMB___C___TRYSHOWQUICKPASSHINT_B__46_0_OFFSET UNITYSDK_OFFSET(0x196A3D80)
#define OOHFBGJHCMB___C___TRYSHOWSETTLECONFIRM_B__47_0_OFFSET UNITYSDK_OFFSET(0x196A3DF0)

inline static constexpr unsigned int OOHFBGJHCMB___c_TypeDefinitionIndex = 64601;

	class OOHFBGJHCMB___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Exception*>** StaticGet___9__23_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CC0);
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>** StaticGet___9__46_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CC8);
		}

		static ::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>** StaticGet___9__47_0()
		{
			return (::System::Func_1<::RPG::Client::Promises::IPromise_1<::System::Boolean>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CD0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CD8);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__31_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CE0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CE8);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__32_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CF0);
		}

		static ::System::Action_1<::System::Exception*>** StaticGet___9__22_1()
		{
			return (::System::Action_1<::System::Exception*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68CF8);
		}

		static ::System::Func_2<::System::Boolean, ::RPG::Client::Promises::IPromise*>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::System::Boolean, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x68D00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C_CTOR_OFFSET))(this);
		}

		::System::Void _ShowPeakTeamEdit_b__18_0(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__SHOWPEAKTEAMEDIT_B__18_0_OFFSET))(this, a1);
		}

		::System::Void _InitNormalLineups_b__22_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__INITNORMALLINEUPS_B__22_1_OFFSET))(this, a1);
		}

		::System::Void _ChallengeNormal_b__23_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__CHALLENGENORMAL_B__23_1_OFFSET))(this, a1);
		}

		::System::Void _SaveNormalLineups_b__31_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__SAVENORMALLINEUPS_B__31_1_OFFSET))(this, a1);
		}

		::System::Void _RevokeNormalLineups_b__32_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C__REVOKENORMALLINEUPS_B__32_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* __HandleShowEntrance_b__41_1(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C___HANDLESHOWENTRANCE_B__41_1_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* __TryShowQuickPassHint_b__46_0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C___TRYSHOWQUICKPASSHINT_B__46_0_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* __TryShowSettleConfirm_b__47_0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOHFBGJHCMB___C___TRYSHOWSETTLECONFIRM_B__47_0_OFFSET))(this);
		}

	};
