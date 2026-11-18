#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHGAAKPAJPF.h"

#define EDIFPCEGPDE__CTOR_OFFSET UNITYSDK_OFFSET(0x12BE51C0)

inline static constexpr unsigned int EDIFPCEGPDE_TypeDefinitionIndex = 84794;

class EDIFPCEGPDE : public ::LHGAAKPAJPF
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDIFPCEGPDE__CTOR_OFFSET))(this);
	}
};
