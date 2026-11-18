#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define OPKHKFNPAEG_HLBNOMJDBKD_OFFSET UNITYSDK_OFFSET(0x718D80)
#define OPKHKFNPAEG_LBODGKNICHM_OFFSET UNITYSDK_OFFSET(0x7CB740)
#define OPKHKFNPAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int OPKHKFNPAEG_TypeDefinitionIndex = 49713;

struct alignas(4) OPKHKFNPAEG
{
	::System::Int32 DADMPIIANPB; // 0x10

	::System::Void _ctor(::System::Int32 IIFMJFJOOCK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPKHKFNPAEG__CTOR_OFFSET))(this, IIFMJFJOOCK);
	}

	::System::Boolean HLBNOMJDBKD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKHKFNPAEG_HLBNOMJDBKD_OFFSET))(this);
	}

	::System::Boolean LBODGKNICHM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPKHKFNPAEG_LBODGKNICHM_OFFSET))(this);
	}
};
