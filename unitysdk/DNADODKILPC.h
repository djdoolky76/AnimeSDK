#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CGGLJLECNJM.h"

#define DNADODKILPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE4FE20)

inline static constexpr unsigned int DNADODKILPC_TypeDefinitionIndex = 94453;

class DNADODKILPC : public ::CGGLJLECNJM
{
public:
	::System::Int32 ECAFPALMHLI; // 0x20
	::System::Int32 IIDKBMFGAOL; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNADODKILPC__CTOR_OFFSET))(this);
	}
};
