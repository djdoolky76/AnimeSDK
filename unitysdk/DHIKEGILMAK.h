#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIHPBFHEOOA.h"

#define DHIKEGILMAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEA9050)

inline static constexpr unsigned int DHIKEGILMAK_TypeDefinitionIndex = 94814;

class DHIKEGILMAK : public ::BIHPBFHEOOA
{
public:
	::System::UInt64 FALJABIBPNH; // 0x10
	::System::UInt64 DMOBAILKKEG; // 0x18
	::System::Int32 KFFCBILAOKO; // 0x20
	::System::UInt32 IOAJHKPLIGC; // 0x24
	::System::UInt64 PODCNLNFGOK; // 0x28
	::System::UInt64 CNENMOBJBBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHIKEGILMAK__CTOR_OFFSET))(this);
	}
};
