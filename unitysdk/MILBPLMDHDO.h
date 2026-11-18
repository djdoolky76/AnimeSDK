#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DMHJDLPACBJ.h"

namespace MoleMole { class UIMiddleTip; }

#define MILBPLMDHDO_BDGGODFNKFA_OFFSET UNITYSDK_OFFSET(0x14D85E10)
#define MILBPLMDHDO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x14D856D0)
#define MILBPLMDHDO_CBCGFFMBBOK_OFFSET UNITYSDK_OFFSET(0x14D85CF0)
#define MILBPLMDHDO_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x14D85CE0)
#define MILBPLMDHDO_EAFHDLFBLGJ_OFFSET UNITYSDK_OFFSET(0x14D85EA0)
#define MILBPLMDHDO_ECEBDPJEKNN_OFFSET UNITYSDK_OFFSET(0x14D85950)
#define MILBPLMDHDO_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x14D856E0)
#define MILBPLMDHDO_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x14D85BA0)
#define MILBPLMDHDO_PJNNELGKEPF_OFFSET UNITYSDK_OFFSET(0x14D85A70)
#define MILBPLMDHDO__CTOR_OFFSET UNITYSDK_OFFSET(0x14D856C0)

inline static constexpr unsigned int MILBPLMDHDO_TypeDefinitionIndex = 56240;

class MILBPLMDHDO : public ::DMHJDLPACBJ
{
public:
	::MoleMole::UIMiddleTip* EODBLNHDIGM; // 0x30
	::System::Single AGJKBEHDEPK; // 0x38

	::System::Void _ctor(::System::Boolean CADGKOONKMF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MILBPLMDHDO__CTOR_OFFSET))(this, CADGKOONKMF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void ECEBDPJEKNN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_ECEBDPJEKNN_OFFSET))(this);
	}

	::System::Void PJNNELGKEPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_PJNNELGKEPF_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_CPOLHKPOMEC_OFFSET))(this);
	}

	::System::Void CBCGFFMBBOK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_CBCGFFMBBOK_OFFSET))(this);
	}

	::System::Void BDGGODFNKFA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_BDGGODFNKFA_OFFSET))(this);
	}

	::System::Void EAFHDLFBLGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MILBPLMDHDO_EAFHDLFBLGJ_OFFSET))(this);
	}
};
