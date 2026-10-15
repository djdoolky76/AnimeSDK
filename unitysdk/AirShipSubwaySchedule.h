#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
class SubwayScheduleData;
class TimeSlotConfig;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AIRSHIPSUBWAYSCHEDULE_CTOR_OFFSET UNITYSDK_OFFSET(0x15BC4850)
#define AIRSHIPSUBWAYSCHEDULE_DOOJEACKCMB_OFFSET UNITYSDK_OFFSET(0x15BC4080)
#define AIRSHIPSUBWAYSCHEDULE_FDIGMPHOEJK_OFFSET UNITYSDK_OFFSET(0x15BC4490)
#define AIRSHIPSUBWAYSCHEDULE_FMPGGCANFFD_OFFSET UNITYSDK_OFFSET(0x15BC4800)
#define AIRSHIPSUBWAYSCHEDULE_MLKOLOKHIKO_OFFSET UNITYSDK_OFFSET(0x15BC4680)
#define AIRSHIPSUBWAYSCHEDULE_OHNAOCOEKKF_OFFSET UNITYSDK_OFFSET(0x15BC4700)

	class AirShipSubwaySchedule : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::SubwayScheduleData*>* SubwaySchedule; // 0x18
		::System::Int32 editor_Interval; // 0x20
		::System::Int32 editor_Offset; // 0x24
		::System::Int32 editor_Waitingtime; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* editor_TimeSlotConfigs; // 0x30
		// static const ::System::Object MinutesInDay; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_CTOR_OFFSET))(this);
		}

		::System::Void DOOJEACKCMB(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_DOOJEACKCMB_OFFSET))(this, a1, a2);
		}

		::TimeSlotConfig* FDIGMPHOEJK(::System::Int32 a1)
		{
			return ((::TimeSlotConfig*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_FDIGMPHOEJK_OFFSET))(this, a1);
		}

		::System::Boolean MLKOLOKHIKO(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_MLKOLOKHIKO_OFFSET))(this, a1, a2, a3);
		}

		static ::System::String* OHNAOCOEKKF(::System::Int32 a1)
		{
			return ((::System::String*(*)(::System::Int32))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_OHNAOCOEKKF_OFFSET))(a1);
		}

		::System::Void FMPGGCANFFD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIRSHIPSUBWAYSCHEDULE_FMPGGCANFFD_OFFSET))(this);
		}

	};
