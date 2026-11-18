#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1DF29850)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_2_OFFSET UNITYSDK_OFFSET(0x1DF29B50)
#define SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1DF29810)
#define SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET UNITYSDK_OFFSET(0x1DF295C0)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET UNITYSDK_OFFSET(0x1DF29D70)
#define SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET UNITYSDK_OFFSET(0x1DF29DA0)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET UNITYSDK_OFFSET(0x1DF29630)
#define SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET UNITYSDK_OFFSET(0x1DF295F0)
#define SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1DF29440)
#define SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET UNITYSDK_OFFSET(0x1DF29230)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET UNITYSDK_OFFSET(0x1DF2A010)
#define SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET UNITYSDK_OFFSET(0x1DF29ED0)
#define SYSTEM_DOMAINNAMEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF29220)

namespace System
{
	inline static constexpr unsigned int DomainNameHelper_TypeDefinitionIndex = 2689;

	class DomainNameHelper : public ::System::Object
	{
	public:
		// static const ::System::Char c_DummyChar = 0xFFFF; // 0x0
		// static const ::System::String* Localhost; // 0x0
		// static const ::System::String* Loopback; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER__CTOR_OFFSET))(this);
		}

		static ::System::String* ParseCanonicalName(::System::String* str, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& loopback)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_PARSECANONICALNAME_OFFSET))(str, start, end, loopback);
		}

		static ::System::Boolean IsValid(::PVOID name, ::System::UInt16 pos, ::System::Int32& returnedEnd, ::System::Boolean& notCanonical, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALID_OFFSET))(name, pos, returnedEnd, notCanonical, notImplicitFile);
		}

		static ::System::Boolean IsValidByIri(::PVOID name, ::System::UInt16 pos, ::System::Int32& returnedEnd, ::System::Boolean& notCanonical, ::System::Boolean notImplicitFile)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt16, ::System::Int32&, ::System::Boolean&, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDBYIRI_OFFSET))(name, pos, returnedEnd, notCanonical, notImplicitFile);
		}

		static ::System::String* IdnEquivalent(::System::String* hostname)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_OFFSET))(hostname);
		}

		static ::System::String* IdnEquivalent_1(::PVOID hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::Boolean& atLeastOneValidIdn)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_1_OFFSET))(hostname, start, end, allAscii, atLeastOneValidIdn);
		}

		static ::System::String* IdnEquivalent_2(::PVOID hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::String*& bidiStrippedHost)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_IDNEQUIVALENT_2_OFFSET))(hostname, start, end, allAscii, bidiStrippedHost);
		}

		static ::System::Boolean IsIdnAce(::System::String* input, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_OFFSET))(input, index);
		}

		static ::System::Boolean IsIdnAce_1(::PVOID input, ::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISIDNACE_1_OFFSET))(input, index);
		}

		static ::System::String* UnicodeEquivalent(::System::String* idnHost, ::PVOID hostname, ::System::Int32 start, ::System::Int32 end)
		{
			return ((::System::String*(*)(::System::String*, ::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_OFFSET))(idnHost, hostname, start, end);
		}

		static ::System::String* UnicodeEquivalent_1(::PVOID hostname, ::System::Int32 start, ::System::Int32 end, ::System::Boolean& allAscii, ::System::Boolean& atLeastOneValidIdn)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_UNICODEEQUIVALENT_1_OFFSET))(hostname, start, end, allAscii, atLeastOneValidIdn);
		}

		static ::System::Boolean IsASCIILetterOrDigit(::System::Char character, ::System::Boolean& notCanonical)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISASCIILETTERORDIGIT_OFFSET))(character, notCanonical);
		}

		static ::System::Boolean IsValidDomainLabelCharacter(::System::Char character, ::System::Boolean& notCanonical)
		{
			return ((::System::Boolean(*)(::System::Char, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_DOMAINNAMEHELPER_ISVALIDDOMAINLABELCHARACTER_OFFSET))(character, notCanonical);
		}
	};
}
