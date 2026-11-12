#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChooseDeliveryGroup; }
namespace RPG::Client { class ScheduleData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHOOSEDELIVERYENTRY_CTOR_OFFSET UNITYSDK_OFFSET(0xD4D1C10)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xD4D1BB0)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_GROUPS_OFFSET UNITYSDK_OFFSET(0xD4D1BD0)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD4D1BF0)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_ENTRYID_OFFSET UNITYSDK_OFFSET(0xD4D1BC0)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_GROUPS_OFFSET UNITYSDK_OFFSET(0xD4D1BE0)
#define RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_SCHEDULEDATA_OFFSET UNITYSDK_OFFSET(0xD4D1C00)

namespace RPG::Client
{
	inline static constexpr unsigned int ChooseDeliveryEntry_TypeDefinitionIndex = 64955;

	class ChooseDeliveryEntry : public ::System::Object
	{
	public:
		::RPG::Client::ScheduleData* _ScheduleData_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* _Groups_k__BackingField; // 0x18
		::System::UInt32 _EntryID_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_EntryID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_ENTRYID_OFFSET))(this);
		}

		::System::Void set_EntryID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_ENTRYID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* get_Groups()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_GROUPS_OFFSET))(this);
		}

		::System::Void set_Groups(::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::ChooseDeliveryGroup*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_GROUPS_OFFSET))(this, a1);
		}

		::RPG::Client::ScheduleData* get_ScheduleData()
		{
			return ((::RPG::Client::ScheduleData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_GET_SCHEDULEDATA_OFFSET))(this);
		}

		::System::Void set_ScheduleData(::RPG::Client::ScheduleData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ScheduleData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHOOSEDELIVERYENTRY_SET_SCHEDULEDATA_OFFSET))(this, a1);
		}

	};
}
