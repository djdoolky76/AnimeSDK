#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseRedDotFilter.h"
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_CTOR_OFFSET UNITYSDK_OFFSET(0xE9C1A90)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9C1420)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0xE9C1A50)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLETABIDS_OFFSET UNITYSDK_OFFSET(0xE9C1A70)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_INIT_OFFSET UNITYSDK_OFFSET(0xE9C1310)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLEIDS_OFFSET UNITYSDK_OFFSET(0xE9C1A60)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLETABIDS_OFFSET UNITYSDK_OFFSET(0xE9C1A80)
#define RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_UPDATEREDDOTS_OFFSET UNITYSDK_OFFSET(0xE9C1500)

namespace RPG::Client
{
	inline static constexpr unsigned int RogueHandbookEventRedDotFilter_TypeDefinitionIndex = 68785;

	class RogueHandbookEventRedDotFilter : public ::RPG::Client::BaseRedDotFilter
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _EventRewardAvailableIDs_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::UInt32>* _EventRewardAvailableTabIDs_k__BackingField; // 0x18
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _UniqueEventRewardAvailableTabIDs; // 0x20
		// static const ::System::Object _AllTabID; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_CTOR_OFFSET))(this);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_INIT_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_DISPOSE_OFFSET))(this);
		}

		::System::Void UpdateRedDots()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_UPDATEREDDOTS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EventRewardAvailableIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLEIDS_OFFSET))(this);
		}

		::System::Void set_EventRewardAvailableIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLEIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_EventRewardAvailableTabIDs()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_GET_EVENTREWARDAVAILABLETABIDS_OFFSET))(this);
		}

		::System::Void set_EventRewardAvailableTabIDs(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROGUEHANDBOOKEVENTREDDOTFILTER_SET_EVENTREWARDAVAILABLETABIDS_OFFSET))(this, a1);
		}

	};
}
