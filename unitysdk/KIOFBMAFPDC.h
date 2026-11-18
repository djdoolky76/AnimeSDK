#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define KIOFBMAFPDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16344030)
#define KIOFBMAFPDC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16343F80)
#define KIOFBMAFPDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16343DB0)
#define KIOFBMAFPDC__CTOR_OFFSET UNITYSDK_OFFSET(0x16344020)

inline static constexpr unsigned int KIOFBMAFPDC_TypeDefinitionIndex = 41379;

class KIOFBMAFPDC : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x28
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x30
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFBMAFPDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIOFBMAFPDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIOFBMAFPDC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KIOFBMAFPDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
