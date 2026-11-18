#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFLOIDFACPA_LIBMALGPMEE.h"
#include "unitysdk/JJNFLFFJNMD.h"

#define FFLOIDFACPA_ALJBBEOCDMO_OFFSET UNITYSDK_OFFSET(0x156B9060)
#define FFLOIDFACPA_BMCEMJGKMFN_OFFSET UNITYSDK_OFFSET(0x156B9020)
#define FFLOIDFACPA_JENAOJCIFFN_OFFSET UNITYSDK_OFFSET(0x156B8F80)
#define FFLOIDFACPA_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x156B8FC0)
#define FFLOIDFACPA__CTOR_OFFSET UNITYSDK_OFFSET(0x156B90A0)

inline static constexpr unsigned int FFLOIDFACPA_TypeDefinitionIndex = 83156;

class FFLOIDFACPA : public ::JJNFLFFJNMD
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLOIDFACPA__CTOR_OFFSET))(this);
	}

	::FFLOIDFACPA_LIBMALGPMEE JENAOJCIFFN()
	{
		return ((::FFLOIDFACPA_LIBMALGPMEE(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLOIDFACPA_JENAOJCIFFN_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFLOIDFACPA_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Int32 BMCEMJGKMFN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLOIDFACPA_BMCEMJGKMFN_OFFSET))(this);
	}

	::System::Int32 ALJBBEOCDMO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFLOIDFACPA_ALJBBEOCDMO_OFFSET))(this);
	}
};
