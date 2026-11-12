#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
class IAJLHKIHBFB;
class KBLELMJDBEA;
class MFKLCJHKNBK;
class OOEKGCFMFBP;
namespace RPG::Client { class ChimeraGameInstance_ActionReplayHook; }
namespace RPG::Client { class IChimeraSettleCommand; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace RPG::Client::Prop { class ChimeraViewTimeManager; }
namespace System { class Action; }
namespace System { class String; }

#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ADDHOOKONACTIONREPLAY_OFFSET UNITYSDK_OFFSET(0xD4B2EC0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0xD4B3C00)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_DOCLEARBATTLE_OFFSET UNITYSDK_OFFSET(0xD4B3310)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_FINISHCHIMERABATTLE_OFFSET UNITYSDK_OFFSET(0xD4B32C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GETCONTEXTS_OFFSET UNITYSDK_OFFSET(0xD4B3BB0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0xD4B1D10)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0xD4B03B0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_LOCKCOUNT_OFFSET UNITYSDK_OFFSET(0xD4B04E0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0xD4B04F0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET__ISPAUSED_OFFSET UNITYSDK_OFFSET(0xD4B03A0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_REFRESHAUDIOENV_OFFSET UNITYSDK_OFFSET(0xD4B2340)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_REMOVEHOOKONACTIONREPLAY_OFFSET UNITYSDK_OFFSET(0xD4B2F40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_SETGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0xD4B1CA0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_SETWAITNEXTSTEP_OFFSET UNITYSDK_OFFSET(0xD4B3B60)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSETTLEBATTLE_OFFSET UNITYSDK_OFFSET(0xD4B34F0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSWITCHAREA_OFFSET UNITYSDK_OFFSET(0xD4B2FC0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CLEARPREPARATION_OFFSET UNITYSDK_OFFSET(0xD4B0B70)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATECONTEXTS_OFFSET UNITYSDK_OFFSET(0xD4B0CB0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESERVICES_OFFSET UNITYSDK_OFFSET(0xD4B0D10)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESYSTEMS_OFFSET UNITYSDK_OFFSET(0xD4B0DA0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__FINISHINIT_OFFSET UNITYSDK_OFFSET(0xD4B1C20)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__FORCELOD_OFFSET UNITYSDK_OFFSET(0xD4B1EA0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__GOTONEXTSTREET_OFFSET UNITYSDK_OFFSET(0xD4B3240)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__HIDETRANSITIONCOVER_OFFSET UNITYSDK_OFFSET(0xD4B1A40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__INITIALIZETIMEMANAGER_OFFSET UNITYSDK_OFFSET(0xD4B0BC0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0xD4B3A70)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONINIT_OFFSET UNITYSDK_OFFSET(0xD4B0590)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONTICK_OFFSET UNITYSDK_OFFSET(0xD4B2D70)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PERFORMINITCOMMANDS_OFFSET UNITYSDK_OFFSET(0xD4B1770)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREAUDIOENV_OFFSET UNITYSDK_OFFSET(0xD4B1570)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREGAME_OFFSET UNITYSDK_OFFSET(0xD4B0990)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPARESCENEENV_OFFSET UNITYSDK_OFFSET(0xD4B1300)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PUSHINITCOMMANDS_OFFSET UNITYSDK_OFFSET(0xD4B0E40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETAUDIOENV_OFFSET UNITYSDK_OFFSET(0xD4B2B80)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETSCENEENV_OFFSET UNITYSDK_OFFSET(0xD4B2690)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWBATTLEPAGE_OFFSET UNITYSDK_OFFSET(0xD4B1AB0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWTRANSITIONCOVER_OFFSET UNITYSDK_OFFSET(0xD4B0820)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SIMULATE_OFFSET UNITYSDK_OFFSET(0xD4B1210)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0xD4B15C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance_TypeDefinitionIndex = 61743;

