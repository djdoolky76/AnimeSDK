#pragma once
#include "unitysdk/unitysdk.h"

#define IOKNGDGCODE_DEHGFAEJGCO_OFFSET UNITYSDK_OFFSET(0x16508060)
#define IOKNGDGCODE_KKKIONIDKFA_OFFSET UNITYSDK_OFFSET(0x2E83490)

inline static constexpr unsigned int IOKNGDGCODE_TypeDefinitionIndex = 70148;

	struct alignas(4) IOKNGDGCODE
	{
		::System::Int32 JDNDMDHMILA; // 0x10
		::System::Byte _padding0[0x4];
		::System::Double MKPKMDEEEEH; // 0x18
		::System::Boolean KKKIONIDKFA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKNGDGCODE_KKKIONIDKFA_OFFSET))(this);
		}

		/*
		static ::System::Double DEHGFAEJGCO(::IOKNGDGCODE a1, ::IOKNGDGCODE a2)
		{
			return ((::System::Double(*)(::IOKNGDGCODE, ::IOKNGDGCODE))((::PBYTE)hIl2Cpp + IOKNGDGCODE_DEHGFAEJGCO_OFFSET))(a1, a2);
		}
		*/

	};
