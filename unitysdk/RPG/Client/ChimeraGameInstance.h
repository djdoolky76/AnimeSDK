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

#define RPG_CLIENT_CHIMERAGAMEINSTANCE_ADDHOOKONACTIONREPLAY_OFFSET UNITYSDK_OFFSET(0x1CE84F60)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE85C90)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_DOCLEARBATTLE_OFFSET UNITYSDK_OFFSET(0x1CE853A0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_FINISHCHIMERABATTLE_OFFSET UNITYSDK_OFFSET(0x1CE85350)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GETCONTEXTS_OFFSET UNITYSDK_OFFSET(0x1CE85C40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GETLEVELGRAPHPATH_OFFSET UNITYSDK_OFFSET(0x1CE83DB0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1CE823D0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_LOCKCOUNT_OFFSET UNITYSDK_OFFSET(0x1CE824F0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET_PUZZLE_OFFSET UNITYSDK_OFFSET(0x1CE82500)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_GET__ISPAUSED_OFFSET UNITYSDK_OFFSET(0x1CE823C0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_REFRESHAUDIOENV_OFFSET UNITYSDK_OFFSET(0x1CE843E0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_REMOVEHOOKONACTIONREPLAY_OFFSET UNITYSDK_OFFSET(0x1CE84FE0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_SETGAMEPAUSE_OFFSET UNITYSDK_OFFSET(0x1CE83D40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_SETWAITNEXTSTEP_OFFSET UNITYSDK_OFFSET(0x1CE85BF0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSETTLEBATTLE_OFFSET UNITYSDK_OFFSET(0x1CE85570)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE_TRYSWITCHAREA_OFFSET UNITYSDK_OFFSET(0x1CE85060)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CLEARPREPARATION_OFFSET UNITYSDK_OFFSET(0x1CE82B70)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATECONTEXTS_OFFSET UNITYSDK_OFFSET(0x1CE82CB0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESERVICES_OFFSET UNITYSDK_OFFSET(0x1CE82D10)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__CREATESYSTEMS_OFFSET UNITYSDK_OFFSET(0x1CE82DA0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__FINISHINIT_OFFSET UNITYSDK_OFFSET(0x1CE83CC0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__FORCELOD_OFFSET UNITYSDK_OFFSET(0x1CE83F40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__GOTONEXTSTREET_OFFSET UNITYSDK_OFFSET(0x1CE852D0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__HIDETRANSITIONCOVER_OFFSET UNITYSDK_OFFSET(0x1CE83AE0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__INITIALIZETIMEMANAGER_OFFSET UNITYSDK_OFFSET(0x1CE82BC0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x1CE85AF0)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONINIT_OFFSET UNITYSDK_OFFSET(0x1CE82590)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__ONTICK_OFFSET UNITYSDK_OFFSET(0x1CE84E10)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PERFORMINITCOMMANDS_OFFSET UNITYSDK_OFFSET(0x1CE83770)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREAUDIOENV_OFFSET UNITYSDK_OFFSET(0x1CE83570)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPAREGAME_OFFSET UNITYSDK_OFFSET(0x1CE82990)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PREPARESCENEENV_OFFSET UNITYSDK_OFFSET(0x1CE83300)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__PUSHINITCOMMANDS_OFFSET UNITYSDK_OFFSET(0x1CE82E40)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETAUDIOENV_OFFSET UNITYSDK_OFFSET(0x1CE84C20)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__RESETSCENEENV_OFFSET UNITYSDK_OFFSET(0x1CE84730)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWBATTLEPAGE_OFFSET UNITYSDK_OFFSET(0x1CE83B50)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SHOWTRANSITIONCOVER_OFFSET UNITYSDK_OFFSET(0x1CE82820)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__SIMULATE_OFFSET UNITYSDK_OFFSET(0x1CE83210)
#define RPG_CLIENT_CHIMERAGAMEINSTANCE__STARTPUZZLE_OFFSET UNITYSDK_OFFSET(0x1CE835C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChimeraGameInstance_TypeDefinitionIndex = 61743;

	class ChimeraGameInstance : public ::HCLPKMIIANI
	{
	public:
		::RPG::Client::Prop::ChimeraViewTimeManager* TimeManager; // 0x78
		::KBLELMJDBEA* _Services; // 0x80
		::OOEKGCFMFBP* _Feature; // 0x88
		::MFKLCJHKNBK* _Contexts; // 0x90
		::RPG::Client::ChimeraGameInstance_ActionReplayHook* _ActionReplayHooks; // 0x98
		::RPG::Client::Promises::Promise* EnterGameLoadingFinishPromise; // 0xA0
		::RPG::Client::IChimeraSettleCommand* _CachedSettleCommand; // 0xA8
		::RPG::Client::Promises::Promise* ExitGameLoadingFinishPromise; // 0xB0
		::System::Boolean _IsWaitNextStep; // 0xB8
		::System::Byte _padding0[0x3];
		::System::UInt32 _SpawnWorkID; // 0xBC
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
