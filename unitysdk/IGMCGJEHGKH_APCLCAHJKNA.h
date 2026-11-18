#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define IGMCGJEHGKH_APCLCAHJKNA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x79F5D0)
#define IGMCGJEHGKH_APCLCAHJKNA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x79F5C0)

inline static constexpr unsigned int IGMCGJEHGKH_APCLCAHJKNA_TypeDefinitionIndex = 51585;

struct alignas(8) IGMCGJEHGKH_APCLCAHJKNA
{
	::System::String* AELLPLBJELA; // 0x10
	::System::Int32 PBINAIPEKPA; // 0x18
	::System::Int32 GLMJIMDHICK; // 0x1C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMCGJEHGKH_APCLCAHJKNA_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGMCGJEHGKH_APCLCAHJKNA_DPIHOJBBGLA_OFFSET))(this);
	}
};
