#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ResidentActivityState.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ResidentActivityPanelIndexKey.h"
class AKPCNJCFFCI;
class CLJFIFKJCCE;
class JEDNHJILJKL;
class PHOPKKBKAID;
namespace RPG::Client { class ActivityRewardCountData; }
namespace RPG::Client { class ActivityRewardItem; }
namespace RPG::Client { class ActivityTagData; }
namespace RPG::Client { class ScheduleData; }
namespace RPG::GameCore { class IntroDataRow; }
namespace RPG::GameCore { class RogueActivityResidentConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_COLLECTUNLOCKID_OFFSET UNITYSDK_OFFSET(0x1C84EA30)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C84F520)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x1C84EC30)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_BRIEFDESC_OFFSET UNITYSDK_OFFSET(0x1C84EC70)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_CURSTATE_OFFSET UNITYSDK_OFFSET(0x1C84F150)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_DISPLAYREWARDS_OFFSET UNITYSDK_OFFSET(0x1C84EFE0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_EXPECTEDPLAYINGHOURS_OFFSET UNITYSDK_OFFSET(0x1C84EED0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET UNITYSDK_OFFSET(0x1C84F0A0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C84F0E0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INDEXKEY_OFFSET UNITYSDK_OFFSET(0x1C84EBC0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROBUTTONTEXT_OFFSET UNITYSDK_OFFSET(0x1C84ECB0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTRODESC_OFFSET UNITYSDK_OFFSET(0x1C84EDC0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROTITLE_OFFSET UNITYSDK_OFFSET(0x1C84ED60)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_IPDESC_OFFSET UNITYSDK_OFFSET(0x1C84EC90)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ISSHOWREMAINTIME_OFFSET UNITYSDK_OFFSET(0x1C84F320)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LEFTCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x1C84EE20)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LISTITEMIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C84EC50)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET UNITYSDK_OFFSET(0x1C84F2D0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0x1C84F100)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SCHEDULE_OFFSET UNITYSDK_OFFSET(0x1C84F210)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C84F080)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x1C84EC10)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_TAGS_OFFSET UNITYSDK_OFFSET(0x1C84EF10)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET__DEBUGGERDISPLAY_OFFSET UNITYSDK_OFFSET(0x1C84F340)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SETPANELSEEN_OFFSET UNITYSDK_OFFSET(0x1C84EB80)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ACTIVITYNAME_OFFSET UNITYSDK_OFFSET(0x1C84EC40)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_BRIEFDESC_OFFSET UNITYSDK_OFFSET(0x1C84EC80)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_GAMEPLAYINTROIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C84F0F0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_IPDESC_OFFSET UNITYSDK_OFFSET(0x1C84ECA0)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ISSHOWREMAINTIME_OFFSET UNITYSDK_OFFSET(0x1C84F330)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_LISTITEMIMGPATH_OFFSET UNITYSDK_OFFSET(0x1C84EC60)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SORTWEIGHT_OFFSET UNITYSDK_OFFSET(0x1C84F090)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SUBMODE_OFFSET UNITYSDK_OFFSET(0x1C84EC20)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYINTROROW_OFFSET UNITYSDK_OFFSET(0x1C84E990)
#define RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYROW_OFFSET UNITYSDK_OFFSET(0x1C84E610)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueResidentActivityPanelData_TypeDefinitionIndex = 63186;

	class RogueResidentActivityPanelData : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::ActivityRewardItem*>* _SortedDisplayItemList; // 0x10
		::System::Collections::ObjectModel::ReadOnlyCollection_1<::RPG::Client::ActivityRewardItem*>* _SortedDisplayItemList_ReadOnly; // 0x18
		::System::String* _ListItemImgPath_k__BackingField; // 0x20
		::CLJFIFKJCCE* _ScheduleProxy; // 0x28
		::JEDNHJILJKL* _RewardCountProxy; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::ActivityTagData*>* _Tags; // 0x38
		::System::String* _GameplayIntroImgPath_k__BackingField; // 0x40
		::System::UInt32 _UnlockID; // 0x48
		::System::Boolean _IsShowRemainTime_k__BackingField; // 0x4C
		::System::Boolean _IsScheduled; // 0x4D
		::System::Boolean _HasLockCondition; // 0x4E
		::System::Byte _padding0[0x1];
		::System::UInt32 _ConfigID; // 0x50
		::System::UInt32 _SortWeight_k__BackingField; // 0x54
		::RPG::Client::TextID _IPDesc_k__BackingField; // 0x58
		::RPG::Client::TextID _IntroDesc; // 0x68
		::RPG::Client::TextID _IntroTitle; // 0x78
		::RPG::Client::TextID _BriefDesc_k__BackingField; // 0x88
		::RPG::GameCore::RogueSubMode _SubMode_k__BackingField; // 0x98
		::System::UInt32 _ActivityID; // 0x9C
		::RPG::Client::TextID _ActivityName_k__BackingField; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_CTOR_OFFSET))(this);
		}

		::System::Void _ConstructByRow(::RPG::GameCore::RogueActivityResidentConfigRow* a1, ::PHOPKKBKAID* a2, ::AKPCNJCFFCI* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueActivityResidentConfigRow*, ::PHOPKKBKAID*, ::AKPCNJCFFCI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYROW_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ConstructByIntroRow(::RPG::GameCore::IntroDataRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::IntroDataRow*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA__CONSTRUCTBYINTROROW_OFFSET))(this, a1);
		}

		::System::Void CollectUnlockID(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_COLLECTUNLOCKID_OFFSET))(this, a1);
		}

		::System::Void SetPanelSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SETPANELSEEN_OFFSET))(this);
		}

		::RPG::Client::ResidentActivityPanelIndexKey get_IndexKey()
		{
			return ((::RPG::Client::ResidentActivityPanelIndexKey(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INDEXKEY_OFFSET))(this);
		}

		::RPG::GameCore::RogueSubMode get_SubMode()
		{
			return ((::RPG::GameCore::RogueSubMode(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SUBMODE_OFFSET))(this);
		}

		::System::Void set_SubMode(::RPG::GameCore::RogueSubMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::RogueSubMode))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SUBMODE_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_ActivityName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ACTIVITYNAME_OFFSET))(this);
		}

		::System::Void set_ActivityName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ACTIVITYNAME_OFFSET))(this, a1);
		}

		::System::String* get_ListItemImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LISTITEMIMGPATH_OFFSET))(this);
		}

		::System::Void set_ListItemImgPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_LISTITEMIMGPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_BriefDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_BRIEFDESC_OFFSET))(this);
		}

		::System::Void set_BriefDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_BRIEFDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_IPDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_IPDESC_OFFSET))(this);
		}

		::System::Void set_IPDesc(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_IPDESC_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_IntroButtonText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROBUTTONTEXT_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroTitle()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTROTITLE_OFFSET))(this);
		}

		::RPG::Client::TextID get_IntroDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_INTRODESC_OFFSET))(this);
		}

		::RPG::Client::TextID get_LeftCountText()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LEFTCOUNTTEXT_OFFSET))(this);
		}

		::System::String* get_ExpectedPlayingHours()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_EXPECTEDPLAYINGHOURS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>* get_Tags()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityTagData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_TAGS_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityRewardItem*>* get_DisplayRewards()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::RPG::Client::ActivityRewardItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_DISPLAYREWARDS_OFFSET))(this);
		}

		::System::UInt32 get_SortWeight()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SORTWEIGHT_OFFSET))(this);
		}

		::System::Void set_SortWeight(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_SORTWEIGHT_OFFSET))(this, a1);
		}

		::System::UInt32 get_GameplayIntroGuideVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROGUIDEVIDEOID_OFFSET))(this);
		}

		::System::String* get_GameplayIntroImgPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_GAMEPLAYINTROIMGPATH_OFFSET))(this);
		}

		::System::Void set_GameplayIntroImgPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_GAMEPLAYINTROIMGPATH_OFFSET))(this, a1);
		}

		::RPG::Client::ActivityRewardCountData* get_RewardCount()
		{
			return ((::RPG::Client::ActivityRewardCountData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_REWARDCOUNT_OFFSET))(this);
		}

		::RPG::Client::ResidentActivityState get_CurState()
		{
			return ((::RPG::Client::ResidentActivityState(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_CURSTATE_OFFSET))(this);
		}

		::System::String* get_LockedReason()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_LOCKEDREASON_OFFSET))(this);
		}

		::RPG::Client::ScheduleData* get_Schedule()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_SCHEDULE_OFFSET))(this);
		}

		::System::Boolean get_IsShowRemainTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET_ISSHOWREMAINTIME_OFFSET))(this);
		}

		::System::Void set_IsShowRemainTime(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_SET_ISSHOWREMAINTIME_OFFSET))(this, a1);
		}

		::System::String* get__DebuggerDisplay()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUERESIDENTACTIVITYPANELDATA_GET__DEBUGGERDISPLAY_OFFSET))(this);
		}

	};
}
