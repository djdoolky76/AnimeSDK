#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/LoginPhase.h"
class CFNBLNHMHGO;
namespace RPG::Client::Promises { class IPromise; }
namespace System { class Action; }
namespace System { class Exception; }
namespace System { class Object; }
namespace UnityEngine { class Coroutine; }

#define RPG_CLIENT_CLIENTSTARTUPPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0xCB77120)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCB771D0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_ENTER_OFFSET UNITYSDK_OFFSET(0xCB77450)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_GETGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0xCB77930)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xCB773F0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_LEAVE_OFFSET UNITYSDK_OFFSET(0xCB77310)
#define RPG_CLIENT_CLIENTSTARTUPPHASE_TICK_OFFSET UNITYSDK_OFFSET(0xCB77390)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__CHECKGLOBALDISPATCHSTATE_OFFSET UNITYSDK_OFFSET(0xCB785C0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__FETCHGLOBALDISPATCHINFO_OFFSET UNITYSDK_OFFSET(0xCB789E0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__GETSERVERPINGS_OFFSET UNITYSDK_OFFSET(0xCB78D90)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__GLOBALFINISHED_OFFSET UNITYSDK_OFFSET(0xCB78E90)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__HANDLESPLASHEXCEPTIONS_OFFSET UNITYSDK_OFFSET(0xCB78B90)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__ONEXCEPTION_OFFSET UNITYSDK_OFFSET(0xCB77CC0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMELOGOSHOW_OFFSET UNITYSDK_OFFSET(0xCB783B0)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMESPLASHEND_OFFSET UNITYSDK_OFFSET(0xCB77980)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xCB78290)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWGAMESTARTUPMAINPAGE_OFFSET UNITYSDK_OFFSET(0xCB77C20)
#define RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWSTARTUPSPLASHPAGE_OFFSET UNITYSDK_OFFSET(0xCB77890)
#define RPG_CLIENT_CLIENTSTARTUPPHASE___FETCHGLOBALDISPATCHINFO_B__15_0_OFFSET UNITYSDK_OFFSET(0xCB79070)

namespace RPG::Client
{
	class ClientStartupPhase : public ::RPG::Client::LoginPhase
	{
	public:
		::UnityEngine::Coroutine* fetchCoroutine; // 0x28
		::System::UInt32 _FullScreenBlockUID; // 0x30
		static ::System::Boolean* StaticGet_IgnoreSplash()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "ClientStartupPhase")->GetStaticField(0x15C80);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean Leave(::CFNBLNHMHGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_LEAVE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean Enter()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_ENTER_OFFSET))(this);
		}

		::RPG::Client::GamePhaseType GetGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE_GETGAMEPHASETYPE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _OnGameSplashEnd()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMESPLASHEND_OFFSET))(this);
		}

		::System::Void _OnException(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__ONEXCEPTION_OFFSET))(this, a1);
		}

		::System::Void _ShowDebugInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWDEBUGINFO_OFFSET))(this);
		}

		::System::Void _OnGameLogoShow(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__ONGAMELOGOSHOW_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ShowStartupSplashPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWSTARTUPSPLASHPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowGameStartupMainPage()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__SHOWGAMESTARTUPMAINPAGE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _CheckGlobalDispatchState(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__CHECKGLOBALDISPATCHSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _FetchGlobalDispatchInfo()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__FETCHGLOBALDISPATCHINFO_OFFSET))(this);
		}

		::System::Void _HandleSplashExceptions(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__HANDLESPLASHEXCEPTIONS_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _GetServerPings(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__GETSERVERPINGS_OFFSET))(this, a1);
		}

		::System::Void _GlobalFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE__GLOBALFINISHED_OFFSET))(this);
		}

		::System::Void __FetchGlobalDispatchInfo_b__15_0(::System::Action* a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLIENTSTARTUPPHASE___FETCHGLOBALDISPATCHINFO_B__15_0_OFFSET))(this, a1, a2);
		}

	};
}
