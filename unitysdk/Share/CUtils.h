#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DateTimeOffset.h"

#define SHARE_CUTILS_TOMILLITIMESTAMP_1_OFFSET UNITYSDK_OFFSET(0x1BF97FB0)
#define SHARE_CUTILS_TOMILLITIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BF97E50)
#define SHARE_CUTILS_TOTIMESTAMP_1_OFFSET UNITYSDK_OFFSET(0x1BF98000)
#define SHARE_CUTILS_TOTIMESTAMP_OFFSET UNITYSDK_OFFSET(0x1BF97F00)

namespace Share
{
	inline static constexpr unsigned int CUtils_TypeDefinitionIndex = 15014;

	class CUtils : public ::System::Object
	{
	public:
		static ::System::Int64 ToMilliTimestamp(::System::DateTimeOffset dt)
		{
			return ((::System::Int64(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SHARE_CUTILS_TOMILLITIMESTAMP_OFFSET))(dt);
		}

		static ::System::Int64 ToTimestamp(::System::DateTimeOffset dt)
		{
			return ((::System::Int64(*)(::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SHARE_CUTILS_TOTIMESTAMP_OFFSET))(dt);
		}

		static ::System::Int64 ToMilliTimestamp_1(::System::DateTime dt)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SHARE_CUTILS_TOMILLITIMESTAMP_1_OFFSET))(dt);
		}

		static ::System::Int64 ToTimestamp_1(::System::DateTime dt)
		{
			return ((::System::Int64(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SHARE_CUTILS_TOTIMESTAMP_1_OFFSET))(dt);
		}
	};
}
