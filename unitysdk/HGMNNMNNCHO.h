#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FFEDCPGAKHE.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define HGMNNMNNCHO_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x17AF6AE0)
#define HGMNNMNNCHO_DFJPMOOOLHM_OFFSET UNITYSDK_OFFSET(0x17AF69B0)
#define HGMNNMNNCHO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17AF6B70)
#define HGMNNMNNCHO_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x17AF68A0)
#define HGMNNMNNCHO_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x17AF6A50)
#define HGMNNMNNCHO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17AF65C0)
#define HGMNNMNNCHO_PBGJKMAEINN_OFFSET UNITYSDK_OFFSET(0x17AF6C00)
#define HGMNNMNNCHO_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x17AF6700)
#define HGMNNMNNCHO__CTOR_OFFSET UNITYSDK_OFFSET(0x17AF6A40)

inline static constexpr unsigned int HGMNNMNNCHO_TypeDefinitionIndex = 77366;

class HGMNNMNNCHO : public ::NHPFMFABMEC
{
public:
	::FFEDCPGAKHE LHJMEOCJPJO; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMNNMNNCHO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void DFJPMOOOLHM(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_DFJPMOOOLHM_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void PBGJKMAEINN(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HGMNNMNNCHO_PBGJKMAEINN_OFFSET))(this, MIALFKCCCPI);
	}
};
