#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPFMFABMEC.h"

namespace System { class EventArgs; }

#define IFFDMHBAOAP_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x15EB2BF0)
#define IFFDMHBAOAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15EB2AD0)
#define IFFDMHBAOAP_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x15EB29F0)
#define IFFDMHBAOAP_GMONKNNMBFM_OFFSET UNITYSDK_OFFSET(0x15EB2810)
#define IFFDMHBAOAP_HBJGBOMKBHH_OFFSET UNITYSDK_OFFSET(0x15EB2550)
#define IFFDMHBAOAP_NOGKIHLPJDO_OFFSET UNITYSDK_OFFSET(0x15EB2B60)
#define IFFDMHBAOAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15EB2000)
#define IFFDMHBAOAP_PNIFINLBMOE_OFFSET UNITYSDK_OFFSET(0x15EB2140)
#define IFFDMHBAOAP__CTOR_OFFSET UNITYSDK_OFFSET(0x15EB2AC0)

inline static constexpr unsigned int IFFDMHBAOAP_TypeDefinitionIndex = 45898;

class IFFDMHBAOAP : public ::NHPFMFABMEC
{
public:
	::System::Boolean COJMBNEIMIB; // 0x38
	::System::Boolean IHPGGIJOPDO; // 0x39
	::System::Boolean AJHNLPJLKMB; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 EKDELEBLOAB; // 0x3C
	::System::Int32 NFOFLGPJIMK; // 0x40
	::System::Int32 CFMLFEMPAEO; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void PNIFINLBMOE(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_PNIFINLBMOE_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_FCMNHLDLJCI_OFFSET))(this);
	}

	::System::Boolean HBJGBOMKBHH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_HBJGBOMKBHH_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Boolean GMONKNNMBFM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_GMONKNNMBFM_OFFSET))(this);
	}

	::System::Void NOGKIHLPJDO(::System::EventArgs* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_NOGKIHLPJDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDMHBAOAP_ANEOCOIFDDJ_OFFSET))(this);
	}
};
