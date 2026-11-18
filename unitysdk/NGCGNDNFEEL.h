#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define NGCGNDNFEEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD8A640)

inline static constexpr unsigned int NGCGNDNFEEL_TypeDefinitionIndex = 95192;

class NGCGNDNFEEL : public ::BIHPBFHEOOA
{
public:
	::System::UInt32 IOAJHKPLIGC; // 0x10
	::System::Byte _padding0[0x4];
	::System::UInt64 FALJABIBPNH; // 0x18
	::System::UInt64 PODCNLNFGOK; // 0x20
	::System::UInt64 CNENMOBJBBK; // 0x28
	::System::UInt64 DMOBAILKKEG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGCGNDNFEEL__CTOR_OFFSET))(this);
	}
};
