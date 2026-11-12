#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
namespace System::Diagnostics { class Stopwatch; }

#define SYSTEM_DIAGNOSTICS_STOPWATCH_CCTOR_OFFSET UNITYSDK_OFFSET(0x202BFCD0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_CTOR_OFFSET UNITYSDK_OFFSET(0x202BF7D0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GETTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x202BF710)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x202BFA40)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDTICKS_OFFSET UNITYSDK_OFFSET(0x202BF9D0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSED_OFFSET UNITYSDK_OFFSET(0x202BF850)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ISRUNNING_OFFSET UNITYSDK_OFFSET(0x202BFBC0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_RESET_OFFSET UNITYSDK_OFFSET(0x202BFBD0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_RESTART_OFFSET UNITYSDK_OFFSET(0x202BFC60)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_STARTNEW_OFFSET UNITYSDK_OFFSET(0x202BF750)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_START_OFFSET UNITYSDK_OFFSET(0x202BF7E0)
#define SYSTEM_DIAGNOSTICS_STOPWATCH_STOP_OFFSET UNITYSDK_OFFSET(0x202BFBE0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int Stopwatch_TypeDefinitionIndex = 2558;

	class Stopwatch : public ::System::Object
	{
	public:
		::System::Int64 elapsed; // 0x10
		::System::Int64 started; // 0x18
		::System::Boolean is_running; // 0x20
		static ::System::Boolean* StaticGet_IsHighResolution()
		{
			return (::System::Boolean*)UnitySDK::FromName("System.Diagnostics", "Stopwatch")->GetStaticField(0x6D50);
		}

		static ::System::Int64* StaticGet_Frequency()
		{
			return (::System::Int64*)UnitySDK::FromName("System.Diagnostics", "Stopwatch")->GetStaticField(0x6D58);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_CCTOR_OFFSET))();
		}

		static ::System::Int64 GetTimestamp()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GETTIMESTAMP_OFFSET))();
		}

		static ::System::Diagnostics::Stopwatch* StartNew()
		{
			return ((::System::Diagnostics::Stopwatch*(*)())((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_STARTNEW_OFFSET))();
		}

		::System::TimeSpan get_Elapsed()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSED_OFFSET))(this);
		}

		::System::Int64 get_ElapsedMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDMILLISECONDS_OFFSET))(this);
		}

		::System::Int64 get_ElapsedTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ELAPSEDTICKS_OFFSET))(this);
		}

		::System::Boolean get_IsRunning()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_GET_ISRUNNING_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_RESET_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_START_OFFSET))(this);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_STOP_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_STOPWATCH_RESTART_OFFSET))(this);
		}

	};
}
