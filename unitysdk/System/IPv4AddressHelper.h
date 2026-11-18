#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET UNITYSDK_OFFSET(0x1EC4F520)
#define SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1EC4F4F0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1EC4E940)
#define SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET UNITYSDK_OFFSET(0x1EC4F0B0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET UNITYSDK_OFFSET(0x1EC4EFB0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET UNITYSDK_OFFSET(0x1EC4F7E0)
#define SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x1EC4EF70)

namespace System
{
	inline static constexpr unsigned int IPv4AddressHelper_TypeDefinitionIndex = 2690;

	class IPv4AddressHelper : public ::System::Object
	{
	public:
		// static const ::System::Int64 Invalid = -0x1; // 0x0
		// static const ::System::Int64 MaxIPv4Value = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 Octal = 0x8; // 0x0
		// static const ::System::Int32 Decimal = 0xA; // 0x0
		// static const ::System::Int32 Hex = 0x10; // 0x0
		// static const ::System::Int32 NumberOfLabels = 0x4; // 0x0

		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& isLoopback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(str, start, end, isLoopback);
		}

		static ::System::Int32 ParseHostNumber(::System::String* str, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSEHOSTNUMBER_OFFSET))(str, start, end);
		}

		static ::System::Boolean IsValid(::PVOID name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean allowIPv6, ::System::Boolean notImplicitFile, ::System::Boolean unknownScheme)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALID_OFFSET))(name, start, end, allowIPv6, notImplicitFile, unknownScheme);
		}

		static ::System::Boolean IsValidCanonical(::PVOID name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean allowIPv6, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_ISVALIDCANONICAL_OFFSET))(name, start, end, allowIPv6, notImplicitFile);
		}

		static ::System::Int64 ParseNonCanonical(::PVOID name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean notImplicitFile)
		{
			return ((::System::Int64(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSENONCANONICAL_OFFSET))(name, start, end, notImplicitFile);
		}

		static ::System::Boolean Parse(::System::String* name, ::PVOID numbers, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSE_OFFSET))(name, numbers, start, end);
		}

		static ::System::Boolean ParseCanonical(::System::String* name, ::PVOID numbers, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_IPV4ADDRESSHELPER_PARSECANONICAL_OFFSET))(name, numbers, start, end);
		}
	};
}
