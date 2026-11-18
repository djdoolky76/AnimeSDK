#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDDHJLCEFOJ.h"
#include "unitysdk/MoleMole/Config/Boolean.h"

class EIMHGJELHGN;

#define FNFGAEMBDDC_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1750CC30)
#define FNFGAEMBDDC_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x1750C9E0)
#define FNFGAEMBDDC_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x1750CA40)
#define FNFGAEMBDDC_PHDOKDDEDPB_OFFSET UNITYSDK_OFFSET(0x1750CAD0)
#define FNFGAEMBDDC_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1750C5B0)
#define FNFGAEMBDDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1750CA30)

inline static constexpr unsigned int FNFGAEMBDDC_TypeDefinitionIndex = 86342;

class FNFGAEMBDDC : public ::LDDHJLCEFOJ
{
public:
	::EIMHGJELHGN* HINEKMNPPPC; // 0x28
	::System::Boolean ICBLKLEDIDA; // 0x30
	::System::Byte _padding0[0x3];
	::System::Single INMHMLGFIIK; // 0x34
	::System::Single BJILPIFGBEK; // 0x38
	::System::Single DHELECLABFP; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFGAEMBDDC__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFGAEMBDDC_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFGAEMBDDC_EMCPPBMEKKK_OFFSET))(this);
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNFGAEMBDDC_LJNFANAEHHA_OFFSET))(this);
	}

	::System::Void PHDOKDDEDPB(::System::Boolean FDAKGBOGENJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNFGAEMBDDC_PHDOKDDEDPB_OFFSET))(this, FDAKGBOGENJ);
	}

	::System::Void BBOMJDBNHIC(::EIMHGJELHGN* GFPINKJPPBC, ::MoleMole::Config::Boolean GCEEHNNAFOB, ::System::Single CIIPCCLOHLH, ::System::Single AJNDCFPFFAM)
	{
		return ((::System::Void(*)(::PVOID, ::EIMHGJELHGN*, ::MoleMole::Config::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNFGAEMBDDC_BBOMJDBNHIC_OFFSET))(this, GFPINKJPPBC, GCEEHNNAFOB, CIIPCCLOHLH, AJNDCFPFFAM);
	}
};
