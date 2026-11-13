#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class OptionTalkInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_DIALOGUEMODULE_ADDMENUITEM_OFFSET UNITYSDK_OFFSET(0x1CB5B9F0)
#define RPG_CLIENT_DIALOGUEMODULE_ADDMISSIONMENUITEM_OFFSET UNITYSDK_OFFSET(0x1CB5BC10)
#define RPG_CLIENT_DIALOGUEMODULE_CLEARMENUITEMS_OFFSET UNITYSDK_OFFSET(0x1CB57990)
#define RPG_CLIENT_DIALOGUEMODULE_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB5DB00)
#define RPG_CLIENT_DIALOGUEMODULE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB5B630)
#define RPG_CLIENT_DIALOGUEMODULE_FINISHFIRSTPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1CB59590)
#define RPG_CLIENT_DIALOGUEMODULE_IFHASPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x1CB597A0)
#define RPG_CLIENT_DIALOGUEMODULE_INIT_OFFSET UNITYSDK_OFFSET(0x1CB5B3A0)
#define RPG_CLIENT_DIALOGUEMODULE_ISENTITYTALKENABLE_OFFSET UNITYSDK_OFFSET(0x1CB55670)
#define RPG_CLIENT_DIALOGUEMODULE_ISPERFORMANCETRIGGERED_OFFSET UNITYSDK_OFFSET(0x1CB59380)
#define RPG_CLIENT_DIALOGUEMODULE_ONRECONNECT_OFFSET UNITYSDK_OFFSET(0x1CB5B5C0)
#define RPG_CLIENT_DIALOGUEMODULE_PERFORMANCEDATAPROMISED_OFFSET UNITYSDK_OFFSET(0x1CB58FC0)
#define RPG_CLIENT_DIALOGUEMODULE_RECORDSEQUENCEDIALOGUE_OFFSET UNITYSDK_OFFSET(0x1CB5D270)
#define RPG_CLIENT_DIALOGUEMODULE_REMOVEMISSIONMENUITEM_OFFSET UNITYSDK_OFFSET(0x1CB5BE70)
#define RPG_CLIENT_DIALOGUEMODULE_SETENTITYTALKENABLE_OFFSET UNITYSDK_OFFSET(0x1CB5D630)
#define RPG_CLIENT_DIALOGUEMODULE_SHOWMENU_OFFSET UNITYSDK_OFFSET(0x1CB5BFD0)
#define RPG_CLIENT_DIALOGUEMODULE_UNINIT_OFFSET UNITYSDK_OFFSET(0x1CB5B3F0)
#define RPG_CLIENT_DIALOGUEMODULE__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CB5B680)
#define RPG_CLIENT_DIALOGUEMODULE__ADDPACKETHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CB5B860)
#define RPG_CLIENT_DIALOGUEMODULE__CONVERTMENUITEMTOOPTIONINFO_OFFSET UNITYSDK_OFFSET(0x1CB5D0C0)
#define RPG_CLIENT_DIALOGUEMODULE__IFMENUITEMEXTRAINFOCONDITIONPASS_OFFSET UNITYSDK_OFFSET(0x1CB5D7D0)
#define RPG_CLIENT_DIALOGUEMODULE__ISFORMULAUNLOCK_OFFSET UNITYSDK_OFFSET(0x1CB5B210)
#define RPG_CLIENT_DIALOGUEMODULE__ISMISSIONASSOCIATEWITHTRACKMISSION_OFFSET UNITYSDK_OFFSET(0x1CB5CE90)
#define RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEEND_OFFSET UNITYSDK_OFFSET(0x1CB5DA60)
#define RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEENTERED_OFFSET UNITYSDK_OFFSET(0x1CB59830)
#define RPG_CLIENT_DIALOGUEMODULE__ONCHOOSETALKOPTION_OFFSET UNITYSDK_OFFSET(0x1CB5D9B0)
#define RPG_CLIENT_DIALOGUEMODULE__ONFINISHFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB59880)
#define RPG_CLIENT_DIALOGUEMODULE__ONGETFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET UNITYSDK_OFFSET(0x1CB59A40)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSMENUITEMEXTRAINFO_OFFSET UNITYSDK_OFFSET(0x1CB5D740)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_OFFSET UNITYSDK_OFFSET(0x1CB59F60)
#define RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_RESENDTALKREWARD_OFFSET UNITYSDK_OFFSET(0x1CB5A030)
#define RPG_CLIENT_DIALOGUEMODULE__TRYGETPERFORMANCEDATAPROMISE_OFFSET UNITYSDK_OFFSET(0x1CB594F0)

namespace RPG::Client
{
	inline static constexpr unsigned int DialogueModule_TypeDefinitionIndex = 64992;

