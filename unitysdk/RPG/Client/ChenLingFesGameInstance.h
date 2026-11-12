#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLingFes/ChenLingFesGameState.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/System/ValueTuple_2.h"
class AJOPMLKHAGC;
class BBOFEHOPCEC;
class EKFMIDBJDIA;
class FDPALAEIHPB;
class FMGAMFHAELP;
class IAJLHKIHBFB;
class NGFHCJIAOLH;
class NNEIOFDLLMI;
class OAIPJANPCEK;
class OFGLEOIIJBD;
namespace Entitas { class IEntity; }
namespace RPG::Client::LittleGame::ChenLingFes { class ChenLingFesBoardView; }
namespace RPG::GameCore { class EventManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CANCLEAR_OFFSET UNITYSDK_OFFSET(0xD433D70)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CCTOR_OFFSET UNITYSDK_OFFSET(0xD434FC0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xD434F00)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_FORCEDEACTIVEFEVER_OFFSET UNITYSDK_OFFSET(0xD431610)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETFEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xD431930)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETLEVELID_OFFSET UNITYSDK_OFFSET(0xD434670)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETSTATETREEROOT_OFFSET UNITYSDK_OFFSET(0xD431A10)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETVIEWROOT_OFFSET UNITYSDK_OFFSET(0xD431C40)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xD4319F0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD4319D0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMELOOPINSTANCE_OFFSET UNITYSDK_OFFSET(0xD431560)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xD434EE0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0xD434EC0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_SERVICES_OFFSET UNITYSDK_OFFSET(0xD4345C0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_MARKUIREADYANDDISPATCHCACHEDNOTIFY_OFFSET UNITYSDK_OFFSET(0xD42B310)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_NOTIFYORCACHEUIENTITY_OFFSET UNITYSDK_OFFSET(0xD434D80)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONADDSCORE_OFFSET UNITYSDK_OFFSET(0xD430540)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONFEVERACTIVE_OFFSET UNITYSDK_OFFSET(0xD431580)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYEND_OFFSET UNITYSDK_OFFSET(0xD430C30)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYSTART_OFFSET UNITYSDK_OFFSET(0xD430730)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMELEVELEND_OFFSET UNITYSDK_OFFSET(0xD431400)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEWEEKEND_OFFSET UNITYSDK_OFFSET(0xD4310E0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYACTIVE_OFFSET UNITYSDK_OFFSET(0xD4317D0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYDEACTIVE_OFFSET UNITYSDK_OFFSET(0xD431870)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONSTARTGAME_OFFSET UNITYSDK_OFFSET(0xD4348C0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xD4345D0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESETFEVER_OFFSET UNITYSDK_OFFSET(0xD430DD0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESUMEGAME_OFFSET UNITYSDK_OFFSET(0xD433EF0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xD4316F0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD4316A0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETWAITRESTART_OFFSET UNITYSDK_OFFSET(0xD431CB0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERADDVALUE_OFFSET UNITYSDK_OFFSET(0xD431A00)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERTHRESHOLD_OFFSET UNITYSDK_OFFSET(0xD4319E0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMELOOPINSTANCE_OFFSET UNITYSDK_OFFSET(0xD431570)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESESSION_OFFSET UNITYSDK_OFFSET(0xD434EF0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESTATE_OFFSET UNITYSDK_OFFSET(0xD434ED0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SHOWMAZEUI_OFFSET UNITYSDK_OFFSET(0xD434B00)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOBUILDCAMERA_OFFSET UNITYSDK_OFFSET(0xD431010)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOGAMECAMERA_OFFSET UNITYSDK_OFFSET(0xD430A20)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE_TRYTRIGGERFEVER_OFFSET UNITYSDK_OFFSET(0xD430AF0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ADDNOTIFY_OFFSET UNITYSDK_OFFSET(0xD4328C0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CREATEGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xD431E90)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__DESTROYGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0xD4346C0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xD433E10)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONFINISHGAME_OFFSET UNITYSDK_OFFSET(0xD433FA0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xD434AB0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONINIT_OFFSET UNITYSDK_OFFSET(0xD431D00)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONSTART_OFFSET UNITYSDK_OFFSET(0xD432900)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONTICK_OFFSET UNITYSDK_OFFSET(0xD434310)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__REMOVENOTIFY_OFFSET UNITYSDK_OFFSET(0xD434880)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__SETPLAYERENTITYVISIBLE_OFFSET UNITYSDK_OFFSET(0xD433BD0)
#define RPG_CLIENT_CHENLINGFESGAMEINSTANCE__TRIGGERGROUPEVENT_OFFSET UNITYSDK_OFFSET(0xD434A10)

namespace RPG::Client
{
	inline static constexpr unsigned int ChenLingFesGameInstance_TypeDefinitionIndex = 61596;

	class ChenLingFesGameInstance : public ::HCLPKMIIANI
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _FeverAddValue_k__BackingField; // 0x78
		::NNEIOFDLLMI* _GameLoopInstance_k__BackingField; // 0x80
		::System::String* _GameLevelTransNo; // 0x88
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::RPG::Client::NotifyType, ::System::Object*>>* _CachedUIEntityNotifyList; // 0x90
		::System::String* _GameDailyTransNo; // 0x98
		::FDPALAEIHPB* _Contexts; // 0xA0
		::RPG::GameCore::EventManager* _EventManagerRef; // 0xA8
		::FMGAMFHAELP* _UpdateSystems; // 0xB0
		::RPG::GameCore::GameEntity* _OwnerGroupEntity; // 0xB8
		::OAIPJANPCEK* _Services; // 0xC0
		::AJOPMLKHAGC* _GameSession_k__BackingField; // 0xC8
		::OFGLEOIIJBD* _GamePlayData; // 0xD0
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesBoardView* _BoardView; // 0xD8
		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState _GameState_k__BackingField; // 0xE0
		::System::UInt32 _DailySeed; // 0xE4
		::System::Int32 _feverActiveCount; // 0xE8
		::System::UInt32 _FeverThreshold_k__BackingField; // 0xEC
		::System::Int32 _GameLevelID; // 0xF0
		::System::Boolean _IsGamePaused; // 0xF4
		::System::Boolean _WaitRestart; // 0xF5
		::System::Boolean _CacheUIEntityNotifyBeforeUIReady; // 0xF6
		static ::System::String** StaticGet_EventName_OnGameFinish()
		{
			return (::System::String**)UnitySDK::FromName("RPG.Client", "ChenLingFesGameInstance")->GetStaticField(0x54680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CCTOR_OFFSET))();
		}

		::System::Void OnAddScore(::System::UInt32 a1, ::NGFHCJIAOLH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NGFHCJIAOLH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONADDSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void OnGameDayStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYSTART_OFFSET))(this);
		}

		::System::Void OnGameDayEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEDAYEND_OFFSET))(this);
		}

		::System::Void OnGameWeekEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMEWEEKEND_OFFSET))(this);
		}

		::System::Void OnGameLevelEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONGAMELEVELEND_OFFSET))(this);
		}

		::NNEIOFDLLMI* get_GameLoopInstance()
		{
			return ((::NNEIOFDLLMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMELOOPINSTANCE_OFFSET))(this);
		}

		::System::Void set_GameLoopInstance(::NNEIOFDLLMI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNEIOFDLLMI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMELOOPINSTANCE_OFFSET))(this, a1);
		}

		::System::Void OnFeverActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONFEVERACTIVE_OFFSET))(this);
		}

		::System::Void ForceDeactiveFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_FORCEDEACTIVEFEVER_OFFSET))(this);
		}

		::System::Void SetFeverThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Void SetFeverAddValue(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETFEVERADDVALUE_OFFSET))(this, a1);
		}

		::System::Void ResetFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESETFEVER_OFFSET))(this);
		}

		::System::Void TryTriggerFever()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_TRYTRIGGERFEVER_OFFSET))(this);
		}

		::System::Void OnLevelAbilityActive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYACTIVE_OFFSET))(this, a1);
		}

		::System::Void OnLevelAbilityDeActive(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONLEVELABILITYDEACTIVE_OFFSET))(this, a1);
		}

		::System::UInt32 GetFeverAddValue()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETFEVERADDVALUE_OFFSET))(this);
		}

		::System::UInt32 get_FeverThreshold()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERTHRESHOLD_OFFSET))(this);
		}

		::System::Void set_FeverThreshold(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERTHRESHOLD_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_FeverAddValue()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_FEVERADDVALUE_OFFSET))(this);
		}

		::System::Void set_FeverAddValue(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_FEVERADDVALUE_OFFSET))(this, a1);
		}

		::BBOFEHOPCEC* GetStateTreeRoot(::System::Int32 a1)
		{
			return ((::BBOFEHOPCEC*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETSTATETREEROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetViewRoot(::Entitas::IEntity* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETVIEWROOT_OFFSET))(this, a1);
		}

		::System::Void SetWaitRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SETWAITRESTART_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONSTART_OFFSET))(this);
		}

		::System::Boolean CanClear()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_CANCLEAR_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONCLEAR_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONTICK_OFFSET))(this, a1);
		}

		::OAIPJANPCEK* get_Services()
		{
			return ((::OAIPJANPCEK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_SERVICES_OFFSET))(this);
		}

		::System::Void PauseGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_PAUSEGAME_OFFSET))(this);
		}

		::System::Void ResumeGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_RESUMEGAME_OFFSET))(this);
		}

		::System::Void SwitchToBuildCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOBUILDCAMERA_OFFSET))(this);
		}

		::System::Void SwitchToGameCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SWITCHTOGAMECAMERA_OFFSET))(this);
		}

		::System::Int32 GetLevelID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GETLEVELID_OFFSET))(this);
		}

		::System::Void _CreateGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__CREATEGAMECONTEXT_OFFSET))(this);
		}

		::System::Void _DestroyGameContext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__DESTROYGAMECONTEXT_OFFSET))(this);
		}

		::System::Void _AddNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ADDNOTIFY_OFFSET))(this);
		}

		::System::Void _RemoveNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__REMOVENOTIFY_OFFSET))(this);
		}

		::System::Void OnStartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_ONSTARTGAME_OFFSET))(this);
		}

		::System::Void _OnFinishGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONFINISHGAME_OFFSET))(this);
		}

		::System::Void _TriggerGroupEvent(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__TRIGGERGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void _OnGroupEvent(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__ONGROUPEVENT_OFFSET))(this, a1);
		}

		::System::Void ShowMazeUI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SHOWMAZEUI_OFFSET))(this, a1);
		}

		::System::Void _SetPlayerEntityVisible(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE__SETPLAYERENTITYVISIBLE_OFFSET))(this, a1);
		}

		::System::Void NotifyOrCacheUIEntity(::RPG::Client::NotifyType a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyType, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_NOTIFYORCACHEUIENTITY_OFFSET))(this, a1, a2);
		}

		::System::Void MarkUIReadyAndDispatchCachedNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_MARKUIREADYANDDISPATCHCACHEDNOTIFY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState get_GameState()
		{
			return ((::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESTATE_OFFSET))(this);
		}

		::System::Void set_GameState(::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::ChenLingFes::ChenLingFesGameState))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESTATE_OFFSET))(this, a1);
		}

		::AJOPMLKHAGC* get_GameSession()
		{
			return ((::AJOPMLKHAGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_GET_GAMESESSION_OFFSET))(this);
		}

		::System::Void set_GameSession(::AJOPMLKHAGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJOPMLKHAGC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFESGAMEINSTANCE_SET_GAMESESSION_OFFSET))(this, a1);
		}

	};
}
