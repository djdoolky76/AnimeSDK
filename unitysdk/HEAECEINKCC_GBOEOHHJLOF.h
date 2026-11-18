#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLBBJPEGEOG.h"

#define HEAECEINKCC_GBOEOHHJLOF_CFIAHAGBFOF_OFFSET UNITYSDK_OFFSET(0x14D20C40)
#define HEAECEINKCC_GBOEOHHJLOF_MEFNMHGLAEB_OFFSET UNITYSDK_OFFSET(0x14D20D50)
#define HEAECEINKCC_GBOEOHHJLOF__CTOR_OFFSET UNITYSDK_OFFSET(0x14D20D40)

inline static constexpr unsigned int HEAECEINKCC_GBOEOHHJLOF_TypeDefinitionIndex = 64571;

class HEAECEINKCC_GBOEOHHJLOF : public ::HLBBJPEGEOG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_GBOEOHHJLOF__CTOR_OFFSET))(this);
	}

	::System::Void CFIAHAGBFOF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEAECEINKCC_GBOEOHHJLOF_CFIAHAGBFOF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MEFNMHGLAEB(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEAECEINKCC_GBOEOHHJLOF_MEFNMHGLAEB_OFFSET))(this, MIALFKCCCPI);
	}
};
