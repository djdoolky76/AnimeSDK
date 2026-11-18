#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FIDJKBDDBDD.h"
#include "unitysdk/HNBABCBHNBE.h"
#include "unitysdk/JMKLPPGLKJJ.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NJAJNLNKDHF.h"
#include "unitysdk/OCCCFCPDBOO.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/ValueTuple_2.h"

class AIEGLDMFMMF;
class AIPBBLGJAHL;
class ALDOKCCIFNB;
class BPHGNMNLLHF;
class DBHOGGMBCFM;
class EGOPHPIBPJJ;
class IBPCDEKGHCJ;
class JLHODEDBDOD;
class LNPGKJKGLLE;
class MEKACGJBPGE;
class MLFNDKLHDIM;
class MOOPNOKFGDP;
class OIOMDBNBLLH;
class OOPNAPAIHOK;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class UILineupSelectContext_BeginBattleDel; }
namespace MoleMole { class UILineupSelectContext_CheckGoBattleDel; }
namespace MoleMole { class UILineupSelectContext_OnGetRoleSelectContextDel; }
namespace MoleMole { class UILineupSelectContext_OnSelectionChanged; }
namespace MoleMole { class UILineupSelectPageController; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET UNITYSDK_OFFSET(0x1795BFF0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1795C2B0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1795D7F0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1795D9F0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET UNITYSDK_OFFSET(0x1795C6D0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET UNITYSDK_OFFSET(0x1795DE50)
#define MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET UNITYSDK_OFFSET(0x1795DF60)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1795C140)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1795C580)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1795D7C0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1795D9C0)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1795DE20)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1795DF30)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1795C000)
#define MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__61_0_OFFSET UNITYSDK_OFFSET(0x1795E040)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupSelectContext_TypeDefinitionIndex = 81288;

	class UILineupSelectContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NJAJNLNKDHF battleTypeData; // 0x28
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0x40
		::System::Func_3<::OIOMDBNBLLH*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x48
		::System::Action_1<::MoleMole::QuickEditContext*>* SetQuickEditorContext; // 0x50
		::MoleMole::UILineupSelectContext_BeginBattleDel* onBeginBattle; // 0x58
		::MoleMole::UILineupSelectContext_CheckGoBattleDel* onCheckCanGoBattle; // 0x60
		::Il2CppArray<::System::Int32>* teams; // 0x68
		::System::Action_1<::System::Action*>* overrideBackAction; // 0x70
		::MoleMole::UILineupSelectContext_OnSelectionChanged* onSelectionChanged; // 0x78
		::System::Action_1<::System::Action*>* goButtonClickCallback; // 0x80
		::System::Action_1<::MoleMole::UILineupSelectPageController*>* overrideMainAction; // 0x88
		::System::String* buddyLockTipTextMapId; // 0x90
		::MoleMole::UILineupSelectContext_OnGetRoleSelectContextDel* onGetRoleSelectContext; // 0x98
		::System::Func_2<::System::Int32, ::System::String*>* GetDisableSelectHintKey; // 0xA0
		::EGOPHPIBPJJ* QuestCfg; // 0xA8
		::JLHODEDBDOD* HollowQuestLevelInfo; // 0xB0
		::System::Func_1<::System::Boolean>* getNoReward; // 0xB8
		::MOOPNOKFGDP* extraPresetsConfig; // 0xC0
		::System::Action_1<::System::Boolean>* setNoReward; // 0xC8
		::System::Action* onShowDetailInfo; // 0xD0
		::System::Func_2<::System::Int32, ::System::Boolean>* buddyLockCheckFunc; // 0xD8
		::System::Func_2<::System::Int32, ::System::Boolean>* OverrideCheckSlotClick; // 0xE0
		::OOPNAPAIHOK* onPostGetBuddySelectContext; // 0xE8
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* RobotList; // 0xF0
		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::OCCCFCPDBOO>>* slotTypes; // 0xF8
		::MLFNDKLHDIM* initSelections; // 0x100
		::System::Int32 AvatarUpgradeID; // 0x108
		::System::Boolean showPairUpInfo; // 0x10C
		::System::Boolean IsBanBackFlowRobot; // 0x10D
		::Share::EHollowQuestType hollowQuestType; // 0x10E
		::System::Int32 lockSlotCount; // 0x110
		::System::Int32 PreWarRemindID; // 0x114
		::System::Int32 roleSelectCount; // 0x118
		::JMKLPPGLKJJ rewardBuffTag; // 0x11C
		::System::Boolean IsHideManualQTE; // 0x120
		::System::Boolean freeSlot; // 0x121
		::System::Boolean allowSameName; // 0x122
		::System::Boolean IsBigScene; // 0x123
		::System::Int32 energyCost; // 0x124
		::System::Int32 recommendedLevel; // 0x128
		::System::Int32 avatarNeedCount; // 0x12C
		::System::Boolean isRobotBuddy; // 0x130
		::System::Boolean openBuddy; // 0x131
		::System::Boolean showMainQuestDifficultyToggle; // 0x132
		::System::Boolean banPreinstall; // 0x133
		::System::Int32 BigSceneTeamBuildingID; // 0x134
		::System::Int32 questSubTypeForRamen; // 0x138
		::System::Int32 currentMissionID; // 0x13C
		::FIDJKBDDBDD BuildBtnType; // 0x140
		::System::Int32 averageLevelTips; // 0x144
		::HNBABCBHNBE questType; // 0x148

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBPCDEKGHCJ* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::IBPCDEKGHCJ*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_1_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void _ctor_2(::LNPGKJKGLLE* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::LNPGKJKGLLE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_2_OFFSET))(this, questTemplate);
		}

