#pragma once
#include "unitysdk/unitysdk.h"
class BDFIKMEMFJF;

#define KOFIMLBOMIG_DFBLEFCCCJO_CTOR_OFFSET UNITYSDK_OFFSET(0xE590)

inline static constexpr unsigned int KOFIMLBOMIG_DFBLEFCCCJO_TypeDefinitionIndex = 55956;

	struct alignas(8) KOFIMLBOMIG_DFBLEFCCCJO
	{
		::System::UInt32 KHBBNDBJAFK; // 0x10
		::System::Byte _padding0[0x4];
		::BDFIKMEMFJF* CBLFMILMHAD; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::BDFIKMEMFJF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::BDFIKMEMFJF*))((::PBYTE)hIl2Cpp + KOFIMLBOMIG_DFBLEFCCCJO_CTOR_OFFSET))(this, a1, a2);
		}

	};
