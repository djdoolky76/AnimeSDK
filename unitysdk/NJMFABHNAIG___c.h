#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLCNOGIJGMH;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define NJMFABHNAIG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBC1E650)
#define NJMFABHNAIG___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBC1E690)
#define NJMFABHNAIG___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET UNITYSDK_OFFSET(0xBC1E6A0)
#define NJMFABHNAIG___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_1_OFFSET UNITYSDK_OFFSET(0xBC1E6F0)
#define NJMFABHNAIG___C___DELAYFORCEQUIT_B__30_0_OFFSET UNITYSDK_OFFSET(0xBC1E7E0)

	class NJMFABHNAIG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42AE0);
		}

		static ::System::Action** StaticGet___9__30_0()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42AE8);
		}

		static ::System::Action** StaticGet___9__12_1()
		{
			return (::System::Action**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42AF0);
		}

		static ::System::Func_2<::JLCNOGIJGMH*, ::RPG::Client::Promises::IPromise*>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::JLCNOGIJGMH*, ::RPG::Client::Promises::IPromise*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x42AF8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJMFABHNAIG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _FinishCurBattleNodeByUserQuit_b__12_0(::JLCNOGIJGMH* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::JLCNOGIJGMH*))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_0_OFFSET))(this, a1);
		}

		::System::Void _FinishCurBattleNodeByUserQuit_b__12_1(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C__FINISHCURBATTLENODEBYUSERQUIT_B__12_1_OFFSET))(this, a1);
		}

		::System::Void __DelayForceQuit_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJMFABHNAIG___C___DELAYFORCEQUIT_B__30_0_OFFSET))(this);
		}

	};
