#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityHotTagType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BPGECKIMDKM.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Nullable_1.h"
class BOMPFHOMMBH;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityHotItemProgress; }
namespace RPG::Client { class ActivityPanelData; }
namespace RPG::Client { class ConditionChecker; }
namespace RPG::GameCore { class ActivityHotRow; }
namespace RPG::GameCore { class ActivityPanelRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYHOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCD80FA0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0xCD81590)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0xCD82520)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYID_OFFSET UNITYSDK_OFFSET(0xCD81DD0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYPANELIDOVERWRITE_OFFSET UNITYSDK_OFFSET(0xCD82690)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCD82FE0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDED_OFFSET UNITYSDK_OFFSET(0xCD82F20)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0xCD833C0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_FINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0xCD81C90)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_FIRSTITEMDES_OFFSET UNITYSDK_OFFSET(0xCD81F40)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0xCD82860)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_GOTOPARAMS_OFFSET UNITYSDK_OFFSET(0xCD828C0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_HAVESCHEDULE_OFFSET UNITYSDK_OFFSET(0xCD82F80)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0xCD81FB0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0xCD81D60)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0xCD82CA0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ISHAVEFINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0xCD82600)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0xCD82C40)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ISSHOWGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0xCD82A10)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0xCD81B30)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0xCD824A0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xCD823C0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_NOTBEGIN_OFFSET UNITYSDK_OFFSET(0xCD82EC0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_OVERRIDEREMAINTIMEDESC_OFFSET UNITYSDK_OFFSET(0xCD81E60)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_PANELDATAFORGOTO_OFFSET UNITYSDK_OFFSET(0xCD826E0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_REWARDDES_OFFSET UNITYSDK_OFFSET(0xCD81ED0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_SHOWREWARDITEMID_OFFSET UNITYSDK_OFFSET(0xCD81CE0)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0xCD82370)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0xCD81E20)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET__CANDIDATE_OFFSET UNITYSDK_OFFSET(0xCD83130)
#define RPG_CLIENT_ACTIVITYHOTDATA_GET__PANELROW_OFFSET UNITYSDK_OFFSET(0xCD82300)
#define RPG_CLIENT_ACTIVITYHOTDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0xCD81B70)
#define RPG_CLIENT_ACTIVITYHOTDATA_SYNCITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0xCD81000)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityHotData_TypeDefinitionIndex = 62918;

	class ActivityHotData : public ::System::Object
	{
	public:
		::RPG::Client::ConditionChecker* _FinishConditionChecker; // 0x10
		::RPG::GameCore::ActivityHotRow* _Row; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotItemProgress*>* _Items; // 0x20
		// static const ::System::Object _GotoActivityPageID; // 0x0
		::System::Void _ctor(::RPG::GameCore::ActivityHotRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ActivityHotRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_CTOR_OFFSET))(this, a1);
		}

		::System::Void SyncItemProgress(::System::Collections::Generic::IEnumerable_1<::BOMPFHOMMBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BOMPFHOMMBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_SYNCITEMPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 GetHCoinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GETHCOINCOUNT_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityHotItemProgress*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityHotItemProgress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::UInt32 get_ShowRewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_SHOWREWARDITEMID_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ID_OFFSET))(this);
		}

		::RPG::GameCore::ActivityHotTagType get_TagType()
		{
			return ((::RPG::GameCore::ActivityHotTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_TAGTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_OverrideRemainTimeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_OVERRIDEREMAINTIMEDESC_OFFSET))(this);
		}

		::System::UInt32 get_ActivityID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYID_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_REWARDDES_OFFSET))(this);
		}

		::RPG::Client::TextID get_FirstItemDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_FIRSTITEMDES_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Int32 get_SortWeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_NAMESTR_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get_ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYDATA_OFFSET))(this);
		}

		::System::Boolean get_IsHaveFinishConditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ISHAVEFINISHCONDITIONS_OFFSET))(this);
		}

		::Il2CppArray<::RPG::GameCore::ConditionParam*>* get_FinishConditions()
		{
			return ((::Il2CppArray<::RPG::GameCore::ConditionParam*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_FINISHCONDITIONS_OFFSET))(this);
		}

		::System::UInt32 get_ActivityPanelIDOverwrite()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ACTIVITYPANELIDOVERWRITE_OFFSET))(this);
		}

		::RPG::Client::ActivityPanelData* get_PanelDataForGoto()
		{
			return ((::RPG::Client::ActivityPanelData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_PANELDATAFORGOTO_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GotoParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_GOTOPARAMS_OFFSET))(this);
		}

		::System::Boolean get_IsShowGotoButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ISSHOWGOTOBUTTON_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_NotBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_NOTBEGIN_OFFSET))(this);
		}

		::System::Boolean get_Ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDED_OFFSET))(this);
		}

		::System::Boolean get_HaveSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_HAVESCHEDULE_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::Nullable_1<::BPGECKIMDKM> get__Candidate()
		{
			return ((::System::Nullable_1<::BPGECKIMDKM>(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET__CANDIDATE_OFFSET))(this);
		}

		::RPG::GameCore::ActivityPanelRow* get__PanelRow()
		{
			return ((::RPG::GameCore::ActivityPanelRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYHOTDATA_GET__PANELROW_OFFSET))(this);
		}

	};
}
