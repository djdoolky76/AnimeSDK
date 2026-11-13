#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TarotBookVersion.h"
#include "unitysdk/System/Object.h"
class GFCJBHLLKBO;
namespace RPG::Client { class TarotBookInteraction; }
namespace RPG::Client { class TarotBookModule; }
namespace RPG::Client { class TarotBookStory; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_BEGINPOOLEXHAUSTEDPROCESS_OFFSET UNITYSDK_OFFSET(0x1ACB4CD0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANSELECTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB60D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANTRIGGERINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB6190)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKHASNEWMAIL_OFFSET UNITYSDK_OFFSET(0x1ACB73F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CTOR_OFFSET UNITYSDK_OFFSET(0x1ACB0390)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DECREMENTREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB0720)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DESTROY_OFFSET UNITYSDK_OFFSET(0x1ACB0850)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENDPOOLEXHAUSTEDPROCESS_OFFSET UNITYSDK_OFFSET(0x1ACB5F80)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1ACB6B60)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x1ACB6F30)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITBOOKLET_OFFSET UNITYSDK_OFFSET(0x1ACB6C00)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITCHARACTERDETAIL_OFFSET UNITYSDK_OFFSET(0x1ACB7030)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETALLINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1ACB6520)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETCHARACTERDETAILSHOWSECONDS_OFFSET UNITYSDK_OFFSET(0x1ACB7130)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETDEFAULTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB6360)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETMAXSTORYFINISHEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB71A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETPOOLSTORYCOUNTOFCHARACTER_OFFSET UNITYSDK_OFFSET(0x1ACB5FD0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETSORTEDINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1ACB65B0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ACTIVEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB5710)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANEXECUTEINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB5910)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANREMEMBER_OFFSET UNITYSDK_OFFSET(0x1ACB57E0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANSWITCHREVEALEDSTATE_OFFSET UNITYSDK_OFFSET(0x1ACB5790)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_EXECUTEDINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB5620)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0x1ACB56A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1ACB5640)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCANDESTROY_OFFSET UNITYSDK_OFFSET(0x1ACB07F0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCUSTOMIZATION_OFFSET UNITYSDK_OFFSET(0x1ACB5560)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFINALVERSION_OFFSET UNITYSDK_OFFSET(0x1ACB58C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1ACB5660)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISINPOOLEXHAUSTED_OFFSET UNITYSDK_OFFSET(0x1ACB5580)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISREVEALED_OFFSET UNITYSDK_OFFSET(0x1ACB5500)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_LASTINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB56C0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_POOLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB55D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_REPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB5680)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INCREMENTREFERENCECOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB04A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INIT_OFFSET UNITYSDK_OFFSET(0x1ACB0420)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0x1ACB6C50)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKREPLAYED_OFFSET UNITYSDK_OFFSET(0x1ACB6BB0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKSTORYFINISHED_OFFSET UNITYSDK_OFFSET(0x1ACB6CB0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_PLAYNOUSTALKPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1ACB5CF0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_RECORDINTERACTIONSELECTED_OFFSET UNITYSDK_OFFSET(0x1ACB6870)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_EXECUTEDINTERACTIONCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB5630)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASCOVERSHOWN_OFFSET UNITYSDK_OFFSET(0x1ACB56B0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1ACB5650)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISCUSTOMIZATION_OFFSET UNITYSDK_OFFSET(0x1ACB5570)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET UNITYSDK_OFFSET(0x1ACB5670)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_REPLAYCOUNT_OFFSET UNITYSDK_OFFSET(0x1ACB5690)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_STOPINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB64D0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SWITCHISSHOWREVEALED_OFFSET UNITYSDK_OFFSET(0x1ACB73A0)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_TRYPLAYINTERACTION_OFFSET UNITYSDK_OFFSET(0x1ACB6410)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_UNLOCKALLINTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1ACB6950)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__GETBGMSTATE_OFFSET UNITYSDK_OFFSET(0x1ACB7460)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__ONINTERACTIONHASEXECUTED_OFFSET UNITYSDK_OFFSET(0x1ACB7520)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STARTBGM_OFFSET UNITYSDK_OFFSET(0x1ACB5960)
#define RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STOPBGM_OFFSET UNITYSDK_OFFSET(0x1ACB5B50)

