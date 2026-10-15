#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BLCOMJIAAHP_ODJCADDMDCL_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define BLCOMJIAAHP_ODJCADDMDCL_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF50)
#define BLCOMJIAAHP_ODJCADDMDCL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE620)
#define BLCOMJIAAHP_ODJCADDMDCL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3C36440)

inline static constexpr unsigned int BLCOMJIAAHP_ODJCADDMDCL_TypeDefinitionIndex = 12861;

	struct alignas(4) BLCOMJIAAHP_ODJCADDMDCL
	{
		::System::UInt32 BOKJJKFCFME; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_ODJCADDMDCL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_ODJCADDMDCL_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::BLCOMJIAAHP_ODJCADDMDCL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLCOMJIAAHP_ODJCADDMDCL))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_ODJCADDMDCL_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLCOMJIAAHP_ODJCADDMDCL_GETHASHCODE_OFFSET))(this);
		}

	};
