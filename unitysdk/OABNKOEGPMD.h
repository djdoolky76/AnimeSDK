#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFEDCPGAKHE.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define OABNKOEGPMD_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x13660360)
#define OABNKOEGPMD_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x136602C0)
#define OABNKOEGPMD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13660490)
#define OABNKOEGPMD_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x136601B0)
#define OABNKOEGPMD_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x13660520)
#define OABNKOEGPMD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13660000)
#define OABNKOEGPMD_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x136603F0)
#define OABNKOEGPMD_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x13660140)
#define OABNKOEGPMD__CTOR_OFFSET UNITYSDK_OFFSET(0x13660350)

inline static constexpr unsigned int OABNKOEGPMD_TypeDefinitionIndex = 69720;

class OABNKOEGPMD : public ::NHPFMFABMEC
{
public:
	::FFEDCPGAKHE LHJMEOCJPJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABNKOEGPMD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABNKOEGPMD_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OABNKOEGPMD_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABNKOEGPMD_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OABNKOEGPMD_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABNKOEGPMD_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OABNKOEGPMD_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OABNKOEGPMD_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OABNKOEGPMD_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}
};
