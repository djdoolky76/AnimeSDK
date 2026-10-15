#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class TimeProvider; }

#define SYSTEM_TIMEPROVIDER_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE620)
#define SYSTEM_TIMEPROVIDER_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE610)
#define SYSTEM_TIMEPROVIDER_GET_SYSTEM_OFFSET UNITYSDK_OFFSET(0x1BBDE5B0)

namespace System
{
	inline static constexpr unsigned int TimeProvider_TypeDefinitionIndex = 10173;

	class TimeProvider : public ::System::Object
	{
	public:
		static ::System::TimeProvider** StaticGet__System_k__BackingField()
		{
			return (::System::TimeProvider**)UnitySDK::FromName("System", "TimeProvider")->GetStaticField(0x7D0);
		}

		static ::System::Int64* StaticGet_s_maxDateTicks()
		{
			return (::System::Int64*)UnitySDK::FromName("System", "TimeProvider")->GetStaticField(0x4B0);
		}

		static ::System::Int64* StaticGet_s_minDateTicks()
		{
			return (::System::Int64*)UnitySDK::FromName("System", "TimeProvider")->GetStaticField(0x4B8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER_CCTOR_OFFSET))();
		}

		static ::System::TimeProvider* get_System()
		{
			return ((::System::TimeProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMEPROVIDER_GET_SYSTEM_OFFSET))();
		}

	};
}
