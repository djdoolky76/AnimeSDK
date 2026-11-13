#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAKMBJPPIIB;
class IFOFLHFKMKB;
class LLELJOADLPI;
namespace RPG::Client { class RogueNousMainMissionDataItem; }
namespace RPG::Client { class RogueNousSubMissionDataItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUENOUSSTORYINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CB42DF0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CB411D0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETENDMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1CB42470)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETGENERALMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x1CB42570)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETMAINSTORYBYLAYER_OFFSET UNITYSDK_OFFSET(0x1CB42630)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETNEXTSUBSTORYIDS_OFFSET UNITYSDK_OFFSET(0x1CB42740)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GETSTARTMAINMISSIONDATA_OFFSET UNITYSDK_OFFSET(0x1CB42370)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLFINISHEDSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42C30)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLMAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42CD0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42D20)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSUBSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42C80)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x1CB42BD0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1CB42B90)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_METMAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42C10)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x1CB42BB0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1CB42B70)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_GET_UNLOCKEDSUBSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42BF0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1CB40560)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x1CB42BE0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1CB42BA0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_METMAINSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42C20)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONDICT_OFFSET UNITYSDK_OFFSET(0x1CB42BC0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1CB42B80)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SET_UNLOCKEDSUBSTORYCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB42C00)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_1_OFFSET UNITYSDK_OFFSET(0x1CB42030)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_2_OFFSET UNITYSDK_OFFSET(0x1CB42190)
#define RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_OFFSET UNITYSDK_OFFSET(0x1CB41370)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__GETGENERALMAINMISSIONS_B__7_0_OFFSET UNITYSDK_OFFSET(0x1CB42E00)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__INITMAINMISSIONS_OFFSET UNITYSDK_OFFSET(0x1CB40DF0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__INITSUBMISSIONS_OFFSET UNITYSDK_OFFSET(0x1CB405B0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__REFRESHUNLOCKEDCOUNT_OFFSET UNITYSDK_OFFSET(0x1CB41ED0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCMAINSTORIES_OFFSET UNITYSDK_OFFSET(0x1CB413E0)
#define RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCSUBSTORIES_OFFSET UNITYSDK_OFFSET(0x1CB41990)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueNousStoryInfo_TypeDefinitionIndex = 69428;

	class RogueNousStoryInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>* _MainMissionDict_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>* _SubMissionDict_k__BackingField; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>* _SubMissionList_k__BackingField; // 0x20
		::Il2CppArray<::System::UInt32>* _FirstLayerSubMissionIDs; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* _MainMissionList_k__BackingField; // 0x30
		::System::UInt32 _UnlockedSubStoryCount_k__BackingField; // 0x38
		::System::UInt32 _EndStoryGroupID; // 0x3C
		::System::UInt32 _StartStoryGroupID; // 0x40
		::System::UInt32 _MetMainStoryCount_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Sync(::LLELJOADLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLELJOADLPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::IFOFLHFKMKB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IFOFLHFKMKB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void Sync_2(::FAKMBJPPIIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAKMBJPPIIB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SYNC_2_OFFSET))(this, a1);
		}

		::RPG::Client::RogueNousMainMissionDataItem* GetStartMainMissionData()
		{
			return ((::RPG::Client::RogueNousMainMissionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETSTARTMAINMISSIONDATA_OFFSET))(this);
		}

		::RPG::Client::RogueNousMainMissionDataItem* GetEndMainMissionData()
		{
			return ((::RPG::Client::RogueNousMainMissionDataItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETENDMAINMISSIONDATA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* GetGeneralMainMissions()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETGENERALMAINMISSIONS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* GetMainStoryByLayer(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETMAINSTORYBYLAYER_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* GetNextSubStoryIDs(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GETNEXTSUBSTORYIDS_OFFSET))(this, a1);
		}

		::System::Void _InitSubMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__INITSUBMISSIONS_OFFSET))(this);
		}

		::System::Void _InitMainMissions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__INITMAINMISSIONS_OFFSET))(this);
		}

		::System::Void _SyncSubStories(::LLELJOADLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLELJOADLPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCSUBSTORIES_OFFSET))(this, a1);
		}

		::System::Void _SyncMainStories(::LLELJOADLPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLELJOADLPI*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__SYNCMAINSTORIES_OFFSET))(this, a1);
		}

		::System::Void _RefreshUnlockedCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__REFRESHUNLOCKEDCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>* get_SubMissionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONLIST_OFFSET))(this);
		}

		::System::Void set_SubMissionList(::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueNousSubMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* get_MainMissionList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONLIST_OFFSET))(this);
		}

		::System::Void set_MainMissionList(::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::RogueNousMainMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>* get_SubMissionDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_SUBMISSIONDICT_OFFSET))(this);
		}

		::System::Void set_SubMissionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousSubMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_SUBMISSIONDICT_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>* get_MainMissionDict()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_MAINMISSIONDICT_OFFSET))(this);
		}

		::System::Void set_MainMissionDict(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::RogueNousMainMissionDataItem*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_MAINMISSIONDICT_OFFSET))(this, a1);
		}

		::System::UInt32 get_UnlockedSubStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_UNLOCKEDSUBSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_UnlockedSubStoryCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_UNLOCKEDSUBSTORYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_MetMainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_METMAINSTORYCOUNT_OFFSET))(this);
		}

		::System::Void set_MetMainStoryCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_SET_METMAINSTORYCOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_AllFinishedStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLFINISHEDSTORYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllSubStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSUBSTORYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllMainStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLMAINSTORYCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AllStoryCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO_GET_ALLSTORYCOUNT_OFFSET))(this);
		}

		::System::Boolean _GetGeneralMainMissions_b__7_0(::RPG::Client::RogueNousMainMissionDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::RogueNousMainMissionDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUENOUSSTORYINFO__GETGENERALMAINMISSIONS_B__7_0_OFFSET))(this, a1);
		}

	};
}
