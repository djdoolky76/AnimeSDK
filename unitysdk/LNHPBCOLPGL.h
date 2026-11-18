#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define LNHPBCOLPGL_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x18511D70)
#define LNHPBCOLPGL_CHLABALFJOP_OFFSET UNITYSDK_OFFSET(0x18511E90)
#define LNHPBCOLPGL_DHEIPCIIAMA_OFFSET UNITYSDK_OFFSET(0x18511EA0)
#define LNHPBCOLPGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18511EB0)
#define LNHPBCOLPGL_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x18511C90)
#define LNHPBCOLPGL_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x18511E00)
#define LNHPBCOLPGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18511B80)
#define LNHPBCOLPGL_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x18511BF0)
#define LNHPBCOLPGL__CTOR_OFFSET UNITYSDK_OFFSET(0x18511D60)

inline static constexpr unsigned int LNHPBCOLPGL_TypeDefinitionIndex = 68586;

class LNHPBCOLPGL : public ::NHPFMFABMEC
{
public:
	::System::Int32 CGNBKHABNOB; // 0x38
	::System::Int32 _CEAIPIMCFIF_k__BackingField; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHPBCOLPGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_ANEOCOIFDDJ_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Int32 CHLABALFJOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_CHLABALFJOP_OFFSET))(this);
	}

	::System::Void DHEIPCIIAMA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_DHEIPCIIAMA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHPBCOLPGL_ECNOGHHOPPF_OFFSET))(this);
	}
};
