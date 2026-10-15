#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define ICHCKGNHKPF_CTOR_OFFSET UNITYSDK_OFFSET(0x11150)
#define ICHCKGNHKPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2E80EE0)

inline static constexpr unsigned int ICHCKGNHKPF_TypeDefinitionIndex = 67196;

	struct alignas(4) ICHCKGNHKPF
	{
		::System::UInt32 EFAIIOHKFGD; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICHCKGNHKPF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHCKGNHKPF_TOSTRING_OFFSET))(this);
		}

	};