		::System::Void _ctor_3(::AIEGLDMFMMF* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::AIEGLDMFMMF*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_3_OFFSET))(this, questTemp, fileID);
		}

		::System::Void _ctor_4(::MEKACGJBPGE* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::MEKACGJBPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_4_OFFSET))(this, questTemp);
		}

		::System::Void _ctor_5(::DBHOGGMBCFM* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::DBHOGGMBCFM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_5_OFFSET))(this, questTemp);
		}

		::System::Void _ctor_6(::AIPBBLGJAHL* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::AIPBBLGJAHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__CTOR_6_OFFSET))(this, questTemp);
		}

		::System::Boolean get_HasValidPresetsAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_GET_HASVALIDPRESETSAVATAR_OFFSET))(this);
		}

		::System::Void SetActivityBattleQuestContext(::IBPCDEKGHCJ* config, ::System::Int32 activityID, ::System::Collections::Generic::List_1<::System::Int32>* conditionList, ::System::Collections::Generic::List_1<::System::Int32>* effectList, ::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* selectedRoleIDList, ::Il2CppArray<::System::Int32>* selectedBuddyID)
		{
			return ((::System::Void(*)(::PVOID, ::IBPCDEKGHCJ*, ::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::BPHGNMNLLHF*>*, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETACTIVITYBATTLEQUESTCONTEXT_OFFSET))(this, config, activityID, conditionList, effectList, selectedRoleIDList, selectedBuddyID);
		}

		::System::Void SetLineupQuestBaseContext(::LNPGKJKGLLE* questTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::LNPGKJKGLLE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETLINEUPQUESTBASECONTEXT_OFFSET))(this, questTemplate);
		}

		::System::Void SetArchiveBattleQuestContext(::AIEGLDMFMMF* questTemp, ::System::Int32 fileID)
		{
			return ((::System::Void(*)(::PVOID, ::AIEGLDMFMMF*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETARCHIVEBATTLEQUESTCONTEXT_OFFSET))(this, questTemp, fileID);
		}

		::System::Void SetHollowQuestContext(::MEKACGJBPGE* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::MEKACGJBPGE*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETHOLLOWQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeQuestContext(::DBHOGGMBCFM* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::DBHOGGMBCFM*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPEQUESTCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Void SetMiniscapeTaskContext(::AIPBBLGJAHL* questTemp)
		{
			return ((::System::Void(*)(::PVOID, ::AIPBBLGJAHL*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT_SETMINISCAPETASKCONTEXT_OFFSET))(this, questTemp);
		}

		::System::Boolean _SetLineupQuestBaseContext_b__61_0(::ALDOKCCIFNB* data)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALDOKCCIFNB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPSELECTCONTEXT__SETLINEUPQUESTBASECONTEXT_B__61_0_OFFSET))(this, data);
		}
	};
}
