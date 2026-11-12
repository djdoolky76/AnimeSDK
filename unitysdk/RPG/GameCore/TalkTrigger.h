#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDLDHDMLJDH.h"
#include "unitysdk/RPG/Client/DialoguePhase.h"
#include "unitysdk/RPG/Client/DialogueType.h"
#include "unitysdk/RPG/GameCore/DialogueUtil_TalkSourceType.h"
#include "unitysdk/RPG/GameCore/TalkChosenType.h"
#include "unitysdk/RPG/GameCore/TriggerExitReason.h"
#include "unitysdk/RPG/GameCore/TalkTrigger_DialogueGroupInfo.h"
#include "unitysdk/System/ValueTuple_2.h"
namespace RPG::GameCore { class FetchAdvNPCData; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelGroupMissionConditionSet; }
namespace RPG::GameCore { class TalkTrigger_ShowTalkBtnParam; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_TALKTRIGGER_CHECKDIALOGUECONDITIONS_OFFSET UNITYSDK_OFFSET(0xF282BE0)
#define RPG_GAMECORE_TALKTRIGGER_CHECKLOCALPLAYERCANINTERACT_OFFSET UNITYSDK_OFFSET(0xF2836C0)
#define RPG_GAMECORE_TALKTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0xF281380)
#define RPG_GAMECORE_TALKTRIGGER_DELAYDIALOGUE_OFFSET UNITYSDK_OFFSET(0xF2825A0)
#define RPG_GAMECORE_TALKTRIGGER_DOONENTER_OFFSET UNITYSDK_OFFSET(0xF282340)
#define RPG_GAMECORE_TALKTRIGGER_DOONEXIT_OFFSET UNITYSDK_OFFSET(0xF2825F0)
#define RPG_GAMECORE_TALKTRIGGER_DOONTICK_OFFSET UNITYSDK_OFFSET(0xF282900)
#define RPG_GAMECORE_TALKTRIGGER_ENDDIALOGUE_OFFSET UNITYSDK_OFFSET(0xF282BA0)
#define RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEGRAPH_OFFSET UNITYSDK_OFFSET(0xF283840)
#define RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEPARAM_OFFSET UNITYSDK_OFFSET(0xF283890)
#define RPG_GAMECORE_TALKTRIGGER_GET_ENABLEDIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0xF283860)
#define RPG_GAMECORE_TALKTRIGGER_GET_OWNER_OFFSET UNITYSDK_OFFSET(0xF283880)
#define RPG_GAMECORE_TALKTRIGGER_SETTARGETFAKEAVATAR_OFFSET UNITYSDK_OFFSET(0xF283740)
#define RPG_GAMECORE_TALKTRIGGER_SET_DIALOGUEGRAPH_OFFSET UNITYSDK_OFFSET(0xF283850)
#define RPG_GAMECORE_TALKTRIGGER_SET_ENABLEDIALOGCAMERA_OFFSET UNITYSDK_OFFSET(0xF283870)
#define RPG_GAMECORE_TALKTRIGGER_STARTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xF282AF0)
#define RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUEFIRSTPHASE_OFFSET UNITYSDK_OFFSET(0xF283390)
#define RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUESECONDPHASE_OFFSET UNITYSDK_OFFSET(0xF283590)
#define RPG_GAMECORE_TALKTRIGGER_UPDATECONDITIONDATA_OFFSET UNITYSDK_OFFSET(0xF283600)
#define RPG_GAMECORE_TALKTRIGGER__CHECKDIALOGUEBYGROUPID_OFFSET UNITYSDK_OFFSET(0xF281280)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERANGLE_OFFSET UNITYSDK_OFFSET(0xF282EC0)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERHEIGHT_OFFSET UNITYSDK_OFFSET(0xF283790)
#define RPG_GAMECORE_TALKTRIGGER__CHECKIFISBLOCKEDBYCUSTOMTRIGGER_OFFSET UNITYSDK_OFFSET(0xF283200)
#define RPG_GAMECORE_TALKTRIGGER__CHECKROGUEDIALOGUE_OFFSET UNITYSDK_OFFSET(0xF283150)
#define RPG_GAMECORE_TALKTRIGGER__GETCURCHINWAGDIALOGUE_OFFSET UNITYSDK_OFFSET(0xF2804C0)
#define RPG_GAMECORE_TALKTRIGGER__GETFIRSTDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xF280BE0)
#define RPG_GAMECORE_TALKTRIGGER__GETMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xF27FE90)
#define RPG_GAMECORE_TALKTRIGGER__GETSHOWNMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xF280660)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKBTNPARAM_OFFSET UNITYSDK_OFFSET(0xF2834C0)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKCHOSENTYPE_OFFSET UNITYSDK_OFFSET(0xF280F70)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEIDLIST_OFFSET UNITYSDK_OFFSET(0xF281080)
#define RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEID_OFFSET UNITYSDK_OFFSET(0xF280CF0)
#define RPG_GAMECORE_TALKTRIGGER__HASCONFIG_OFFSET UNITYSDK_OFFSET(0xF280B10)
#define RPG_GAMECORE_TALKTRIGGER__INITDIALOGUETYPE_OFFSET UNITYSDK_OFFSET(0xF281690)
#define RPG_GAMECORE_TALKTRIGGER__INITIALIZEDIALOGUEGROUPPOOL_OFFSET UNITYSDK_OFFSET(0xF27FE10)
#define RPG_GAMECORE_TALKTRIGGER__ISDIALOGUEASSOCIATEWITHTRACKINGMISSION_OFFSET UNITYSDK_OFFSET(0xF2808A0)
#define RPG_GAMECORE_TALKTRIGGER__RETARGETREPEATEDRANDOMVALUE_OFFSET UNITYSDK_OFFSET(0xF281190)
#define RPG_GAMECORE_TALKTRIGGER__SORTDIALOGUE_OFFSET UNITYSDK_OFFSET(0xF281310)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDAILYDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xF280120)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xF280090)
#define RPG_GAMECORE_TALKTRIGGER__TRYUPDATEMISSIONDIALOGUEGROUPS_OFFSET UNITYSDK_OFFSET(0xF280250)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TalkTrigger_TypeDefinitionIndex = 58759;

