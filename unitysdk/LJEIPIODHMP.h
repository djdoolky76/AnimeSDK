#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class ImgTextParserBase; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LJEIPIODHMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15662380)
#define LJEIPIODHMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15662290)
#define LJEIPIODHMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15662060)
#define LJEIPIODHMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15662370)

inline static constexpr unsigned int LJEIPIODHMP_TypeDefinitionIndex = 52327;

class LJEIPIODHMP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::MoleMole::ImgTextParserBase* CONHIAMKEDC; // 0x20
	::UnityEngine::Animation* OHHLPHKBFFB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x30
	::MonoUITableScrollV2* NMGGGEJPBOC; // 0x38
	::UnityEngine::Animation* GCJADEDLPPI; // 0x40
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* EGCLKHPGJHI; // 0x50
	::LGINJIKKBJA* KBCLEFAKGHE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEIPIODHMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJEIPIODHMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJEIPIODHMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEIPIODHMP_KGEBDLGBGNM_OFFSET))(this);
	}
};
