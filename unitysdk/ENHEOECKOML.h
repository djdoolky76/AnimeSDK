#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define ENHEOECKOML_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12376A20)
#define ENHEOECKOML_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12376920)
#define ENHEOECKOML_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12376730)
#define ENHEOECKOML__CTOR_OFFSET UNITYSDK_OFFSET(0x12376A10)

inline static constexpr unsigned int ENHEOECKOML_TypeDefinitionIndex = 44904;

class ENHEOECKOML : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x30
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x38
	::FGCOIBFFCHB* ACBDELCFGNN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHEOECKOML__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENHEOECKOML_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHEOECKOML_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENHEOECKOML_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
