#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GKGCIAIEPCN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14CF5ED0)
#define GKGCIAIEPCN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14CF5CF0)
#define GKGCIAIEPCN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14CF5A20)
#define GKGCIAIEPCN__CTOR_OFFSET UNITYSDK_OFFSET(0x14CF5EC0)

inline static constexpr unsigned int GKGCIAIEPCN_TypeDefinitionIndex = 40927;

class GKGCIAIEPCN : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* MGCILGDCEDD; // 0x20
	::UnityEngine::RectTransform* ODKGAHDFMAP; // 0x28
	::FGCOIBFFCHB* OKPCGGBNOJH; // 0x30
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x38
	::FGCOIBFFCHB* CGCIPGLJFGG; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x58
	::FGCOIBFFCHB* MNFBJNOLLDJ; // 0x60
	::FGCOIBFFCHB* EEOMODEONJB; // 0x68
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x70
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGCIAIEPCN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKGCIAIEPCN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKGCIAIEPCN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGCIAIEPCN_KGEBDLGBGNM_OFFSET))(this);
	}
};
