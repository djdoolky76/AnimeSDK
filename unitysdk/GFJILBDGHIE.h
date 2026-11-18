#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GFJILBDGHIE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DD3A60)
#define GFJILBDGHIE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13DD39B0)
#define GFJILBDGHIE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DD3780)
#define GFJILBDGHIE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DD3A50)

inline static constexpr unsigned int GFJILBDGHIE_TypeDefinitionIndex = 89082;

class GFJILBDGHIE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CNEHPMPHKCD; // 0x18
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GFMONPJLEGI; // 0x30
	::UnityEngine::RectTransform* NKPJGIELJFD; // 0x38
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x40
	::UnityEngine::RectTransform* PHFOGPCBGOG; // 0x48
	::UnityEngine::RectTransform* OMJLCAJLAFK; // 0x50
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJILBDGHIE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFJILBDGHIE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFJILBDGHIE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFJILBDGHIE_KGEBDLGBGNM_OFFSET))(this);
	}
};
