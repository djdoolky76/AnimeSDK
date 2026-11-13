#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FPJDAJBKDMN.h"

#define GCACCBNIGKA_CTOR_OFFSET UNITYSDK_OFFSET(0xAD9EE0)
#define GCACCBNIGKA_GET_INTENT_OFFSET UNITYSDK_OFFSET(0xADA190)

inline static constexpr unsigned int GCACCBNIGKA_TypeDefinitionIndex = 63578;

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
