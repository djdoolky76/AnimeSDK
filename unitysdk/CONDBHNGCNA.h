#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define CONDBHNGCNA_CTOR_OFFSET UNITYSDK_OFFSET(0x11150)
#define CONDBHNGCNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEEB50)

inline static constexpr unsigned int CONDBHNGCNA_TypeDefinitionIndex = 67428;

	struct alignas(4) CONDBHNGCNA
	{
		::System::UInt32 PJIEOECDIFN; // 0x10
		::System::UInt32 AAGKEBFHLMC; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CONDBHNGCNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONDBHNGCNA_TOSTRING_OFFSET))(this);
		}

	};