	class DialogueModule : public ::RPG::Client::BaseModule
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::Promises::IPromise*>* _PerformanceTempPromiseList; // 0x10
		::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>* _MenuItems; // 0x18
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceClientTriggered; // 0x20
		::System::Collections::Generic::List_1<::System::UInt32>* _PerformanceTempList; // 0x28
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*>* _MissionMenuItems; // 0x30
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::GameCore::AddMenuItem*>*>* _InterMenuItems; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::Promises::Promise*>* _PerformancePromises; // 0x40
		::System::Collections::Generic::List_1<::RPG::GameCore::OptionTalkInfo*>* _OptionInfos; // 0x48
		::System::Collections::Generic::List_1<::System::UInt32>* _ReissuePerformanceID; // 0x50
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Boolean>* _FirstPerformance; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* _SequenceDialogue; // 0x60
		::RPG::Client::TwoKeyDictionary_3<::System::UInt32, ::System::UInt32, ::System::Boolean>* _TalkDisable; // 0x68
		::RPG::GameCore::StringHash MenuItemPackSuccess; // 0x70
		::RPG::GameCore::StringHash MenuItemPackIndex; // 0x74
		// static const ::System::Object _ParallelDialogueMaxCount; // 0x0
		// static const ::System::Object _MaxSequence; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* PerformanceDataPromised(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_PERFORMANCEDATAPROMISED_OFFSET))(this, a1);
		}

		::System::Void FinishFirstPerformance(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_FINISHFIRSTPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean IfHasPerformance(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_IFHASPERFORMANCE_OFFSET))(this, a1);
		}

		::System::Boolean IsPerformanceTriggered(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ISPERFORMANCETRIGGERED_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEntered(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEENTERED_OFFSET))(this, a1);
		}

		::System::Void _OnFinishFirstTalkByPerformanceNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONFINISHFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Void _OnGetFirstTalkByPerformanceNpcScRsp(::System::UInt16 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONGETFIRSTTALKBYPERFORMANCENPCSCRSP_OFFSET))(this, a1, a2);
		}

		::System::Boolean _TryGetPerformanceDataPromise(::System::UInt32 a1, ::RPG::Client::Promises::IPromise* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::Promises::IPromise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__TRYGETPERFORMANCEDATAPROMISE_OFFSET))(this, a1, a2);
		}

		::System::Void _ProcessTalkEventReissue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_OFFSET))(this);
		}

		::System::Void _ProcessTalkEventReissue_ResendTalkReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSTALKEVENTREISSUE_RESENDTALKREWARD_OFFSET))(this);
		}

		::System::Boolean _IsFormulaUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ISFORMULAUNLOCK_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_INIT_OFFSET))(this);
		}

		::System::Void UnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_UNINIT_OFFSET))(this);
		}

		::System::Void OnReconnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ONRECONNECT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_DISPOSE_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _AddPacketHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ADDPACKETHANDLERS_OFFSET))(this);
		}

		::System::Void AddMenuItem(::RPG::GameCore::AddMenuItem* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ADDMENUITEM_OFFSET))(this, a1, a2);
		}

		::System::Void AddMissionMenuItem(::RPG::GameCore::AddMenuItem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ADDMISSIONMENUITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void RemoveMissionMenuItem(::RPG::GameCore::AddMenuItem* a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AddMenuItem*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_REMOVEMISSIONMENUITEM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ShowMenu(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_SHOWMENU_OFFSET))(this, a1, a2);
		}

		::System::Int32 RecordSequenceDialogue(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_RECORDSEQUENCEDIALOGUE_OFFSET))(this, a1, a2);
		}

		::System::Void SetEntityTalkEnable(::System::Boolean a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_SETENTITYTALKENABLE_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IsEntityTalkEnable(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_ISENTITYTALKENABLE_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::OptionTalkInfo* _ConvertMenuItemToOptionInfo(::RPG::GameCore::AddMenuItem* a1)
		{
			return ((::RPG::GameCore::OptionTalkInfo*(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__CONVERTMENUITEMTOOPTIONINFO_OFFSET))(this, a1);
		}

		::System::UInt32 _ProcessMenuItemExtraInfo(::RPG::GameCore::AddMenuItem* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__PROCESSMENUITEMEXTRAINFO_OFFSET))(this, a1);
		}

		::System::Boolean _IfMenuItemExtraInfoConditionPass(::RPG::GameCore::AddMenuItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__IFMENUITEMEXTRAINFOCONDITIONPASS_OFFSET))(this, a1);
		}

		::System::Boolean _IsMissionAssociateWithTrackMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ISMISSIONASSOCIATEWITHTRACKMISSION_OFFSET))(this, a1);
		}

		::System::Void _OnChooseTalkOption(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONCHOOSETALKOPTION_OFFSET))(this, a1);
		}

		::System::Void _OnAdventurePhaseEnd(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE__ONADVENTUREPHASEEND_OFFSET))(this, a1);
		}

		::System::Void ClearMenuItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DIALOGUEMODULE_CLEARMENUITEMS_OFFSET))(this);
		}

	};
}
