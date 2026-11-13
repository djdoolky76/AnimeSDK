#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePhaseType.h"
#include "unitysdk/RPG/Client/PhaseContextType.h"
#include "unitysdk/System/Object.h"
class CFNBLNHMHGO;
class IILBDKLEPMM;
class PILHBCFGLIA;
namespace RPG::Client { class BasePhaseContext; }
namespace RPG::Client { class IGamePhase; }
namespace RPG::Client { class RPGProfilerMarker; }
namespace System { class Object; }

#define RPG_CLIENT_GAMEPHASEMANAGER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A80ACA0)
#define RPG_CLIENT_GAMEPHASEMANAGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A808CD0)
#define RPG_CLIENT_GAMEPHASEMANAGER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A809870)
#define RPG_CLIENT_GAMEPHASEMANAGER_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0x1A809370)
#define RPG_CLIENT_GAMEPHASEMANAGER_GETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1A802770)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_CURRENTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1A80ABF0)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTDIFFERENTPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1A80AC80)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1A80AC60)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASECONTEXT_OFFSET UNITYSDK_OFFSET(0x1A80AC10)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASELOADINGMANAGER_OFFSET UNITYSDK_OFFSET(0x1A80AC40)
#define RPG_CLIENT_GAMEPHASEMANAGER_GET_TRANSITIONMGR_OFFSET UNITYSDK_OFFSET(0x1A80AC20)
#define RPG_CLIENT_GAMEPHASEMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x1A808CE0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ISGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x1A80A030)
#define RPG_CLIENT_GAMEPHASEMANAGER_ISLOGINCONTEXT_OFFSET UNITYSDK_OFFSET(0x1A809FE0)
#define RPG_CLIENT_GAMEPHASEMANAGER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1A809080)
#define RPG_CLIENT_GAMEPHASEMANAGER_LEAVECURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1A8099B0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKDISCONNECTED_OFFSET UNITYSDK_OFFSET(0x1A8094E0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKRECONNECTED_OFFSET UNITYSDK_OFFSET(0x1A809690)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINFINISH_OFFSET UNITYSDK_OFFSET(0x1A8096D0)
#define RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x1A809650)
#define RPG_CLIENT_GAMEPHASEMANAGER_SETCURRENTPHASE_OFFSET UNITYSDK_OFFSET(0x1A80A080)
#define RPG_CLIENT_GAMEPHASEMANAGER_SETPHASECONTEXT_OFFSET UNITYSDK_OFFSET(0x1A809E90)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_CURRENTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1A80AC00)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTDIFFERENTPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1A80AC90)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTGAMEPHASETYPE_OFFSET UNITYSDK_OFFSET(0x1A80AC70)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_PHASELOADINGMANAGER_OFFSET UNITYSDK_OFFSET(0x1A80AC50)
#define RPG_CLIENT_GAMEPHASEMANAGER_SET_TRANSITIONMGR_OFFSET UNITYSDK_OFFSET(0x1A80AC30)
#define RPG_CLIENT_GAMEPHASEMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0x1A808D50)

namespace RPG::Client
{
	inline static constexpr unsigned int GamePhaseManager_TypeDefinitionIndex = 62673;

	class GamePhaseManager : public ::System::Object
	{
	public:
		::IILBDKLEPMM* _TransitionMgr_k__BackingField; // 0x10
		::PILHBCFGLIA* _PhaseLoadingManager_k__BackingField; // 0x18
		::RPG::Client::IGamePhase* _CurrentPhase; // 0x20
		::RPG::Client::BasePhaseContext* _PhaseContext; // 0x28
		::RPG::Client::PhaseContextType _contextType; // 0x30
		::RPG::Client::GamePhaseType _LastGamePhaseType_k__BackingField; // 0x34
		::RPG::Client::GamePhaseType _CurrentGamePhaseType_k__BackingField; // 0x38
		::RPG::Client::GamePhaseType _LastDifferentPhaseType_k__BackingField; // 0x3C
		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateCurrentPhaseMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x16930);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePhaseLoadingManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x16938);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_LateUpdateCurrentPhaseMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x16940);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdatePhaseContextMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x16948);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_EndOfLateTickCurrentPhaseMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x16950);
		}

		static ::RPG::Client::RPGProfilerMarker** StaticGet_UpdateTransitionManagerMarker()
		{
			return (::RPG::Client::RPGProfilerMarker**)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x16958);
		}

		static ::System::Boolean* StaticGet_FromGameRestart()
		{
			return (::System::Boolean*)UnitySDK::FromName("RPG.Client", "GamePhaseManager")->GetStaticField(0x5040);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_CCTOR_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_INIT_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_TICK_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void OnNetworkDisconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKDISCONNECTED_OFFSET))(this);
		}

		::System::Void OnPlayerLoginSuccess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINSUCCESS_OFFSET))(this);
		}

		::System::Void OnNetworkReconnected()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONNETWORKRECONNECTED_OFFSET))(this);
		}

		::System::Void OnPlayerLoginFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ONPLAYERLOGINFINISH_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_DISPOSE_OFFSET))(this);
		}

		::System::Void SetPhaseContext(::RPG::Client::PhaseContextType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PhaseContextType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SETPHASECONTEXT_OFFSET))(this, a1);
		}

		::System::Boolean IsLoginContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ISLOGINCONTEXT_OFFSET))(this);
		}

		::System::Boolean IsGameContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_ISGAMECONTEXT_OFFSET))(this);
		}

		::System::Void SetCurrentPhase(::RPG::Client::GamePhaseType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SETCURRENTPHASE_OFFSET))(this, a1, a2);
		}

		::RPG::Client::IGamePhase* GetCurrentPhase()
		{
			return ((::RPG::Client::IGamePhase*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GETCURRENTPHASE_OFFSET))(this);
		}

		::System::Void LeaveCurrentPhase(::CFNBLNHMHGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFNBLNHMHGO*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_LEAVECURRENTPHASE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType get_CurrentGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_CURRENTGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void set_CurrentGamePhaseType(::RPG::Client::GamePhaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_CURRENTGAMEPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::BasePhaseContext* get_PhaseContext()
		{
			return ((::RPG::Client::BasePhaseContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASECONTEXT_OFFSET))(this);
		}

		::IILBDKLEPMM* get_TransitionMgr()
		{
			return ((::IILBDKLEPMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_TRANSITIONMGR_OFFSET))(this);
		}

		::System::Void set_TransitionMgr(::IILBDKLEPMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IILBDKLEPMM*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_TRANSITIONMGR_OFFSET))(this, a1);
		}

		::PILHBCFGLIA* get_PhaseLoadingManager()
		{
			return ((::PILHBCFGLIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_PHASELOADINGMANAGER_OFFSET))(this);
		}

		::System::Void set_PhaseLoadingManager(::PILHBCFGLIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PILHBCFGLIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_PHASELOADINGMANAGER_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType get_LastGamePhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTGAMEPHASETYPE_OFFSET))(this);
		}

		::System::Void set_LastGamePhaseType(::RPG::Client::GamePhaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTGAMEPHASETYPE_OFFSET))(this, a1);
		}

		::RPG::Client::GamePhaseType get_LastDifferentPhaseType()
		{
			return ((::RPG::Client::GamePhaseType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_GET_LASTDIFFERENTPHASETYPE_OFFSET))(this);
		}

		::System::Void set_LastDifferentPhaseType(::RPG::Client::GamePhaseType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GamePhaseType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GAMEPHASEMANAGER_SET_LASTDIFFERENTPHASETYPE_OFFSET))(this, a1);
		}

	};
}
