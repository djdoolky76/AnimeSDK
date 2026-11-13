#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define BNFDICJPCHG_CTOR_OFFSET UNITYSDK_OFFSET(0x650320)
#define BNFDICJPCHG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3E62550)

inline static constexpr unsigned int BNFDICJPCHG_TypeDefinitionIndex = 69378;

	struct alignas(4) BNFDICJPCHG
	{
		::System::UInt32 IBFCBHAMFIJ; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BNFDICJPCHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFDICJPCHG_TOSTRING_OFFSET))(this);
		}

	};
