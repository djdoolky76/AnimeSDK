#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/EventLogEntryType.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE_GET_CATEGORYID_OFFSET UNITYSDK_OFFSET(0x1D881460)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE_GET_ENTRYTYPE_OFFSET UNITYSDK_OFFSET(0x1D8814E0)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1D881560)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE_SET_CATEGORYID_OFFSET UNITYSDK_OFFSET(0x1D8814A0)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE_SET_ENTRYTYPE_OFFSET UNITYSDK_OFFSET(0x1D881520)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1D8815A0)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D881420)
#define SYSTEM_DIAGNOSTICS_EVENTINSTANCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8813E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventInstance_TypeDefinitionIndex = 4096;

	class EventInstance : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Int64 instanceId, ::System::Int32 categoryId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE__CTOR_OFFSET))(this, instanceId, categoryId);
		}

		::System::Void _ctor_1(::System::Int64 instanceId, ::System::Int32 categoryId, ::System::Diagnostics::EventLogEntryType entryType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int32, ::System::Diagnostics::EventLogEntryType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE__CTOR_1_OFFSET))(this, instanceId, categoryId, entryType);
		}

		::System::Int32 get_CategoryId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE_GET_CATEGORYID_OFFSET))(this);
		}

		::System::Void set_CategoryId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE_SET_CATEGORYID_OFFSET))(this, value);
		}

		::System::Diagnostics::EventLogEntryType get_EntryType()
		{
			return ((::System::Diagnostics::EventLogEntryType(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE_GET_ENTRYTYPE_OFFSET))(this);
		}

		::System::Void set_EntryType(::System::Diagnostics::EventLogEntryType value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogEntryType))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE_SET_ENTRYTYPE_OFFSET))(this, value);
		}

		::System::Int64 get_InstanceId()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::Int64 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTINSTANCE_SET_INSTANCEID_OFFSET))(this, value);
		}
	};
}