	class ChimeraGameInstance : public ::HCLPKMIIANI
	{
	public:
		::RPG::Client::Promises::Promise* ExitGameLoadingFinishPromise; // 0x78
		::RPG::Client::Promises::Promise* EnterGameLoadingFinishPromise; // 0x80
		::RPG::Client::IChimeraSettleCommand* _CachedSettleCommand; // 0x88
		::MFKLCJHKNBK* _Contexts; // 0x90
		::KBLELMJDBEA* _Services; // 0x98
		::RPG::Client::Prop::ChimeraViewTimeManager* TimeManager; // 0xA0
		::RPG::Client::ChimeraGameInstance_ActionReplayHook* _ActionReplayHooks; // 0xA8
		::OOEKGCFMFBP* _Feature; // 0xB0
		::System::UInt32 _SpawnWorkID; // 0xB8
		::System::Boolean _IsWaitNextStep; // 0xBC
		::System::Byte _padding0[0x3];
		::System::Int32 _LockCount; // 0xC0
		// static const ::System::String* _ChimeraLittleGameLGPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_CTOR_OFFSET))(this);
		}

		::System::Boolean get__IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET__ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Int32 get_LockCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_LOCKCOUNT_OFFSET))(this);
		}

		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* get_Puzzle()
		{
			return ((::RPG::Client::Prop::ChimeraBattlePuzzleBoard*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_PUZZLE_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__ONINIT_OFFSET))(this, a1);
		}

		::System::Void _PrepareGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREGAME_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _StartPuzzle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__STARTPUZZLE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _PerformInitCommands()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PERFORMINITCOMMANDS_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _HideTransitionCover()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__HIDETRANSITIONCOVER_OFFSET))(this);
		}

		::System::Void _ShowBattlePage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWBATTLEPAGE_OFFSET))(this);
		}

		::System::Void _ClearPreparation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CLEARPREPARATION_OFFSET))(this);
		}

		::System::Void _InitializeTimeManager()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__INITIALIZETIMEMANAGER_OFFSET))(this);
		}

		::System::Void _CreateContexts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATECONTEXTS_OFFSET))(this);
		}

		::System::Void _CreateServices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESERVICES_OFFSET))(this);
		}

		::System::Void _CreateSystems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESYSTEMS_OFFSET))(this);
		}

		::System::Void _PushInitCommands()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PUSHINITCOMMANDS_OFFSET))(this);
		}

		::System::Void _FinishInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__FINISHINIT_OFFSET))(this);
		}

		::System::String* GetLevelGraphPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GETLEVELGRAPHPATH_OFFSET))(this);
		}

		::System::Void _PrepareSceneEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPARESCENEENV_OFFSET))(this);
		}

		::System::Void _ForceLOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__FORCELOD_OFFSET))(this);
		}

		::System::Void _PrepareAudioEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREAUDIOENV_OFFSET))(this);
		}

		::System::Void RefreshAudioEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_REFRESHAUDIOENV_OFFSET))(this);
		}

		::System::Void _ResetSceneEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETSCENEENV_OFFSET))(this);
		}

		::System::Void _ResetAudioEnv()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETAUDIOENV_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _Simulate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__SIMULATE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ShowTransitionCover()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWTRANSITIONCOVER_OFFSET))(this);
		}

		::System::Void AddHookOnActionReplay(::RPG::Client::ChimeraGameInstance_ActionReplayHook* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGameInstance_ActionReplayHook*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_ADDHOOKONACTIONREPLAY_OFFSET))(this, a1);
		}

		::System::Void RemoveHookOnActionReplay(::RPG::Client::ChimeraGameInstance_ActionReplayHook* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ChimeraGameInstance_ActionReplayHook*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_REMOVEHOOKONACTIONREPLAY_OFFSET))(this, a1);
		}

		::System::Void TrySwitchArea(::System::Int32 a1, ::System::Action* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSWITCHAREA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _GotoNextStreet(::RPG::Client::Prop::ChimeraBattlePuzzleBoard* a1, ::System::Int32 a2, ::System::Action* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraBattlePuzzleBoard*, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__GOTONEXTSTREET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FinishChimeraBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_FINISHCHIMERABATTLE_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DoClearBattle()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_DOCLEARBATTLE_OFFSET))(this);
		}

		::System::Void TrySettleBattle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSETTLEBATTLE_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE__ONCLEAR_OFFSET))(this);
		}

		::System::Void SetGamePause(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_SETGAMEPAUSE_OFFSET))(this, a1);
		}

		::System::Void SetWaitNextStep(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_SETWAITNEXTSTEP_OFFSET))(this, a1);
		}

		::MFKLCJHKNBK* GetContexts()
		{
			return ((::MFKLCJHKNBK*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHIMERAGAMEINSTANCE_GETCONTEXTS_OFFSET))(this);
		}

	};
}
