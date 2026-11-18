#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BECNNIBCPPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFF69310)
#define BECNNIBCPPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFF69260)
#define BECNNIBCPPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFF690B0)
#define BECNNIBCPPE__CTOR_OFFSET UNITYSDK_OFFSET(0xFF69300)

inline static constexpr unsigned int BECNNIBCPPE_TypeDefinitionIndex = 59433;

class BECNNIBCPPE : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNIBCPPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BECNNIBCPPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BECNNIBCPPE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BECNNIBCPPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
