#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ActivityHotTagType.h"
#include "unitysdk/RPG/GameCore/ActivityHotVersionType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class BOMPFHOMMBH;
namespace RPG::Client { class ActivityData; }
namespace RPG::Client { class ActivityHotItemProgress; }
namespace RPG::Client { class ITimeRange; }
namespace RPG::GameCore { class ActivityHotVersionStatRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x18D0D9D0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GETHCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x18D0F040)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_BEGINTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D0FE00)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ENDED_OFFSET UNITYSDK_OFFSET(0x18D0FDA0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ENDTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x18D10050)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_FIRSTITEMDES_OFFSET UNITYSDK_OFFSET(0x18D102D0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_GOTOID_OFFSET UNITYSDK_OFFSET(0x18D0E990)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_GOTOPARAMS_OFFSET UNITYSDK_OFFSET(0x18D0F760)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x18D0E360)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x18D10180)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISFINISHED_OFFSET UNITYSDK_OFFSET(0x18D0FBA0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISHAVEFINISHCONDITIONS_OFFSET UNITYSDK_OFFSET(0x18D103D0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISINSCHEDULE_OFFSET UNITYSDK_OFFSET(0x18D0FB40)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISSHOWGOTOBUTTON_OFFSET UNITYSDK_OFFSET(0x18D0F8E0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ITEMS_OFFSET UNITYSDK_OFFSET(0x18D0F5E0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_NAMESTR_OFFSET UNITYSDK_OFFSET(0x18D0F620)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x18D0DDD0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_NOTBEGIN_OFFSET UNITYSDK_OFFSET(0x18D0FD40)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_OVERRIDEREMAINTIMEDESC_OFFSET UNITYSDK_OFFSET(0x18D10260)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_REWARDDES_OFFSET UNITYSDK_OFFSET(0x18D101F0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_SHOWREWARDITEMID_OFFSET UNITYSDK_OFFSET(0x18D10390)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x18D10340)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_TAGTYPE_OFFSET UNITYSDK_OFFSET(0x18D0F710)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_VERSIONTYPE_OFFSET UNITYSDK_OFFSET(0x18D101A0)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET__ACTIVITYDATA_OFFSET UNITYSDK_OFFSET(0x18D0F830)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET__ACTIVITYTIMERANGE_OFFSET UNITYSDK_OFFSET(0x18D0FF30)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET__PARAMLIST_OFFSET UNITYSDK_OFFSET(0x18D0EA90)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET UNITYSDK_OFFSET(0x18D10410)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_SET_ID_OFFSET UNITYSDK_OFFSET(0x18D10190)
#define RPG_CLIENT_ACTIVITYVERSIONHOTDATA_SYNCITEMPROGRESS_OFFSET UNITYSDK_OFFSET(0x18D0EAE0)

namespace RPG::Client
{
	inline static constexpr unsigned int ActivityVersionHotData_TypeDefinitionIndex = 62927;

	class ActivityVersionHotData : public ::System::Object
	{
	public:
		::RPG::GameCore::ActivityHotVersionStatRow* _Row; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ActivityHotItemProgress*>* _Items; // 0x18
		::System::UInt32 _ID_k__BackingField; // 0x20
		// static const ::System::Object _GotoActivityPageID; // 0x0
		::System::Void _ctor(::System::UInt32 a1, ::RPG::GameCore::ActivityHotVersionStatRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ActivityHotVersionStatRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void SyncItemProgress(::System::Collections::Generic::IEnumerable_1<::BOMPFHOMMBH*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::BOMPFHOMMBH*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_SYNCITEMPROGRESS_OFFSET))(this, a1);
		}

		::System::Int32 GetHCoinCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GETHCOINCOUNT_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_NameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_NAMESTR_OFFSET))(this);
		}

		::RPG::GameCore::ActivityHotTagType get_TagType()
		{
			return ((::RPG::GameCore::ActivityHotTagType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_TAGTYPE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::UInt32 get_GotoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_GOTOID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_GotoParams()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_GOTOPARAMS_OFFSET))(this);
		}

		::System::Boolean get_IsShowGotoButton()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISSHOWGOTOBUTTON_OFFSET))(this);
		}

		::System::Boolean get_IsInSchedule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISINSCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISFINISHED_OFFSET))(this);
		}

		::System::Boolean get_NotBegin()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_NOTBEGIN_OFFSET))(this);
		}

		::System::Boolean get_Ended()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ENDED_OFFSET))(this);
		}

		::System::Int64 get_BeginTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_BEGINTIMESTAMP_OFFSET))(this);
		}

		::System::Int64 get_EndTimeStamp()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ENDTIMESTAMP_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_SET_ID_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivityHotVersionType get_VersionType()
		{
			return ((::RPG::GameCore::ActivityHotVersionType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_VERSIONTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_RewardDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_REWARDDES_OFFSET))(this);
		}

		::RPG::Client::TextID get_OverrideRemainTimeDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_OVERRIDEREMAINTIMEDESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_FirstItemDes()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_FIRSTITEMDES_OFFSET))(this);
		}

		::System::Int32 get_SortWeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::UInt32 get_ShowRewardItemID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_SHOWREWARDITEMID_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityHotItemProgress*>* get_Items()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::ActivityHotItemProgress*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ITEMS_OFFSET))(this);
		}

		::System::Boolean get_IsHaveFinishConditions()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET_ISHAVEFINISHCONDITIONS_OFFSET))(this);
		}

		::System::Boolean IsFinishConditionsCompleted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_ISFINISHCONDITIONSCOMPLETED_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get__ParamList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET__PARAMLIST_OFFSET))(this);
		}

		::RPG::Client::ActivityData* get__ActivityData()
		{
			return ((::RPG::Client::ActivityData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET__ACTIVITYDATA_OFFSET))(this);
		}

		::RPG::Client::ITimeRange* get__ActivityTimeRange()
		{
			return ((::RPG::Client::ITimeRange*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ACTIVITYVERSIONHOTDATA_GET__ACTIVITYTIMERANGE_OFFSET))(this);
		}

	};
}
