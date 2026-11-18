#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFEDCPGAKHE.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define HABCGOMABAK_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1816B830)
#define HABCGOMABAK_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x1816B660)
#define HABCGOMABAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1816B8C0)
#define HABCGOMABAK_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1816B560)
#define HABCGOMABAK_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x1816B7A0)
#define HABCGOMABAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1816AFB0)
#define HABCGOMABAK_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x1816B700)
#define HABCGOMABAK_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x1816B1B0)
#define HABCGOMABAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1816B6F0)

inline static constexpr unsigned int HABCGOMABAK_TypeDefinitionIndex = 48125;

class HABCGOMABAK : public ::NHPFMFABMEC
{
public:
	::FFEDCPGAKHE LHJMEOCJPJO; // 0x38
	::System::Int32 PECJPLELKHJ; // 0x44
	::System::Boolean MDOJEEFNJFC; // 0x48
	::System::Boolean OIHJFOCJGJG; // 0x49
	::System::Byte _padding0[0x2];
	::System::Int32 ELAAEELLIPE; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABCGOMABAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABCGOMABAK_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HABCGOMABAK_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABCGOMABAK_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HABCGOMABAK_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HABCGOMABAK_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HABCGOMABAK_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABCGOMABAK_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABCGOMABAK_ECNOGHHOPPF_OFFSET))(this);
	}
};
