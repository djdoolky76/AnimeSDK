#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFCGKHPFMBA.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IEPCHFNCDPO_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x9067C0)
#define IEPCHFNCDPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9067B0)

inline static constexpr unsigned int IEPCHFNCDPO_TypeDefinitionIndex = 95213;

struct alignas(4) IEPCHFNCDPO
{
	::NFCGKHPFMBA HLFFCMIFFIB; // 0x10
	::System::Boolean AGJGPFFDDPG; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPCHFNCDPO_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEPCHFNCDPO_DPIHOJBBGLA_OFFSET))(this);
	}
};
