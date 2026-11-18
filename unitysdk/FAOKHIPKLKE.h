#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NCDMMMLNAMM.h"

class BNLCDBNAFJC;
class FNDAEEHOHPG;

#define FAOKHIPKLKE_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x10F53340)
#define FAOKHIPKLKE_DCJMFMAHBLD_OFFSET UNITYSDK_OFFSET(0x10F530D0)
#define FAOKHIPKLKE_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x10F53110)
#define FAOKHIPKLKE_ECMNGIFAAKB_OFFSET UNITYSDK_OFFSET(0x10F533B0)
#define FAOKHIPKLKE_FOCHLDMBIIF_OFFSET UNITYSDK_OFFSET(0x10F534E0)
#define FAOKHIPKLKE_HEKCKEABNIH_OFFSET UNITYSDK_OFFSET(0x10F53440)
#define FAOKHIPKLKE_IEGJEMNOHGN_OFFSET UNITYSDK_OFFSET(0x10F534A0)
#define FAOKHIPKLKE_JDFIDEENEJF_OFFSET UNITYSDK_OFFSET(0x10F53500)
#define FAOKHIPKLKE_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x10F534F0)
#define FAOKHIPKLKE_PMAOHINGDEG_OFFSET UNITYSDK_OFFSET(0x10F535B0)
#define FAOKHIPKLKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10F53060)

inline static constexpr unsigned int FAOKHIPKLKE_TypeDefinitionIndex = 69432;

class FAOKHIPKLKE : public ::NCDMMMLNAMM
{
public:
	::System::Single DLBHCIIMILJ; // 0x70
	::System::Boolean CGFLLPOCDJM; // 0x74
	::System::Byte _padding0[0x3];
	::System::Single HKLEPFCPMPO; // 0x78
	::System::Int32 ILEJMAACCGC; // 0x7C

	::System::Void _ctor(::FNDAEEHOHPG* FDHDCLGKCHK, ::BNLCDBNAFJC* DEKJDEPKKLH, ::System::UInt32 AKNGEGPIHOF)
	{
		return ((::System::Void(*)(::PVOID, ::FNDAEEHOHPG*, ::BNLCDBNAFJC*, ::System::UInt32))((::PBYTE)hIl2Cpp + FAOKHIPKLKE__CTOR_OFFSET))(this, FDHDCLGKCHK, DEKJDEPKKLH, AKNGEGPIHOF);
	}

	::System::Void DCJMFMAHBLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_DCJMFMAHBLD_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void ABDLEONNPAJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_ABDLEONNPAJ_OFFSET))(this);
	}

	::System::Boolean ECMNGIFAAKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_ECMNGIFAAKB_OFFSET))(this);
	}

	::System::Boolean HEKCKEABNIH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_HEKCKEABNIH_OFFSET))(this);
	}

	::System::Void IEGJEMNOHGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_IEGJEMNOHGN_OFFSET))(this);
	}

	::System::Boolean FOCHLDMBIIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_FOCHLDMBIIF_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean JDFIDEENEJF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_JDFIDEENEJF_OFFSET))(this);
	}

	::System::Void PMAOHINGDEG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOKHIPKLKE_PMAOHINGDEG_OFFSET))(this);
	}
};
