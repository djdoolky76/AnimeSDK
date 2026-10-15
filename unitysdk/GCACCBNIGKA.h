#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPJDAJBKDMN.h"

#define GCACCBNIGKA_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7AE20)
#define GCACCBNIGKA_GET_INTENT_OFFSET UNITYSDK_OFFSET(0x2E7AE30)

inline static constexpr unsigned int GCACCBNIGKA_TypeDefinitionIndex = 62165;

	struct alignas(4) GCACCBNIGKA
	{
		::FPJDAJBKDMN _Intent_k__BackingField; // 0x10
		::System::Void _ctor(::FPJDAJBKDMN a1)
		{
			return ((::System::Void(*)(::PVOID, ::FPJDAJBKDMN))((::PBYTE)hIl2Cpp + GCACCBNIGKA_CTOR_OFFSET))(this, a1);
		}

		::FPJDAJBKDMN get_Intent()
		{
			return ((::FPJDAJBKDMN(*)(::PVOID))((::PBYTE)hIl2Cpp + GCACCBNIGKA_GET_INTENT_OFFSET))(this);
		}

	};
