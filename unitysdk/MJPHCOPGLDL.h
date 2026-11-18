#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GEIDBMCINCI.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define MJPHCOPGLDL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x12FF86E0)
#define MJPHCOPGLDL_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x12FF8520)
#define MJPHCOPGLDL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12FF85C0)
#define MJPHCOPGLDL_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x12FF8410)
#define MJPHCOPGLDL_LBOKBPCAGLC_OFFSET UNITYSDK_OFFSET(0x12FF82C0)
#define MJPHCOPGLDL_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x12FF8650)
#define MJPHCOPGLDL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12FF7CF0)
#define MJPHCOPGLDL_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x12FF8770)
#define MJPHCOPGLDL_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x12FF7F20)
#define MJPHCOPGLDL__CTOR_OFFSET UNITYSDK_OFFSET(0x12FF85B0)

inline static constexpr unsigned int MJPHCOPGLDL_TypeDefinitionIndex = 77546;

class MJPHCOPGLDL : public ::NHPFMFABMEC
{
public:
	::System::Int32 NPCPECLGNPN; // 0x38
	::GEIDBMCINCI DIBPHCLKFPC; // 0x3C
	::System::Int32 PECJPLELKHJ; // 0x48
	::System::Int32 ELAAEELLIPE; // 0x4C
	::System::Boolean OIHJFOCJGJG; // 0x50
	::System::Boolean MDOJEEFNJFC; // 0x51

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPHCOPGLDL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean LBOKBPCAGLC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_LBOKBPCAGLC_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MJPHCOPGLDL_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
