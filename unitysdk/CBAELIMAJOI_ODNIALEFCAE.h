#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define CBAELIMAJOI_ODNIALEFCAE_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define CBAELIMAJOI_ODNIALEFCAE_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define CBAELIMAJOI_ODNIALEFCAE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define CBAELIMAJOI_ODNIALEFCAE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int CBAELIMAJOI_ODNIALEFCAE_TypeDefinitionIndex = 15127;

	struct alignas(4) CBAELIMAJOI_ODNIALEFCAE
	{
		::System::UInt32 FCOGFKMONIB; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CBAELIMAJOI_ODNIALEFCAE_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAELIMAJOI_ODNIALEFCAE_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::CBAELIMAJOI_ODNIALEFCAE a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CBAELIMAJOI_ODNIALEFCAE))((::PBYTE)hIl2Cpp + CBAELIMAJOI_ODNIALEFCAE_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAELIMAJOI_ODNIALEFCAE_GETHASHCODE_OFFSET))(this);
		}

	};
