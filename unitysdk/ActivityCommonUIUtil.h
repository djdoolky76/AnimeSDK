#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ActivityCommonUIUtil_HeadRowType.h"
#include "unitysdk/ActivityCommonUIUtil_LevelChallengeStyle.h"
#include "unitysdk/IEAOPOBDBBK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"

class CALIGLPABNP;
class FGOEJNLJPPM;
class KOIDMLPJGML;
class PDHGEKBAEBE;
namespace MoleMole { class UIActivitySelectLevelDoubleIconWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace MoleMole { class UIGeneralTipsPopWindowController; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define ACTIVITYCOMMONUIUTIL_CREATEACTIVITYFIGHTUILEVELGROUP_OFFSET UNITYSDK_OFFSET(0x18221730)
#define ACTIVITYCOMMONUIUTIL_CREATEHEADROW_OFFSET UNITYSDK_OFFSET(0x1821FA50)
#define ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE2_OFFSET UNITYSDK_OFFSET(0x1821F6A0)
#define ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE_OFFSET UNITYSDK_OFFSET(0x1821F4B0)
#define ACTIVITYCOMMONUIUTIL_CREATEQUESTREWARD_OFFSET UNITYSDK_OFFSET(0x1821F180)
#define ACTIVITYCOMMONUIUTIL_GETBIGSCENETEAMDATABINDDATAS_OFFSET UNITYSDK_OFFSET(0x182223F0)
#define ACTIVITYCOMMONUIUTIL_GETCHALLENGEFINISHCOUNT_OFFSET UNITYSDK_OFFSET(0x18220960)
#define ACTIVITYCOMMONUIUTIL_GETCHALLENGERESULTLEVELICON_OFFSET UNITYSDK_OFFSET(0x18220820)
#define ACTIVITYCOMMONUIUTIL_GETGROUPCHALLENGEPREVIEWREWARD_OFFSET UNITYSDK_OFFSET(0x18221AE0)
#define ACTIVITYCOMMONUIUTIL_GETGROUPMONSTERCONFIGS_OFFSET UNITYSDK_OFFSET(0x18221800)
#define ACTIVITYCOMMONUIUTIL_GETQUESTFIRSTREWARD_OFFSET UNITYSDK_OFFSET(0x1821EEC0)
#define ACTIVITYCOMMONUIUTIL_GETSELECTICONTYPE_OFFSET UNITYSDK_OFFSET(0x18220350)
#define ACTIVITYCOMMONUIUTIL_OPENGOAVATARACTIVITYSTORYINFOPOP_OFFSET UNITYSDK_OFFSET(0x18221030)
#define ACTIVITYCOMMONUIUTIL_OPENMAINBATTLEPARTNERINFOPOP_OFFSET UNITYSDK_OFFSET(0x18220B70)
#define ACTIVITYCOMMONUIUTIL_OPENSELECTICONWIDGET_DOUBLEICON_OFFSET UNITYSDK_OFFSET(0x1821F970)
#define ACTIVITYCOMMONUIUTIL_SHOWPERIODTIMETIPS_OFFSET UNITYSDK_OFFSET(0x182205D0)
#define ACTIVITYCOMMONUIUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x18222800)
#define ACTIVITYCOMMONUIUTIL__CTOR_OFFSET UNITYSDK_OFFSET(0x182227F0)

inline static constexpr unsigned int ActivityCommonUIUtil_TypeDefinitionIndex = 62551;

class ActivityCommonUIUtil : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_MaxAvatarTeamCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ActivityCommonUIUtil_TypeDefinitionIndex)->GetStaticField(0x132D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL__CCTOR_OFFSET))();
	}

	static ::System::Collections::Generic::List_1<::KOIDMLPJGML*>* GetQuestFirstReward(::System::Int32 quest)
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETQUESTFIRSTREWARD_OFFSET))(quest);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>* CreateQuestReward(::System::Int32 quest, ::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Boolean isShowNum)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIItemIconBtnSmallWidgetController*>*(*)(::System::Int32, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Boolean))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATEQUESTREWARD_OFFSET))(quest, parent, parentWidget, isShowNum);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* CreateLevelChallenge(::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Int32 QuestID, ::ActivityCommonUIUtil_LevelChallengeStyle style)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Int32, ::ActivityCommonUIUtil_LevelChallengeStyle))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE_OFFSET))(parent, parentWidget, QuestID, style);
	}

	static ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* CreateLevelChallenge2(::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Int32 QuestID, ::ActivityCommonUIUtil_LevelChallengeStyle style)
	{
		return ((::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*(*)(::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Int32, ::ActivityCommonUIUtil_LevelChallengeStyle))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATELEVELCHALLENGE2_OFFSET))(parent, parentWidget, QuestID, style);
	}

	static ::MoleMole::UIActivitySelectLevelDoubleIconWidgetController* OpenSelectIconWidget_DoubleIcon(::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Collections::Generic::List_1<::System::Int32>* ids)
	{
		return ((::MoleMole::UIActivitySelectLevelDoubleIconWidgetController*(*)(::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_OPENSELECTICONWIDGET_DOUBLEICON_OFFSET))(parent, parentWidget, ids);
	}

	static ::MoleMole::UIGeneralHeadRowWidgetController* CreateHeadRow(::IEAOPOBDBBK state, ::UnityEngine::Transform* parent, ::MoleMole::UIBaseController* parentWidget, ::System::Int32 id)
	{
		return ((::MoleMole::UIGeneralHeadRowWidgetController*(*)(::IEAOPOBDBBK, ::UnityEngine::Transform*, ::MoleMole::UIBaseController*, ::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATEHEADROW_OFFSET))(state, parent, parentWidget, id);
	}

	static ::MoleMole::UIGeneralTipsPopWindowController* ShowPeriodTimeTips(::System::Int32 activityID, ::System::Int32 periodID)
	{
		return ((::MoleMole::UIGeneralTipsPopWindowController*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_SHOWPERIODTIMETIPS_OFFSET))(activityID, periodID);
	}

	static ::ActivityCommonUIUtil_HeadRowType GetSelectIconType(::System::Int32 id)
	{
		return ((::ActivityCommonUIUtil_HeadRowType(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETSELECTICONTYPE_OFFSET))(id);
	}

	static ::Foundation::AssetPath GetChallengeResultLevelIcon(::System::Int32 questID)
	{
		return ((::Foundation::AssetPath(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETCHALLENGERESULTLEVELICON_OFFSET))(questID);
	}

	static ::System::Int32 GetChallengeFinishCount(::System::Int32 questID)
	{
		return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETCHALLENGEFINISHCOUNT_OFFSET))(questID);
	}

	static ::System::Void OpenMainBattlePartnerInfoPop(::System::Int32 questID)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_OPENMAINBATTLEPARTNERINFOPOP_OFFSET))(questID);
	}

	static ::System::Void OpenGoAvatarActivityStoryInfoPop(::System::Int32 entryQuestID)
	{
		return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_OPENGOAVATARACTIVITYSTORYINFOPOP_OFFSET))(entryQuestID);
	}

	static ::FGOEJNLJPPM* CreateActivityFightUILevelGroup(::System::Int32 groupID, ::System::Boolean isBigSceneLevel)
	{
		return ((::FGOEJNLJPPM*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_CREATEACTIVITYFIGHTUILEVELGROUP_OFFSET))(groupID, isBigSceneLevel);
	}

	static ::System::Collections::Generic::List_1<::CALIGLPABNP*>* GetGroupMonsterConfigs(::System::Int32 groupID)
	{
		return ((::System::Collections::Generic::List_1<::CALIGLPABNP*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETGROUPMONSTERCONFIGS_OFFSET))(groupID);
	}

	static ::System::Collections::Generic::List_1<::KOIDMLPJGML*>* GetGroupChallengePreviewReward(::System::Int32 groupChallengeID, ::System::Boolean isGet)
	{
		return ((::System::Collections::Generic::List_1<::KOIDMLPJGML*>*(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETGROUPCHALLENGEPREVIEWREWARD_OFFSET))(groupChallengeID, isGet);
	}

	static ::System::Collections::Generic::List_1<::PDHGEKBAEBE*>* GetBigSceneTeamDataBindDatas(::System::Action* onClick)
	{
		return ((::System::Collections::Generic::List_1<::PDHGEKBAEBE*>*(*)(::System::Action*))((::PBYTE)hIl2Cpp + ACTIVITYCOMMONUIUTIL_GETBIGSCENETEAMDATABINDDATAS_OFFSET))(onClick);
	}
};
