#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ElfProfileQuestGroupData; }
namespace RPG::Client { class QuestData; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1AED2C50)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AED3050)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_ALLRESIDENTREWARDQUESTS_OFFSET UNITYSDK_OFFSET(0x1AED47D0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_PROFILEQUESTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1AED47B0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_SCOREITEMID_OFFSET UNITYSDK_OFFSET(0x1AED4EC0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_GET_TOTALSCOREITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1AED4F00)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASANYREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0x1AEB39E0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASCUMULATIVEREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0x1AED3FD0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_HASQUESTGROUPREWARDTOTAKE_OFFSET UNITYSDK_OFFSET(0x1AED45E0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_INIT_OFFSET UNITYSDK_OFFSET(0x1AED2C60)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_ITERATECUMULATIVEREWARDQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1AED3980)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_SET_PROFILEQUESTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1AED47C0)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO_VISITREWARDINGCUMULATIVEQUESTIDS_OFFSET UNITYSDK_OFFSET(0x1AED3A20)
#define RPG_CLIENT_ELFRESTAURANTPROFILEINFO__INITQUESTGROUPDATALIST_OFFSET UNITYSDK_OFFSET(0x1AED3750)

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