	class TalkTrigger : public ::EDLDHDMLJDH
	{
	public:
		::System::String* _DialogueGraph_k__BackingField; // 0xA0
		::RPG::GameCore::LevelGroupMissionConditionSet* _ConditionSet; // 0xA8
		::Il2CppArray<::System::UInt32>* _MissionDialogueGroups; // 0xB0
		::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* _ShowTalkBtnParam; // 0xB8
		::System::Single DialogueTriggerAngle; // 0xC0
		::System::Boolean _EnableDialogCamera_k__BackingField; // 0xC4
		::System::Byte _padding0[0x3];
		::System::Single _dialogueCDConfig; // 0xC8
		::RPG::Client::DialogueType DialogueType; // 0xCC
		::System::Single _dialogueCD; // 0xD0
		::RPG::GameCore::DialogueUtil_TalkSourceType _TalkSourceType; // 0xD4
		// static const ::System::Object INVALID_ID; // 0x0
		// static const ::System::Object _ParallelDialogueMaxCount; // 0x0
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CTOR_OFFSET))(this, a1);
		}

		::System::Void _InitializeDialogueGroupPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__INITIALIZEDIALOGUEGROUPPOOL_OFFSET))(this);
		}

		::RPG::Client::DialoguePhase _TryUpdateDialogueGroups(::System::Object* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDIALOGUEGROUPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryUpdateDailyDialogueGroups(::System::Object* a1, ::System::UInt32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEDAILYDIALOGUEGROUPS_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean _TryUpdateMissionDialogueGroups(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__TRYUPDATEMISSIONDIALOGUEGROUPS_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TalkTrigger_DialogueGroupInfo _GetCurChinwagDialogue(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::TalkTrigger_DialogueGroupInfo(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETCURCHINWAGDIALOGUE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Object*>>* _GetShownMissionDialogueGroups()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::UInt32, ::System::Object*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETSHOWNMISSIONDIALOGUEGROUPS_OFFSET))(this);
		}

		::System::Boolean _IsDialogueAssociateWithTrackingMission(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__ISDIALOGUEASSOCIATEWITHTRACKINGMISSION_OFFSET))(this, a1);
		}

		::System::Int32 _SortDialogue(::System::ValueTuple_2<::System::UInt32, ::System::Object*> a1, ::System::ValueTuple_2<::System::UInt32, ::System::Object*> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::ValueTuple_2<::System::UInt32, ::System::Object*>, ::System::ValueTuple_2<::System::UInt32, ::System::Object*>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__SORTDIALOGUE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _HasConfig(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__HASCONFIG_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetMissionDialogueGroups()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETMISSIONDIALOGUEGROUPS_OFFSET))(this);
		}

		::System::Void _RetargetRepeatedRandomValue(::System::UInt32 a1, ::Il2CppArray<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__RETARGETREPEATEDRANDOMVALUE_OFFSET))(this, a1, a2);
		}

		::System::UInt32 _GetFirstDialogueID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETFIRSTDIALOGUEID_OFFSET))(this, a1);
		}

		::RPG::GameCore::TalkChosenType _GetTalkChosenType(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::TalkChosenType(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKCHOSENTYPE_OFFSET))(this, a1);
		}

		::System::UInt32 _GetTalkDialogueID(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* _GetTalkDialogueIDList(::RPG::GameCore::GameEntity* a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKDIALOGUEIDLIST_OFFSET))(this, a1);
		}

		::System::Void DoOnEnter(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONENTER_OFFSET))(this, a1);
		}

		::System::Void DoOnExit(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TriggerExitReason a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TriggerExitReason))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONEXIT_OFFSET))(this, a1, a2);
		}

		::System::Void DoOnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DOONTICK_OFFSET))(this, a1);
		}

		::System::Void StartDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_STARTDIALOGUE_OFFSET))(this);
		}

		::System::Void DelayDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_DELAYDIALOGUE_OFFSET))(this);
		}

		::System::Void EndDialogue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_ENDDIALOGUE_OFFSET))(this);
		}

		::System::Boolean CheckDialogueConditions(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CHECKDIALOGUECONDITIONS_OFFSET))(this, a1);
		}

		::RPG::Client::DialoguePhase UpdataDialogueFirstPhase(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUEFIRSTPHASE_OFFSET))(this, a1);
		}

		::System::Boolean UpdataDialogueSecondPhase()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATADIALOGUESECONDPHASE_OFFSET))(this);
		}

		::System::Void UpdateConditionData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_UPDATECONDITIONDATA_OFFSET))(this);
		}

		::System::Boolean CheckLocalPlayerCanInteract()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_CHECKLOCALPLAYERCANINTERACT_OFFSET))(this);
		}

		::System::Void SetTargetFakeAvatar(::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::FetchAdvNPCData*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SETTARGETFAKEAVATAR_OFFSET))(this, a1);
		}

		::System::Boolean _CheckIfInTriggerHeight(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERHEIGHT_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckIfInTriggerAngle(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFINTRIGGERANGLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean _CheckIfIsBlockedByCustomTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKIFISBLOCKEDBYCUSTOMTRIGGER_OFFSET))(this);
		}

		::System::Boolean _CheckRogueDialogue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKROGUEDIALOGUE_OFFSET))(this);
		}

		::RPG::Client::DialoguePhase _GetTalkBtnParam(::System::UInt32 a1)
		{
			return ((::RPG::Client::DialoguePhase(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__GETTALKBTNPARAM_OFFSET))(this, a1);
		}

		::System::ValueTuple_2<::System::Boolean, ::System::UInt32> _CheckDialogueByGroupID(::System::UInt32 a1)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::System::UInt32>(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__CHECKDIALOGUEBYGROUPID_OFFSET))(this, a1);
		}

		::System::Void _InitDialogueType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER__INITDIALOGUETYPE_OFFSET))(this);
		}

		::System::String* get_DialogueGraph()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEGRAPH_OFFSET))(this);
		}

		::System::Void set_DialogueGraph(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SET_DIALOGUEGRAPH_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableDialogCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_ENABLEDIALOGCAMERA_OFFSET))(this);
		}

		::System::Void set_EnableDialogCamera(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_SET_ENABLEDIALOGCAMERA_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* get_Owner()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_OWNER_OFFSET))(this);
		}

		::RPG::GameCore::TalkTrigger_ShowTalkBtnParam* get_DialogueParam()
		{
			return ((::RPG::GameCore::TalkTrigger_ShowTalkBtnParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TALKTRIGGER_GET_DIALOGUEPARAM_OFFSET))(this);
		}

	};
}
