#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONDCMMIBPHD.h"

class BMDNLGGOIIH;

#define NHMGMFBPEBC_OHEIHFHICHF_OFFSET UNITYSDK_OFFSET(0x12FEABF0)
#define NHMGMFBPEBC__CTOR_OFFSET UNITYSDK_OFFSET(0x12FEAC90)

inline static constexpr unsigned int NHMGMFBPEBC_TypeDefinitionIndex = 42470;

class NHMGMFBPEBC : public ::ONDCMMIBPHD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMGMFBPEBC__CTOR_OFFSET))(this);
	}

	::BMDNLGGOIIH* OHEIHFHICHF()
	{
		return ((::BMDNLGGOIIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHMGMFBPEBC_OHEIHFHICHF_OFFSET))(this);
	}
};
