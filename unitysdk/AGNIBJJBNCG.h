#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define AGNIBJJBNCG__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB69160)

inline static constexpr unsigned int AGNIBJJBNCG_TypeDefinitionIndex = 93369;

class AGNIBJJBNCG : public ::BIHPBFHEOOA
{
public:
	::System::Int32 LPBCDCOADDP; // 0x10
	::System::UInt32 BKLGNCBNEGM; // 0x14
	::System::UInt32 KEHNCKBIBFA; // 0x18
	::System::UInt32 BOJILOOBBOI; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGNIBJJBNCG__CTOR_OFFSET))(this);
	}
};
