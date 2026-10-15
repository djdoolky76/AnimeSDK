#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define LAGKECNIKFL_CTOR_OFFSET UNITYSDK_OFFSET(0xAF40)
#define LAGKECNIKFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x17410)

inline static constexpr unsigned int LAGKECNIKFL_TypeDefinitionIndex = 67674;

	struct alignas(4) LAGKECNIKFL
	{
		::System::UInt32 EPLMGIDJKLL; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LAGKECNIKFL_CTOR_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAGKECNIKFL_TOSTRING_OFFSET))(this);
		}

	};
