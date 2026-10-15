#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define TIMESLOTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E2310)
#define TIMESLOTCONFIG_GPJFDBAGLBK_OFFSET UNITYSDK_OFFSET(0xE9E2240)

	class TimeSlotConfig : public ::System::Object
	{
	public:
		::System::String* SlotName; // 0x10
		::System::Int32 StartTimeInMinutes; // 0x18
		::System::Int32 EndTimeInMinutes; // 0x1C
		::System::Collections::Generic::List_1<::System::Object*>* MemberTypeWeightConfigs; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* MemberAnimWeightConfigs; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESLOTCONFIG_CTOR_OFFSET))(this);
		}

		::System::String* GPJFDBAGLBK()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + TIMESLOTCONFIG_GPJFDBAGLBK_OFFSET))(this);
		}

	};
