#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENFLEEPLNPC_NBJJMNLHJPK.h"
#include "unitysdk/System/ValueType.h"

#define ENFLEEPLNPC_JPPEEOLOGGP_1_OFFSET UNITYSDK_OFFSET(0xF9E4120)
#define ENFLEEPLNPC_JPPEEOLOGGP_OFFSET UNITYSDK_OFFSET(0xF9E40E0)

inline static constexpr unsigned int ENFLEEPLNPC_TypeDefinitionIndex = 40939;

struct alignas(4) ENFLEEPLNPC
{
	::System::Char IGAAKDOIPNN; // 0x10
	::System::Byte _padding0[0x2];
	::ENFLEEPLNPC_NBJJMNLHJPK JHNNEBNENEJ; // 0x14

	/*
	static ::System::Char JPPEEOLOGGP(::ENFLEEPLNPC IGAAKDOIPNN)
	{
		return ((::System::Char(*)(::ENFLEEPLNPC))((::PBYTE)hIl2Cpp + ENFLEEPLNPC_JPPEEOLOGGP_OFFSET))(IGAAKDOIPNN);
	}
	*/

	/*
	static ::ENFLEEPLNPC JPPEEOLOGGP_1(::System::Char IGAAKDOIPNN)
	{
		return ((::ENFLEEPLNPC(*)(::System::Char))((::PBYTE)hIl2Cpp + ENFLEEPLNPC_JPPEEOLOGGP_1_OFFSET))(IGAAKDOIPNN);
	}
	*/
};
