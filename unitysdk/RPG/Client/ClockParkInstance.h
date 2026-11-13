#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACKNOAAIMPC.h"
#include "unitysdk/RPG/Client/ClockParkGameStateEnum.h"
#include "unitysdk/System/Object.h"
class CNOAGGFCDAL;
class FFDLJDAGEML;
class FOFGKMONJHJ;
class GIPBHLBFDAH;
class IEFICANECDH;
class IIMHLPBEDDH;
class KOCBHDOKFNF;
class LKADELHADBB;
class LOBFOKCKPKB;
class MDDIKNGBPPL;
class OBINJKCBALC;
class PEGDBKDLJDJ;
namespace RPG::Client { class BaseClockParkGameState; }
namespace RPG::Client { class ClockParkActionInfo; }
namespace RPG::Client { class ClockParkAttributeInfo; }
namespace RPG::Client { class ClockParkBuffInfo; }
namespace RPG::Client { class ClockParkCardInfo; }
namespace RPG::Client { class ClockParkDiceInfo; }
namespace RPG::Client { class ClockParkGameResultInfo; }
namespace RPG::Client { class ClockParkInstance; }
namespace RPG::Client { class ClockParkInstance_ClockParkBranchSelectState; }
namespace RPG::Client { class ClockParkInstance_ClockParkCheckState; }
namespace RPG::Client { class ClockParkInstance_ClockParkRandomEventState; }
namespace RPG::Client { class ClockParkInstance_ClockParkStoryState; }
namespace RPG::Client { class ClockParkLittleGameState; }
namespace RPG::Client { class ClockParkScriptInfo; }
namespace RPG::Client { class ClockParkSlotMachineState; }
namespace RPG::Client { class ClockParkWaitSelectStartChapterState; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::Common { template <typename T> class StateMachine_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1D012DE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D00FBD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D010370)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1D013790)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET UNITYSDK_OFFSET(0x1D0135F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET UNITYSDK_OFFSET(0x1D012B80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET UNITYSDK_OFFSET(0x1D013930)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x1D012D40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1D012CC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x1D012CE0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x1D012D20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1D013C10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1D013C50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x1D012D00)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1D012DC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1D013C30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x1D012D80)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1D012D60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1D012DA0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D012CA0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET UNITYSDK_OFFSET(0x1D00FCF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1D013860)
#define RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET UNITYSDK_OFFSET(0x1D0136C0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET UNITYSDK_OFFSET(0x1D010210)
#define RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET UNITYSDK_OFFSET(0x1D0104F0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET UNITYSDK_OFFSET(0x1D012D50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET UNITYSDK_OFFSET(0x1D012CD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET UNITYSDK_OFFSET(0x1D012CF0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET UNITYSDK_OFFSET(0x1D012D30)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1D013C20)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1D013C60)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET UNITYSDK_OFFSET(0x1D012D10)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET UNITYSDK_OFFSET(0x1D012DD0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET UNITYSDK_OFFSET(0x1D013C40)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET UNITYSDK_OFFSET(0x1D012D90)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1D012D70)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET UNITYSDK_OFFSET(0x1D012DB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET UNITYSDK_OFFSET(0x1D012CB0)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET UNITYSDK_OFFSET(0x1D010D50)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET UNITYSDK_OFFSET(0x1D010630)
#define RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET UNITYSDK_OFFSET(0x1D0105E0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1D010400)
#define RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET UNITYSDK_OFFSET(0x1D010EC0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET UNITYSDK_OFFSET(0x1D00FF30)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET UNITYSDK_OFFSET(0x1D012420)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET UNITYSDK_OFFSET(0x1D0108D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET UNITYSDK_OFFSET(0x1D010930)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET UNITYSDK_OFFSET(0x1D011180)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET UNITYSDK_OFFSET(0x1D0107B0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET UNITYSDK_OFFSET(0x1D010990)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET UNITYSDK_OFFSET(0x1D011110)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET UNITYSDK_OFFSET(0x1D0127A0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET UNITYSDK_OFFSET(0x1D0129D0)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET UNITYSDK_OFFSET(0x1D012730)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET UNITYSDK_OFFSET(0x1D012600)
#define RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET UNITYSDK_OFFSET(0x1D012810)

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkInstance_TypeDefinitionIndex = 62855;

	class ClockParkInstance : public ::System::Object
	{
	public:
		::RPG::Client::BaseClockParkGameState* _CurGameState_k__BackingField; // 0x10
		::RPG::Client::ClockParkDiceInfo* _DiceInfo_k__BackingField; // 0x18
		::System::String* _ScriptTransNo_k__BackingField; // 0x20
		::RPG::Client::ClockParkScriptInfo* _ScriptInfo_k__BackingField; // 0x28
		::RPG::Client::ClockParkActionInfo* _ActionInfo_k__BackingField; // 0x30
		::RPG::Client::ClockParkInstance_ClockParkRandomEventState* _RandomEventState; // 0x38
		::RPG::Client::ClockParkInstance_ClockParkCheckState* _CheckState; // 0x40
		::RPG::Client::ClockParkInstance_ClockParkBranchSelectState* _BranchSelectState; // 0x48
		::RPG::Client::ClockParkGameResultInfo* _ResultInfo_k__BackingField; // 0x50
		::RPG::Common::StateMachine_1<::RPG::Client::ClockParkInstance*>* _StateMachine; // 0x58
		::RPG::Client::ClockParkSlotMachineState* _SlotMachineState; // 0x60
		::RPG::Client::Promises::Promise* _RefreshOnGoingPromise; // 0x68
		::RPG::Client::ClockParkCardInfo* _CardInfo_k__BackingField; // 0x70
		::RPG::Client::ClockParkWaitSelectStartChapterState* _SelectStartChapterState; // 0x78
		::RPG::Client::ClockParkBuffInfo* _BuffInfo_k__BackingField; // 0x80
		::RPG::Client::ClockParkInstance_ClockParkStoryState* _StoryState; // 0x88
		::RPG::Client::ClockParkAttributeInfo* _AttributeInfo_k__BackingField; // 0x90
		::RPG::Client::ClockParkLittleGameState* _LittleGameState; // 0x98
		::System::Boolean _IsWaitSelectStartChapterId_k__BackingField; // 0xA0
		::System::Boolean IsManualQuit; // 0xA1
		::System::Byte _padding0[0x2];
		::ACKNOAAIMPC _Status_k__BackingField; // 0xA4
		::RPG::Client::ClockParkGameStateEnum _CurGameStateEnum_k__BackingField; // 0xA8
		::RPG::Client::ClockParkGameStateEnum _PrevGameStateEnum_k__BackingField; // 0xAC
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_INIT_OFFSET))(this);
		}

		::System::Void QuitCurGame(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_QUITCURGAME_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* RefreshOnGoingInfo()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_REFRESHONGOINGINFO_OFFSET))(this);
		}

		::System::Void SyncStatus(::ACKNOAAIMPC a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACKNOAAIMPC))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCSTATUS_OFFSET))(this, a1);
		}

		::System::Void SyncOnGoing(::LKADELHADBB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LKADELHADBB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCONGOING_OFFSET))(this, a1);
		}

		::System::Void SyncLotteryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SYNCLOTTERYID_OFFSET))(this, a1);
		}

		::System::Void _SyncScriptInfo(::System::UInt32 a1, ::System::UInt32 a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::UInt32 a4, ::System::UInt32 a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSCRIPTINFO_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _SyncWaitFinishStoryInfo(::CNOAGGFCDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CNOAGGFCDAL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITFINISHSTORYINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitPlaceDiceInfo(::PEGDBKDLJDJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGDBKDLJDJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITPLACEDICEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitMoveGameInfo(::KOCBHDOKFNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOCBHDOKFNF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITMOVEGAMEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitHanuShootingInfo(::FFDLJDAGEML* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFDLJDAGEML*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITHANUSHOOTINGINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitSlotMachineInfo(::IEFICANECDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEFICANECDH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITSLOTMACHINEINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncWaitInCheckPoint(::FOFGKMONJHJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOFGKMONJHJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCWAITINCHECKPOINT_OFFSET))(this, a1);
		}

		::System::Void _SyncCardDice(::IIMHLPBEDDH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IIMHLPBEDDH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCCARDDICE_OFFSET))(this, a1);
		}

		::System::Void _SyncAttribute(::LOBFOKCKPKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LOBFOKCKPKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCATTRIBUTE_OFFSET))(this, a1);
		}

		::System::Void _SyncBuffInfo(::OBINJKCBALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBINJKCBALC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCBUFFINFO_OFFSET))(this, a1);
		}

		::System::Void _SyncState(::MDDIKNGBPPL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDDIKNGBPPL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SYNCSTATE_OFFSET))(this, a1);
		}

		::System::Void Finish(::GIPBHLBFDAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIPBHLBFDAH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISH_OFFSET))(this, a1);
		}

		::ACKNOAAIMPC get_Status()
		{
			return ((::ACKNOAAIMPC(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::ACKNOAAIMPC a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACKNOAAIMPC))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_STATUS_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkAttributeInfo* get_AttributeInfo()
		{
			return ((::RPG::Client::ClockParkAttributeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ATTRIBUTEINFO_OFFSET))(this);
		}

		::System::Void set_AttributeInfo(::RPG::Client::ClockParkAttributeInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkAttributeInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ATTRIBUTEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkBuffInfo* get_BuffInfo()
		{
			return ((::RPG::Client::ClockParkBuffInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_BUFFINFO_OFFSET))(this);
		}

		::System::Void set_BuffInfo(::RPG::Client::ClockParkBuffInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkBuffInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_BUFFINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkDiceInfo* get_DiceInfo()
		{
			return ((::RPG::Client::ClockParkDiceInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_DICEINFO_OFFSET))(this);
		}

		::System::Void set_DiceInfo(::RPG::Client::ClockParkDiceInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkDiceInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_DICEINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkCardInfo* get_CardInfo()
		{
			return ((::RPG::Client::ClockParkCardInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CARDINFO_OFFSET))(this);
		}

		::System::Void set_CardInfo(::RPG::Client::ClockParkCardInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkCardInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CARDINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkActionInfo* get_ActionInfo()
		{
			return ((::RPG::Client::ClockParkActionInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ACTIONINFO_OFFSET))(this);
		}

		::System::Void set_ActionInfo(::RPG::Client::ClockParkActionInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkActionInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ACTIONINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkScriptInfo* get_ScriptInfo()
		{
			return ((::RPG::Client::ClockParkScriptInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTINFO_OFFSET))(this);
		}

		::System::Void set_ScriptInfo(::RPG::Client::ClockParkScriptInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkScriptInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTINFO_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkGameResultInfo* get_ResultInfo()
		{
			return ((::RPG::Client::ClockParkGameResultInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_RESULTINFO_OFFSET))(this);
		}

		::System::Void set_ResultInfo(::RPG::Client::ClockParkGameResultInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameResultInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_RESULTINFO_OFFSET))(this, a1);
		}

		::System::String* get_ScriptTransNo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_SCRIPTTRANSNO_OFFSET))(this);
		}

		::System::Void set_ScriptTransNo(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_SCRIPTTRANSNO_OFFSET))(this, a1);
		}

		::System::Boolean get_IsWaitSelectStartChapterId()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this);
		}

		::System::Void set_IsWaitSelectStartChapterId(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_ISWAITSELECTSTARTCHAPTERID_OFFSET))(this, a1);
		}

		::IIMHLPBEDDH* CreateDicePlacement()
		{
			return ((::IIMHLPBEDDH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_CREATEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean FinishRound()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_FINISHROUND_OFFSET))(this);
		}

		::System::Boolean IsShowDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean EnableDicePlacement()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ENABLEDICEPLACEMENT_OFFSET))(this);
		}

		::System::Boolean IsShowAttributeInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_ISSHOWATTRIBUTEINFO_OFFSET))(this);
		}

		::RPG::Client::BaseClockParkGameState* GetState(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GETSTATE_OFFSET))(this, a1);
		}

		::System::Void _InitGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__INITGAMESTATE_OFFSET))(this);
		}

		::System::Void _DisposeGameState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__DISPOSEGAMESTATE_OFFSET))(this);
		}

		::System::Void _SwitchState(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__SWITCHSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::BaseClockParkGameState* _GetState(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE__GETSTATE_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkGameStateEnum get_CurGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_CurGameStateEnum(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATEENUM_OFFSET))(this, a1);
		}

		::RPG::Client::ClockParkGameStateEnum get_PrevGameStateEnum()
		{
			return ((::RPG::Client::ClockParkGameStateEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_PREVGAMESTATEENUM_OFFSET))(this);
		}

		::System::Void set_PrevGameStateEnum(::RPG::Client::ClockParkGameStateEnum a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ClockParkGameStateEnum))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_PREVGAMESTATEENUM_OFFSET))(this, a1);
		}

		::RPG::Client::BaseClockParkGameState* get_CurGameState()
		{
			return ((::RPG::Client::BaseClockParkGameState*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_GET_CURGAMESTATE_OFFSET))(this);
		}

		::System::Void set_CurGameState(::RPG::Client::BaseClockParkGameState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::BaseClockParkGameState*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CLOCKPARKINSTANCE_SET_CURGAMESTATE_OFFSET))(this, a1);
		}

	};
}
