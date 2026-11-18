#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ALFALGGEGBI.h"
#include "unitysdk/DJBPFFLIECG.h"

class CBHECMBPCPM;

#define AMBBJHKCCAL_EPEBOACHNJN_OFFSET UNITYSDK_OFFSET(0x1422C010)
#define AMBBJHKCCAL_GAKFGEBEEEA_OFFSET UNITYSDK_OFFSET(0x1422BE80)
#define AMBBJHKCCAL_JMEJAIFLMBJ_OFFSET UNITYSDK_OFFSET(0x1422BED0)
#define AMBBJHKCCAL_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1422BC10)
#define AMBBJHKCCAL_ONSTART_OFFSET UNITYSDK_OFFSET(0x1422BCB0)
#define AMBBJHKCCAL_PLDCDACCFDK_OFFSET UNITYSDK_OFFSET(0x1422BD00)
#define AMBBJHKCCAL__CTOR_OFFSET UNITYSDK_OFFSET(0x1422BCF0)

inline static constexpr unsigned int AMBBJHKCCAL_TypeDefinitionIndex = 57832;

class AMBBJHKCCAL : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBBJHKCCAL__CTOR_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBBJHKCCAL_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBBJHKCCAL_ONSTART_OFFSET))(this);
	}

	::System::Void PLDCDACCFDK(::System::Int32 MLJEPACEJDM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMBBJHKCCAL_PLDCDACCFDK_OFFSET))(this, MLJEPACEJDM);
	}

	::System::Void GAKFGEBEEEA(::CBHECMBPCPM* MKABFIGHCEM)
	{
		return ((::System::Void(*)(::PVOID, ::CBHECMBPCPM*))((::PBYTE)hIl2Cpp + AMBBJHKCCAL_GAKFGEBEEEA_OFFSET))(this, MKABFIGHCEM);
	}

	::System::Void JMEJAIFLMBJ(::ALFALGGEGBI BNHNGJKNJJD)
	{
		return ((::System::Void(*)(::PVOID, ::ALFALGGEGBI))((::PBYTE)hIl2Cpp + AMBBJHKCCAL_JMEJAIFLMBJ_OFFSET))(this, BNHNGJKNJJD);
	}

	::System::Void EPEBOACHNJN(::System::Int32 MLJEPACEJDM, ::System::Boolean HBMDCGAGLML)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + AMBBJHKCCAL_EPEBOACHNJN_OFFSET))(this, MLJEPACEJDM, HBMDCGAGLML);
	}
};
