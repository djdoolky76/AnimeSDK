#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define CAOOFGCHFDI_CTOR_OFFSET UNITYSDK_OFFSET(0xFE60)
#define CAOOFGCHFDI_EQUALS_OFFSET UNITYSDK_OFFSET(0xE04C0)
#define CAOOFGCHFDI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE0530)
#define CAOOFGCHFDI_TOSTRING_OFFSET UNITYSDK_OFFSET(0xE04B0)

inline static constexpr unsigned int CAOOFGCHFDI_TypeDefinitionIndex = 65654;

	struct alignas(4) CAOOFGCHFDI
	{
		::System::UInt32 FIMNPJLNLEE; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x14
		::System::UInt32 GDBJDAOOCOH; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CAOOFGCHFDI_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOOFGCHFDI_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::CAOOFGCHFDI a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAOOFGCHFDI))((::PBYTE)hIl2Cpp + CAOOFGCHFDI_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOOFGCHFDI_GETHASHCODE_OFFSET))(this);
		}

	};
