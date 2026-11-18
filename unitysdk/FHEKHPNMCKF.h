#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHJDLPACBJ.h"

namespace System { class EventArgs; }

#define FHEKHPNMCKF_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x17148E10)
#define FHEKHPNMCKF_CBCGFFMBBOK_OFFSET UNITYSDK_OFFSET(0x17149210)
#define FHEKHPNMCKF_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x17149330)
#define FHEKHPNMCKF_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x17148FC0)
#define FHEKHPNMCKF_GCOKLBBKKHF_OFFSET UNITYSDK_OFFSET(0x17149340)
#define FHEKHPNMCKF_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x17148E20)
#define FHEKHPNMCKF_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x171491B0)
#define FHEKHPNMCKF_PJNNELGKEPF_OFFSET UNITYSDK_OFFSET(0x17149030)
#define FHEKHPNMCKF__CTOR_OFFSET UNITYSDK_OFFSET(0x17148E00)

inline static constexpr unsigned int FHEKHPNMCKF_TypeDefinitionIndex = 56136;

class FHEKHPNMCKF : public ::DMHJDLPACBJ
{
public:
	::System::Boolean FCGNIFKAAIN; // 0x30

	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FHEKHPNMCKF__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void PJNNELGKEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_PJNNELGKEPF_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CBCGFFMBBOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_CBCGFFMBBOK_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_CPOLHKPOMEC_OFFSET))(this);
	}

	::System::Void GCOKLBBKKHF(::System::EventArgs* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + FHEKHPNMCKF_GCOKLBBKKHF_OFFSET))(this, EIFONLCJOPG);
	}
};
