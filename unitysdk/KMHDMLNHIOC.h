#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHJDLPACBJ.h"
#include "unitysdk/EGCPGOHHAIC.h"

#define KMHDMLNHIOC_BDGGODFNKFA_OFFSET UNITYSDK_OFFSET(0x17667760)
#define KMHDMLNHIOC_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x176670E0)
#define KMHDMLNHIOC_CBCGFFMBBOK_OFFSET UNITYSDK_OFFSET(0x17667890)
#define KMHDMLNHIOC_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x176679B0)
#define KMHDMLNHIOC_DNNJOOJBJNB_OFFSET UNITYSDK_OFFSET(0x176672D0)
#define KMHDMLNHIOC_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x176673D0)
#define KMHDMLNHIOC_EMEELJLJIOJ_OFFSET UNITYSDK_OFFSET(0x176677F0)
#define KMHDMLNHIOC_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x176670F0)
#define KMHDMLNHIOC_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x17667700)
#define KMHDMLNHIOC_PJNNELGKEPF_OFFSET UNITYSDK_OFFSET(0x176674D0)
#define KMHDMLNHIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x176670D0)

inline static constexpr unsigned int KMHDMLNHIOC_TypeDefinitionIndex = 47049;

class KMHDMLNHIOC : public ::DMHJDLPACBJ
{
public:
	::EGCPGOHHAIC LAJJOOIANDN; // 0x30
	::System::Boolean FCGNIFKAAIN; // 0x60

	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KMHDMLNHIOC__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void DNNJOOJBJNB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_DNNJOOJBJNB_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void PJNNELGKEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_PJNNELGKEPF_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void BDGGODFNKFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_BDGGODFNKFA_OFFSET))(this);
	}

	::System::Void EMEELJLJIOJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_EMEELJLJIOJ_OFFSET))(this);
	}

	::System::Void CBCGFFMBBOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_CBCGFFMBBOK_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KMHDMLNHIOC_CPOLHKPOMEC_OFFSET))(this);
	}
};
