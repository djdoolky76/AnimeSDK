#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEMIHOGGHJB.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define PIMMOKMICLA_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x9132F0)
#define PIMMOKMICLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9132E0)

inline static constexpr unsigned int PIMMOKMICLA_TypeDefinitionIndex = 94639;

struct alignas(4) PIMMOKMICLA
{
	::System::Int32 GPIOJBLKFAJ; // 0x10
	::System::UInt32 NFNFLAAAIIG; // 0x14
	::System::Boolean MFDNGJKGMJB; // 0x18
	::System::Byte _padding0[0x3];
	::JEMIHOGGHJB JLCKHEKBDFO; // 0x1C
	::System::Boolean KMOBFFFOJMN; // 0x20
	::System::Byte _padding1[0x3];
	::JGLIFHIAIEH HBGLJEDNOKM; // 0x24
	::System::Int32 MGHIHNAOJFE; // 0x2C

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMMOKMICLA_TOSTRING_OFFSET))(this);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIMMOKMICLA_DPIHOJBBGLA_OFFSET))(this);
	}
};
