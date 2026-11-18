#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OLHFONBEAAN.h"

namespace System { class String; }

#define LPDJNFLEPJG_AHAPINELJKK_OFFSET UNITYSDK_OFFSET(0x151B71B0)
#define LPDJNFLEPJG_CCIFDCBKPPJ_OFFSET UNITYSDK_OFFSET(0x151B6EE0)
#define LPDJNFLEPJG_DGANINHHGPB_OFFSET UNITYSDK_OFFSET(0x151B72E0)
#define LPDJNFLEPJG_DMIDMCHDOFD_OFFSET UNITYSDK_OFFSET(0x151B6F90)
#define LPDJNFLEPJG_EFDHFPDKKGD_OFFSET UNITYSDK_OFFSET(0x151B7300)
#define LPDJNFLEPJG_IMKIMIJFKII_OFFSET UNITYSDK_OFFSET(0x151B72F0)
#define LPDJNFLEPJG_KEFOMPECDCL_OFFSET UNITYSDK_OFFSET(0x151B7240)
#define LPDJNFLEPJG_MBJCPBEBHFI_OFFSET UNITYSDK_OFFSET(0x151B7050)
#define LPDJNFLEPJG_NEKANOEOOAE_OFFSET UNITYSDK_OFFSET(0x151B70E0)
#define LPDJNFLEPJG_OAGNMOOJCCJ_OFFSET UNITYSDK_OFFSET(0x151B6E20)
#define LPDJNFLEPJG_OEIIGFCGPOE_OFFSET UNITYSDK_OFFSET(0x151B7130)
#define LPDJNFLEPJG_OHDPCOIOMGF_OFFSET UNITYSDK_OFFSET(0x151B6E70)
#define LPDJNFLEPJG__CTOR_OFFSET UNITYSDK_OFFSET(0x151B6E30)

inline static constexpr unsigned int LPDJNFLEPJG_TypeDefinitionIndex = 88564;

class LPDJNFLEPJG : public ::OLHFONBEAAN
{
public:
	// static const ::System::String* KPGLNMBHCOC; // 0x0
	// static const ::System::String* GDGEFKHKBEJ; // 0x0
	::System::Int32 BELNJJKMMJP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG__CTOR_OFFSET))(this);
	}

	::System::Int32 OAGNMOOJCCJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_OAGNMOOJCCJ_OFFSET))(this);
	}

	::System::Boolean OHDPCOIOMGF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_OHDPCOIOMGF_OFFSET))(this);
	}

	::System::Void CCIFDCBKPPJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_CCIFDCBKPPJ_OFFSET))(this);
	}

	::System::Void DMIDMCHDOFD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_DMIDMCHDOFD_OFFSET))(this);
	}

	::System::Void NEKANOEOOAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_NEKANOEOOAE_OFFSET))(this);
	}

	::System::Boolean OEIIGFCGPOE(::System::Int32 HAAEBCOBKFF, ::System::Int32 BFMMEICFNCD)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_OEIIGFCGPOE_OFFSET))(this, HAAEBCOBKFF, BFMMEICFNCD);
	}

	::System::Void AHAPINELJKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_AHAPINELJKK_OFFSET))(this);
	}

	::System::Boolean KEFOMPECDCL(::System::Int32 MIALFKCCCPI, ::System::Int32 KMGKAIDEIBA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_KEFOMPECDCL_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void DGANINHHGPB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_DGANINHHGPB_OFFSET))(this);
	}

	::System::String* MBJCPBEBHFI(::System::String* INPMBOAGOCP)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_MBJCPBEBHFI_OFFSET))(this, INPMBOAGOCP);
	}

	::System::Boolean IMKIMIJFKII()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_IMKIMIJFKII_OFFSET))(this);
	}

	::System::Void EFDHFPDKKGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJNFLEPJG_EFDHFPDKKGD_OFFSET))(this);
	}
};
