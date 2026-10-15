#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGCJHDHEGMK_TargetType.h"
namespace System { class String; }

#define KGCJHDHEGMK_CTOR_OFFSET UNITYSDK_OFFSET(0x140C0)

inline static constexpr unsigned int KGCJHDHEGMK_TypeDefinitionIndex = 56516;

	struct alignas(8) KGCJHDHEGMK
	{
		::System::String* BFLIFKBEOPJ; // 0x10
		::KGCJHDHEGMK_TargetType MNDFOPKBHKP; // 0x18
		::System::Void _ctor(::System::String* a1, ::KGCJHDHEGMK_TargetType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::KGCJHDHEGMK_TargetType))((::PBYTE)hIl2Cpp + KGCJHDHEGMK_CTOR_OFFSET))(this, a1, a2);
		}

	};
