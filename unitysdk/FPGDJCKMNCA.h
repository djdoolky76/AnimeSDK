#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJGEHPBJKDM.h"

#define FPGDJCKMNCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1750FB20)

inline static constexpr unsigned int FPGDJCKMNCA_TypeDefinitionIndex = 54746;

class FPGDJCKMNCA
{
public:
	::FJGEHPBJKDM LOJJDNGBALB; // 0x28
	::System::Int32 MMDCMAHOPGC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPGDJCKMNCA__CTOR_OFFSET))(this);
	}
};
