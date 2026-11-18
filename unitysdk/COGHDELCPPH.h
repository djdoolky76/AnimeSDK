#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define COGHDELCPPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B9030)

inline static constexpr unsigned int COGHDELCPPH_TypeDefinitionIndex = 93529;

class COGHDELCPPH : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 HDGIELLOOEF; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 FALJABIBPNH; // 0x18
	::System::UInt64 DMOBAILKKEG; // 0x20
	::System::UInt32 IOAJHKPLIGC; // 0x28
	::System::UInt32 AICEHFACKBF; // 0x2C
	::System::UInt64 PODCNLNFGOK; // 0x30
	::System::UInt64 CNENMOBJBBK; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + COGHDELCPPH__CTOR_OFFSET))(this);
	}
};
