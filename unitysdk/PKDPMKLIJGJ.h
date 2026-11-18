#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLBBJPEGEOG.h"

#define PKDPMKLIJGJ_CFIAHAGBFOF_OFFSET UNITYSDK_OFFSET(0x1C1D9670)
#define PKDPMKLIJGJ_MEFNMHGLAEB_OFFSET UNITYSDK_OFFSET(0x1C1D9790)
#define PKDPMKLIJGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D9780)

inline static constexpr unsigned int PKDPMKLIJGJ_TypeDefinitionIndex = 91329;

class PKDPMKLIJGJ : public ::HLBBJPEGEOG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKDPMKLIJGJ__CTOR_OFFSET))(this);
	}

	::System::Void CFIAHAGBFOF(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKDPMKLIJGJ_CFIAHAGBFOF_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void MEFNMHGLAEB(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PKDPMKLIJGJ_MEFNMHGLAEB_OFFSET))(this, MIALFKCCCPI);
	}
};
