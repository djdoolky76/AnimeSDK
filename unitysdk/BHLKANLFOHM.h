#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define BHLKANLFOHM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1867C460)
#define BHLKANLFOHM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1867C300)
#define BHLKANLFOHM_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x1867C3D0)
#define BHLKANLFOHM_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x1867C2B0)
#define BHLKANLFOHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1867C3C0)

inline static constexpr unsigned int BHLKANLFOHM_TypeDefinitionIndex = 40557;

class BHLKANLFOHM : public ::NHPFMFABMEC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLKANLFOHM__CTOR_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BHLKANLFOHM_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLKANLFOHM_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BHLKANLFOHM_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHLKANLFOHM_ANEOCOIFDDJ_OFFSET))(this);
	}
};