namespace RPG::Client
{
	inline static constexpr unsigned int TarotBookProcessContext_TypeDefinitionIndex = 70015;

	class TarotBookProcessContext : public ::System::Object
	{
	public:
		::System::String* _CurrentBGMState; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* _Interactions; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _HasFinishedStoryIDs; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* _ExhaustedPoolStories; // 0x28
		::RPG::Client::TarotBookModule* _Module; // 0x30
		::GFCJBHLLKBO* _InteractionPlayer; // 0x38
		::System::Boolean _IsCustomization_k__BackingField; // 0x40
		::System::Boolean _IsFixedOldBGMState; // 0x41
		::System::Boolean _HasEnteredBookletFromMainPage_k__BackingField; // 0x42
		::System::Byte _padding0[0x1];
		::System::UInt32 _ReplayCount_k__BackingField; // 0x44
		::System::UInt64 _ExitCharacterDetailMsTimeStamp; // 0x48
		::System::UInt64 _EnterCharacterDetailMsTimeStamp; // 0x50
		::System::UInt32 _ExecutedInteractionCount_k__BackingField; // 0x58
		::RPG::Client::TarotBookVersion _Version; // 0x5C
		::System::Boolean _HasCoverShown_k__BackingField; // 0x60
		::System::Boolean _IsInNousTalkPerformance; // 0x61
		::System::Boolean _IsShowRevealed; // 0x62
		::System::Boolean _IsFirstEnterBookletFromMainPage_k__BackingField; // 0x63
		::System::UInt32 _ReferenceCount; // 0x64
		::System::UInt64 _LastInteractionExecuteMsTimeStamp; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsRevealed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISREVEALED_OFFSET))(this);
		}

		::System::Boolean get_IsCustomization()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCUSTOMIZATION_OFFSET))(this);
		}

		::System::Void set_IsCustomization(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISCUSTOMIZATION_OFFSET))(this, a1);
		}

		::System::Boolean get_IsInPoolExhausted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISINPOOLEXHAUSTED_OFFSET))(this);
		}

		::System::Int32 get_PoolStoryCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_POOLSTORYCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsCanDestroy()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISCANDESTROY_OFFSET))(this);
		}

		::System::UInt32 get_ExecutedInteractionCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_EXECUTEDINTERACTIONCOUNT_OFFSET))(this);
		}

		::System::Void set_ExecutedInteractionCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_EXECUTEDINTERACTIONCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasEnteredBookletFromMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET))(this);
		}

		::System::Void set_HasEnteredBookletFromMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASENTEREDBOOKLETFROMMAINPAGE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsFirstEnterBookletFromMainPage()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET))(this);
		}

		::System::Void set_IsFirstEnterBookletFromMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_ISFIRSTENTERBOOKLETFROMMAINPAGE_OFFSET))(this, a1);
		}

		::System::UInt32 get_ReplayCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_REPLAYCOUNT_OFFSET))(this);
		}

		::System::Void set_ReplayCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_REPLAYCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_HasCoverShown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_HASCOVERSHOWN_OFFSET))(this);
		}

		::System::Void set_HasCoverShown(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SET_HASCOVERSHOWN_OFFSET))(this, a1);
		}

		::RPG::Client::TarotBookInteraction* get_LastInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_LASTINTERACTION_OFFSET))(this);
		}

		::RPG::Client::TarotBookInteraction* get_ActiveInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ACTIVEINTERACTION_OFFSET))(this);
		}

		::System::Boolean get_CanSwitchRevealedState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANSWITCHREVEALEDSTATE_OFFSET))(this);
		}

		::System::Boolean get_CanRemember()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANREMEMBER_OFFSET))(this);
		}

		::System::Boolean get_IsFinalVersion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_ISFINALVERSION_OFFSET))(this);
		}

		::System::Boolean get_CanExecuteInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GET_CANEXECUTEINTERACTION_OFFSET))(this);
		}

		::System::Void Init(::RPG::Client::TarotBookModule* a1, ::RPG::Client::TarotBookVersion a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookModule*, ::RPG::Client::TarotBookVersion))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DESTROY_OFFSET))(this);
		}

		::System::Void IncrementReferenceCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_INCREMENTREFERENCECOUNT_OFFSET))(this);
		}

		::System::Void DecrementReferenceCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_DECREMENTREFERENCECOUNT_OFFSET))(this);
		}

		::System::Void PlayNousTalkPerformance()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_PLAYNOUSTALKPERFORMANCE_OFFSET))(this);
		}

		::System::Void BeginPoolExhaustedProcess(::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::TarotBookStory*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_BEGINPOOLEXHAUSTEDPROCESS_OFFSET))(this, a1);
		}

		::System::Void EndPoolExhaustedProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENDPOOLEXHAUSTEDPROCESS_OFFSET))(this);
		}

		::System::Int32 GetPoolStoryCountOfCharacter(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETPOOLSTORYCOUNTOFCHARACTER_OFFSET))(this, a1);
		}

		::System::Boolean CheckCanSelectInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANSELECTINTERACTION_OFFSET))(this);
		}

		::System::Boolean CheckCanTriggerInteraction()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKCANTRIGGERINTERACTION_OFFSET))(this);
		}

		::RPG::Client::TarotBookInteraction* GetDefaultInteraction()
		{
			return ((::RPG::Client::TarotBookInteraction*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETDEFAULTINTERACTION_OFFSET))(this);
		}

		::System::Boolean TryPlayInteraction(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_TRYPLAYINTERACTION_OFFSET))(this, a1);
		}

		::System::Void StopInteraction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_STOPINTERACTION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* GetAllInteractions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETALLINTERACTIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>* GetSortedInteractions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::TarotBookInteraction*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETSORTEDINTERACTIONS_OFFSET))(this);
		}

		::System::Void RecordInteractionSelected(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_RECORDINTERACTIONSELECTED_OFFSET))(this, a1);
		}

		::System::Void UnlockAllInteractions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_UNLOCKALLINTERACTIONS_OFFSET))(this);
		}

		::System::Void EnterBookletFromMainPage(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERBOOKLETFROMMAINPAGE_OFFSET))(this, a1);
		}

		::System::Void MarkReplayed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKREPLAYED_OFFSET))(this);
		}

		::System::Void ExitBooklet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITBOOKLET_OFFSET))(this);
		}

		::System::Void MarkCoverShown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKCOVERSHOWN_OFFSET))(this);
		}

		::System::Void MarkStoryFinished(::RPG::Client::TarotBookStory* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookStory*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_MARKSTORYFINISHED_OFFSET))(this, a1);
		}

		::System::Void EnterCharacterDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_ENTERCHARACTERDETAIL_OFFSET))(this);
		}

		::System::Void ExitCharacterDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_EXITCHARACTERDETAIL_OFFSET))(this);
		}

		::System::UInt32 GetCharacterDetailShowSeconds()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETCHARACTERDETAILSHOWSECONDS_OFFSET))(this);
		}

		::System::UInt32 GetMaxStoryFinishedCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_GETMAXSTORYFINISHEDCOUNT_OFFSET))(this);
		}

		::System::Void SwitchIsShowRevealed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_SWITCHISSHOWREVEALED_OFFSET))(this);
		}

		::System::Boolean CheckHasNewMail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT_CHECKHASNEWMAIL_OFFSET))(this);
		}

		::System::String* _GetBGMState()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__GETBGMSTATE_OFFSET))(this);
		}

		::System::Void _StartBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STARTBGM_OFFSET))(this);
		}

		::System::Void _StopBGM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__STOPBGM_OFFSET))(this);
		}

		::System::Void _OnInteractionHasExecuted(::RPG::Client::TarotBookInteraction* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TarotBookInteraction*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TAROTBOOKPROCESSCONTEXT__ONINTERACTIONHASEXECUTED_OFFSET))(this, a1);
		}

	};
}
