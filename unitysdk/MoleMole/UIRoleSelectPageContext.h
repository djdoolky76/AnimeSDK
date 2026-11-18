#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGIIBOCADLI.h"
#include "unitysdk/BLEMFNFDGPD.h"
#include "unitysdk/DMKPJHFHLLM.h"
#include "unitysdk/FEBBKCIFPFA.h"
#include "unitysdk/FIDJKBDDBDD.h"
#include "unitysdk/HBBLCBAPCDB.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NLLAEGMBGNN.h"
#include "unitysdk/Share/EHollowQuestType.h"
#include "unitysdk/System/ValueTuple_2.h"

class BPHGNMNLLHF;
class EGOPHPIBPJJ;
class OIOMDBNBLLH;
namespace MoleMole { class UIRoleSelectPageContext_OnHandleRoleSelect; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x166CB480)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET UNITYSDK_OFFSET(0x166CC1F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET UNITYSDK_OFFSET(0x166CB3C0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x166CB610)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x166CB650)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x166CB630)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x166CB670)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x166CB5F0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x166CB5D0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x166CB690)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET UNITYSDK_OFFSET(0x166CB3B0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET UNITYSDK_OFFSET(0x166CC0A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET UNITYSDK_OFFSET(0x166CBF40)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET UNITYSDK_OFFSET(0x166CBDE0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET UNITYSDK_OFFSET(0x166CB420)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x166CBAE0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET UNITYSDK_OFFSET(0x166CB970)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET UNITYSDK_OFFSET(0x166CB800)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x166CB7B0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET UNITYSDK_OFFSET(0x166CBC70)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET UNITYSDK_OFFSET(0x166CB620)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET UNITYSDK_OFFSET(0x166CB660)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET UNITYSDK_OFFSET(0x166CB640)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET UNITYSDK_OFFSET(0x166CB680)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET UNITYSDK_OFFSET(0x166CB600)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET UNITYSDK_OFFSET(0x166CB5E0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET UNITYSDK_OFFSET(0x166CB6A0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x166CB730)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x166CB6B0)
#define MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET UNITYSDK_OFFSET(0x166CC240)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleSelectPageContext_TypeDefinitionIndex = 83581;

	class UIRoleSelectPageContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* multiSelectBtnKey; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>* _Selections_k__BackingField; // 0x30
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* showRobots; // 0x38
		::System::Func_4<::System::Int32, ::System::Int32, ::BPHGNMNLLHF*, ::System::String*>* CustomGetMultiIndexStr; // 0x40
		::Il2CppArray<::NLLAEGMBGNN>* sortTypes; // 0x48
		::System::Func_2<::BPHGNMNLLHF*, ::System::ValueTuple_2<::System::Int32, ::System::Int32>>* CustomGetOtherTeamSelectIndex; // 0x50
		::System::Collections::Generic::HashSet_1<::System::Int32>* blacklist; // 0x58
		::System::Func_2<::System::Int32, ::System::Boolean>* avatarLockCheckFunc; // 0x60
		::Il2CppArray<::NLLAEGMBGNN>* highPrioritySortTypes; // 0x68
		::Il2CppArray<::System::Int32>* _savedInitSelection; // 0x70
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* showAvatarList; // 0x78
		::System::Func_3<::OIOMDBNBLLH*, ::System::Action_1<::System::Boolean>*, ::System::Boolean>* _customSelectCheckHandle; // 0x80
		::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectHandle; // 0x88
		::System::Func_2<::System::Int32, ::System::String*>* _OnBlockClickHint_k__BackingField; // 0x90
		::System::Collections::Generic::List_1<::System::Int32>* unselectableList; // 0x98
		::System::Collections::Generic::HashSet_1<::System::Int32>* whitelist; // 0xA0
		::EGOPHPIBPJJ* QuestCfg; // 0xA8
		::System::Boolean checkReleaseTime; // 0xB0
		::System::Boolean IsFromQuickTeam; // 0xB1
		::System::Boolean strategyGuideNotPreview; // 0xB2
		::System::Boolean ForceClickEquip; // 0xB3
		::System::Boolean _FirstAsCaptain_k__BackingField; // 0xB4
		::System::Byte _padding0[0x3];
		::System::Int32 initSelectionAvatarID; // 0xB8
		::System::Boolean resetSorterIfNotFound; // 0xBC
		::System::Boolean ForceOpenWeaponRecommend; // 0xBD
		::System::Boolean allowSameName; // 0xBE
		::System::Boolean ForceClickMindscape; // 0xBF
		::System::UInt64 ForceSelectWeaponUid; // 0xC0
		::System::Int32 ForceSelectSkillType; // 0xC8
		::System::Int32 slotIndexInTeam; // 0xCC
		::System::Boolean MultiSelectDontShowNum; // 0xD0
		::System::Boolean showTrustDegreeBtn; // 0xD1
		::System::Boolean banBackFlowRobot; // 0xD2
		::System::Boolean _MultiSelectToggleDisabled_k__BackingField; // 0xD3
		::System::Int32 AvatarUpgradeID; // 0xD4
		::System::Int32 AutoTabIndex; // 0xD8
		::HBBLCBAPCDB customSelectReturnType; // 0xDC
		::System::Boolean IsBigScene; // 0xE0
		::System::Boolean IsAutoToRoleInfoWithBlack; // 0xE1
		::Share::EHollowQuestType HollowQuestType; // 0xE2
		::System::Boolean ForceOpenEquipRecommend; // 0xE4
		::System::Boolean IsForceShowOwnFilterSorter; // 0xE5
		::System::Boolean IsAutoToRoleInfoPage; // 0xE6
		::System::Boolean PlayEquipRecommendChoiceAnimation; // 0xE7
		::BLEMFNFDGPD _usage; // 0xE8
		::AGIIBOCADLI _SelectType_k__BackingField; // 0xEC
		::System::Int32 _OtherTeamIndex_k__BackingField; // 0xF0
		::FEBBKCIFPFA banSelfOwnedAvatarMode; // 0xF4
		::System::Int32 selectMaxCount; // 0xF8
		::System::Int32 _TeamSplitIndex_k__BackingField; // 0xFC
		::System::Boolean disableSubViewBtns; // 0x100
		::System::Boolean ForceClickWeapon; // 0x101
		::System::UInt16 _selectedIndex; // 0x102
		::FIDJKBDDBDD BuildBtnType; // 0x104

		::System::Void _ctor(::AGIIBOCADLI selectType)
		{
			return ((::System::Void(*)(::PVOID, ::AGIIBOCADLI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_OFFSET))(this, selectType);
		}

		::System::Void _ctor_1(::BLEMFNFDGPD usage, ::AGIIBOCADLI selectType)
		{
			return ((::System::Void(*)(::PVOID, ::BLEMFNFDGPD, ::AGIIBOCADLI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT__CTOR_1_OFFSET))(this, usage, selectType);
		}

		::BLEMFNFDGPD get_usage()
		{
			return ((::BLEMFNFDGPD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_USAGE_OFFSET))(this);
		}

		::System::Boolean get_collectNotOwnedAvatars()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_COLLECTNOTOWNEDAVATARS_OFFSET))(this);
		}

		::System::Void SetCustomReturnHandler(::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect* customSelectAction, ::HBBLCBAPCDB returnType)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIRoleSelectPageContext_OnHandleRoleSelect*, ::HBBLCBAPCDB))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCUSTOMRETURNHANDLER_OFFSET))(this, customSelectAction, returnType);
		}

		::System::Void ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_APPLYJUMPPARAS_OFFSET))(this);
		}

		::AGIIBOCADLI get_SelectType()
		{
			return ((::AGIIBOCADLI(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTTYPE_OFFSET))(this);
		}

		::System::Void set_SelectType(::AGIIBOCADLI value)
		{
			return ((::System::Void(*)(::PVOID, ::AGIIBOCADLI))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTTYPE_OFFSET))(this, value);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>* get_Selections()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_SELECTIONS_OFFSET))(this);
		}

		::System::Void set_Selections(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::ValueTuple_2<::DMKPJHFHLLM, ::System::UInt16>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_SELECTIONS_OFFSET))(this, value);
		}

		::System::Boolean get_FirstAsCaptain()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_FIRSTASCAPTAIN_OFFSET))(this);
		}

		::System::Void set_FirstAsCaptain(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_FIRSTASCAPTAIN_OFFSET))(this, value);
		}

		::System::Func_2<::System::Int32, ::System::String*>* get_OnBlockClickHint()
		{
			return ((::System::Func_2<::System::Int32, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_ONBLOCKCLICKHINT_OFFSET))(this);
		}

		::System::Void set_OnBlockClickHint(::System::Func_2<::System::Int32, ::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::String*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_ONBLOCKCLICKHINT_OFFSET))(this, value);
		}

		::System::Boolean get_MultiSelectToggleDisabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_MULTISELECTTOGGLEDISABLED_OFFSET))(this);
		}

		::System::Void set_MultiSelectToggleDisabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_MULTISELECTTOGGLEDISABLED_OFFSET))(this, value);
		}

		::System::Int32 get_OtherTeamIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_OTHERTEAMINDEX_OFFSET))(this);
		}

		::System::Void set_OtherTeamIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_OTHERTEAMINDEX_OFFSET))(this, value);
		}

		::System::Int32 get_TeamSplitIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_GET_TEAMSPLITINDEX_OFFSET))(this);
		}

		::System::Void set_TeamSplitIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SET_TEAMSPLITINDEX_OFFSET))(this, value);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectFirstAsCaptain(::System::Boolean firstAsCaptain)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTFIRSTASCAPTAIN_OFFSET))(this, firstAsCaptain);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelected(::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTED_OFFSET))(this, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectedUnselectable(::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDUNSELECTABLE_OFFSET))(this, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetMultiSelectedOtherTeam(::System::Int32 otherTeamIdx, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* multiSelected, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETMULTISELECTEDOTHERTEAM_OFFSET))(this, otherTeamIdx, multiSelected, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetPreemptibleOtherTeam(::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* avatarList, ::System::Int32 startIdx, ::System::Int32 count)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETPREEMPTIBLEOTHERTEAM_OFFSET))(this, avatarList, startIdx, count);
		}

		::MoleMole::UIRoleSelectPageContext* SetConfirmedSelections(::System::Collections::Generic::IReadOnlyList_1<::System::Int32>* multiSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_OFFSET))(this, multiSelected);
		}

		::MoleMole::UIRoleSelectPageContext* SetConfirmedSelections_1(::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* multiSelected)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETCONFIRMEDSELECTIONS_1_OFFSET))(this, multiSelected);
		}

		::MoleMole::UIRoleSelectPageContext* SetBlockSelections(::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>* multiSelected, ::System::Func_2<::System::Int32, ::System::String*>* onBlockClickHint, ::DMKPJHFHLLM additionFlags)
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::BPHGNMNLLHF*>*, ::System::Func_2<::System::Int32, ::System::String*>*, ::DMKPJHFHLLM))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_SETBLOCKSELECTIONS_OFFSET))(this, multiSelected, onBlockClickHint, additionFlags);
		}

		::MoleMole::UIRoleSelectPageContext* DisableMultiSelectToggle()
		{
			return ((::MoleMole::UIRoleSelectPageContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT_DISABLEMULTISELECTTOGGLE_OFFSET))(this);
		}

		::System::Void __base_ApplyJumpParas()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLESELECTPAGECONTEXT___BASE_APPLYJUMPPARAS_OFFSET))(this);
		}
	};
}
