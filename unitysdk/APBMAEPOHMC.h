#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define APBMAEPOHMC_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x134EACC0)
#define APBMAEPOHMC_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x134EAB60)
#define APBMAEPOHMC_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x134EAC30)
#define APBMAEPOHMC_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x134EAAA0)
#define APBMAEPOHMC__CTOR_OFFSET UNITYSDK_OFFSET(0x134EAC20)

inline static constexpr unsigned int APBMAEPOHMC_TypeDefinitionIndex = 81578;

class APBMAEPOHMC : public ::NHPFMFABMEC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBMAEPOHMC__CTOR_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + APBMAEPOHMC_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBMAEPOHMC_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + APBMAEPOHMC_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APBMAEPOHMC_ANEOCOIFDDJ_OFFSET))(this);
	}
};
