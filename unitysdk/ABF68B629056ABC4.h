#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define ABF68B629056ABC4__CTOR_OFFSET UNITYSDK_OFFSET(0x1FCB750)

inline static constexpr unsigned int ABF68B629056ABC4_TypeDefinitionIndex = 8007;

struct alignas(4) ABF68B629056ABC4
{
	::System::UInt32 E4D1B466F39AB65F; // 0x10
	::System::UInt32 BC856D1360EC9BFA; // 0x14

	::System::Void _ctor(::System::UInt32 AC871B0E7A8B50A0, ::System::UInt32 A2A5DA793539A183)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ABF68B629056ABC4__CTOR_OFFSET))(this, AC871B0E7A8B50A0, A2A5DA793539A183);
	}
};
