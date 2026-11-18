#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGHAOJHKMLH.h"
#include "unitysdk/PBECNFMLHII.h"
#include "unitysdk/System/Object.h"

class BFCMBNBIJCO;
class CBIKOBOECJA;
namespace System { class String; }

#define GEKNLIIDKCM_CAGNNKLBOFL_OFFSET UNITYSDK_OFFSET(0x16CBD850)
#define GEKNLIIDKCM_CEIKDFBIJOF_OFFSET UNITYSDK_OFFSET(0x16CBD860)
#define GEKNLIIDKCM_EEODACBFFHI_OFFSET UNITYSDK_OFFSET(0x16CBD910)
#define GEKNLIIDKCM_HGODLEHJNND_OFFSET UNITYSDK_OFFSET(0x16CBD7E0)
#define GEKNLIIDKCM_ILLAOKMBOAA_OFFSET UNITYSDK_OFFSET(0x16CBD650)
#define GEKNLIIDKCM_JKCBNMOAJJE_OFFSET UNITYSDK_OFFSET(0x16CBD590)
#define GEKNLIIDKCM_LADFBEHMOMH_OFFSET UNITYSDK_OFFSET(0x16CBD900)
#define GEKNLIIDKCM_MHNNIGMCDHP_OFFSET UNITYSDK_OFFSET(0x16CBD7F0)
#define GEKNLIIDKCM_MNICBOONEMF_OFFSET UNITYSDK_OFFSET(0x16CBD780)
#define GEKNLIIDKCM_MNJKPJPEEPH_OFFSET UNITYSDK_OFFSET(0x16CBD460)
#define GEKNLIIDKCM_PCGFMDDIEBF_OFFSET UNITYSDK_OFFSET(0x16CBD5A0)
#define GEKNLIIDKCM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x16CBD3D0)
#define GEKNLIIDKCM__CTOR_OFFSET UNITYSDK_OFFSET(0x16CBD3C0)

inline static constexpr unsigned int GEKNLIIDKCM_TypeDefinitionIndex = 39768;

class GEKNLIIDKCM : public ::System::Object
{
public:
	::CBIKOBOECJA* GALKJDCDDDA; // 0x10
	::PBECNFMLHII OLLDHGAHFBN; // 0x18
	::System::String* GFJKKHBBKBH; // 0x38
	::System::UInt32 PKMFBJMJCOO; // 0x40
	::System::UInt32 MOBNMDEDJIP; // 0x44
	::System::UInt32 ACHBBPJIBIE; // 0x48
	::IGHAOJHKMLH OKBOMMGCOPN; // 0x4C
	::System::Boolean AAPNNDNIPGN; // 0x50
	::System::Byte _padding0[0x3];
	::System::UInt32 ALKKPAKNHPG; // 0x54
	::System::UInt32 EMOJPHKIBMJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::BFCMBNBIJCO* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::BFCMBNBIJCO*))((::PBYTE)hIl2Cpp + GEKNLIIDKCM__CTOR_1_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Boolean MNJKPJPEEPH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_MNJKPJPEEPH_OFFSET))(this);
	}

	::System::Boolean JKCBNMOAJJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_JKCBNMOAJJE_OFFSET))(this);
	}

	::System::Boolean PCGFMDDIEBF(::IGHAOJHKMLH& MGBPCJKFPGN, ::System::String*& AHPPPAFJDAF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IGHAOJHKMLH&, ::System::String*&))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_PCGFMDDIEBF_OFFSET))(this, MGBPCJKFPGN, AHPPPAFJDAF);
	}

	::System::Boolean MNICBOONEMF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_MNICBOONEMF_OFFSET))(this);
	}

	::System::Boolean HGODLEHJNND()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_HGODLEHJNND_OFFSET))(this);
	}

	::System::String* MHNNIGMCDHP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_MHNNIGMCDHP_OFFSET))(this);
	}

	::System::Boolean CAGNNKLBOFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_CAGNNKLBOFL_OFFSET))(this);
	}

	::System::Void CEIKDFBIJOF(::GEKNLIIDKCM* ICJADKEAOIJ)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNLIIDKCM*))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_CEIKDFBIJOF_OFFSET))(this, ICJADKEAOIJ);
	}

	::System::Boolean ILLAOKMBOAA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_ILLAOKMBOAA_OFFSET))(this);
	}

	::System::Boolean LADFBEHMOMH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_LADFBEHMOMH_OFFSET))(this);
	}

	::System::Boolean EEODACBFFHI(::IGHAOJHKMLH& MGBPCJKFPGN, ::System::String*& PKGMMGBJHBC)
	{
		return ((::System::Boolean(*)(::PVOID, ::IGHAOJHKMLH&, ::System::String*&))((::PBYTE)hIl2Cpp + GEKNLIIDKCM_EEODACBFFHI_OFFSET))(this, MGBPCJKFPGN, PKGMMGBJHBC);
	}
};
