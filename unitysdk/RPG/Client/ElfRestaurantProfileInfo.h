#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfProfileQuestGroupData; }
namespace RPG::Client { class QuestData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD799810)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD799C10)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_ALLRESIDENTREWARDQUESTS_OFFSET UNITYSDK_OFFSET(0xD79B390)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_PROFILEQUESTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xD79B370)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_SCOREITEMID_OFFSET UNITYSDK_OFFSET(0xD79BA80)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_TOTALSCOREITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xD79BAC0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASANYREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xD77AA40)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASCUMULATIVEREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xD79AB90)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASQUESTGROUPREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0xD79B1A0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_INIT_OFFSET UNITYSDK_OFFSET(0xD799820)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_ITERATECUMULATIVEREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0xD79A540)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_SET_PROFILEQUESTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xD79B380)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_VISITREWARDINGCUMULATIVEQUESTIDS_OFFSET UNITYSDK_OFFSET(0xD79A5E0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO__INITQUESTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0xD79A310)

namespace RPG::Client
{
	inline static constexpr unsigned int ElfRestaurantProfileInfo_TypeDefinitionIndex = 65156;

	class ElfRestaurantProfileInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::ElfProfileQuestGroupData*>* _ProfileQuestGroupDataList_k__BackingField; // 0x10
		// static const ::System::String* _AllQuestListKey; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void _InitQuestGroupDataList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO__INITQUESTGROUPDATALIST_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::UInt32>* IterateCumulativeRewardQuestIDs()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_ITERATECUMULATIVEREWARDQUESTIDS_OFFSET))(this);
		}

		::System::Void VisitRewardingCumulativeQuestIDs(::System::Action_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_VISITREWARDINGCUMULATIVEQUESTIDS_OFFSET))(this, a1);
		}

		::System::Boolean HasAnyRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASANYREWARDTOTAKE_OFFSET))(this);
		}

		::System::Boolean HasCumulativeRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASCUMULATIVEREWARDTOTAKE_OFFSET))(this);
		}

		::System::Boolean HasQuestGroupRewardToTake()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASQUESTGROUPREWARDTOTAKE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ElfProfileQuestGroupData*>* get_ProfileQuestGroupDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ElfProfileQuestGroupData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_PROFILEQUESTGROUPDATALIST_OFFSET))(this);
		}

		::System::Void set_ProfileQuestGroupDataList(::System::Collections::Generic::List_1<::RPG::Client::ElfProfileQuestGroupData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ElfProfileQuestGroupData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_SET_PROFILEQUESTGROUPDATALIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::QuestData*>* get_AllResidentRewardQuests()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::QuestData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_ALLRESIDENTREWARDQUESTS_OFFSET))(this);
		}

		static ::System::UInt32 get_ScoreItemID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_SCOREITEMID_OFFSET))();
		}

		static ::System::UInt32 get_TotalScoreItemCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_TOTALSCOREITEMCOUNT_OFFSET))();
		}

	};
}
