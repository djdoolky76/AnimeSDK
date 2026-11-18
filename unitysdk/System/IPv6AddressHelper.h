#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"

namespace System { class String; }

#define SYSTEM_IPV6ADDRESSHELPER_CREATECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1DAE2360)
#define SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET UNITYSDK_OFFSET(0x1DAE3F30)
#define SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET UNITYSDK_OFFSET(0x1DAE4120)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET UNITYSDK_OFFSET(0x1DAE4470)
#define SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DAE4460)
#define SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1DAE1660)
#define SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET UNITYSDK_OFFSET(0x1DAE1790)
#define SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET UNITYSDK_OFFSET(0x1DAE40B0)

namespace System
{
	inline static constexpr unsigned int IPv6AddressHelper_TypeDefinitionIndex = 2691;

	class IPv6AddressHelper : public ::System::Object
	{
	public:
		// static const ::System::Int32 NumberOfLabels = 0x8; // 0x0
		// static const ::System::String* LegacyFormat; // 0x0
		// static const ::System::String* CanonicalNumberFormat; // 0x0
		// static const ::System::String* EmbeddedIPv4Format; // 0x0
		// static const ::System::String* Separator; // 0x0

		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Boolean& isLoopback, ::System::String*& scopeId)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSECANONICALNAME_OFFSET))(str, start, isLoopback, scopeId);
		}

		static ::System::String* CreateCanonicalName(::PVOID numbers)
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_CREATECANONICALNAME_OFFSET))(numbers);
		}

		static ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> FindCompressionRange(::PVOID numbers)
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_FINDCOMPRESSIONRANGE_OFFSET))(numbers);
		}

		static ::System::Boolean ShouldHaveIpv4Embedded(::PVOID numbers)
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_SHOULDHAVEIPV4EMBEDDED_OFFSET))(numbers);
		}

		static ::System::Boolean InternalIsValid(::PVOID name, ::System::Int32 start, ::System::Int32& end, ::System::Boolean validateStrictAddress)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_INTERNALISVALID_OFFSET))(name, start, end, validateStrictAddress);
		}

		static ::System::Boolean IsValid(::PVOID name, ::System::Int32 start, ::System::Int32& end)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALID_OFFSET))(name, start, end);
		}

		static ::System::Boolean IsValidStrict(::PVOID name, ::System::Int32 start, ::System::Int32& end)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_ISVALIDSTRICT_OFFSET))(name, start, end);
		}

		static ::System::Boolean Parse(::System::String* address, ::PVOID numbers, ::System::Int32 start, ::System::String*& scopeId)
		{
			return ((::System::Boolean(*)(::System::String*, ::PVOID, ::System::Int32, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_IPV6ADDRESSHELPER_PARSE_OFFSET))(address, numbers, start, scopeId);
		}
	};
}
