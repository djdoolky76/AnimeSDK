#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define HJPKGKGOAFP_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define HJPKGKGOAFP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E7EAD0)

inline static constexpr unsigned int HJPKGKGOAFP_TypeDefinitionIndex = 67722;

	struct alignas(4) HJPKGKGOAFP
	{
		::System::UInt32 LLICIMBCNPF; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJPKGKGOAFP_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJPKGKGOAFP_TOSTRING_OFFSET))(this);
		}

	};
