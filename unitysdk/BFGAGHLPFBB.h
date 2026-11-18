#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABDCODBFDMB.h"

#define BFGAGHLPFBB_AIMAIGLGDBE_OFFSET UNITYSDK_OFFSET(0x1D68B4F0)
#define BFGAGHLPFBB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68B540)

inline static constexpr unsigned int BFGAGHLPFBB_TypeDefinitionIndex = 93963;

class BFGAGHLPFBB
{
public:
	::System::Int32 DLCPIJDBOKP; // 0x28
	::System::UInt32 NBGOLKPKJLC; // 0x2C
	::ABDCODBFDMB HIDDDEFCKOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGAGHLPFBB__CTOR_OFFSET))(this);
	}

	::System::Void AIMAIGLGDBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGAGHLPFBB_AIMAIGLGDBE_OFFSET))(this);
	}
};
