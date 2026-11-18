#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLBBJPEGEOG.h"

#define HEAECEINKCC_BNMBBAFADAD_CFIAHAGBFOF_OFFSET UNITYSDK_OFFSET(0x17E3F010)
#define HEAECEINKCC_BNMBBAFADAD_MEFNMHGLAEB_OFFSET UNITYSDK_OFFSET(0x17E3F120)
#define HEAECEINKCC_BNMBBAFADAD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E3F110)

inline static constexpr unsigned int HEAECEINKCC_BNMBBAFADAD_TypeDefinitionIndex = 64577;

class HEAECEINKCC_BNMBBAFADAD : public ::HLBBJPEGEOG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEAECEINKCC_BNMBBAFADAD__CTOR_OFFSET))(this);
	}

	::System::Void CFIAHAGBFOF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEAECEINKCC_BNMBBAFADAD_CFIAHAGBFOF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MEFNMHGLAEB(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HEAECEINKCC_BNMBBAFADAD_MEFNMHGLAEB_OFFSET))(this, MIALFKCCCPI);
	}
};
