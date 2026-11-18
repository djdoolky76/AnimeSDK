#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define JGBIGLFEGHP__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CB130)

inline static constexpr unsigned int JGBIGLFEGHP_TypeDefinitionIndex = 93674;

class JGBIGLFEGHP : public ::BIHPBFHEOOA
{
public:
	::System::UInt64 DMOBAILKKEG; // 0x10
	::System::UInt64 CNENMOBJBBK; // 0x18
	::System::UInt64 PODCNLNFGOK; // 0x20
	::System::UInt32 LOPMOALAPNE; // 0x28
	::System::UInt32 IOAJHKPLIGC; // 0x2C
	::System::UInt64 FALJABIBPNH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGBIGLFEGHP__CTOR_OFFSET))(this);
	}
};
