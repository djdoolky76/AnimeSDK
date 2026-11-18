#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JEMAPOPGCEG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x160DC9F0)
#define JEMAPOPGCEG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x160DC840)
#define JEMAPOPGCEG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x160DC510)
#define JEMAPOPGCEG__CTOR_OFFSET UNITYSDK_OFFSET(0x160DC9E0)

inline static constexpr unsigned int JEMAPOPGCEG_TypeDefinitionIndex = 83026;

class JEMAPOPGCEG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* EGLNELANCLF; // 0x18
	::UnityEngine::RectTransform* HHPCMFIFNKB; // 0x20
	::FGCOIBFFCHB* CHDAIGLOAPC; // 0x28
	::LGINJIKKBJA* BDPFCKDFLPG; // 0x30
	::FGCOIBFFCHB* EDOGHECANAI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KGJKKDGMOIM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ACKNKAIJKNB; // 0x48
	::LGINJIKKBJA* EGKGPAHJGFN; // 0x50
	::UnityEngine::RectTransform* FBFNDCGHGOH; // 0x58
	::GCIMMDDIFBJ* GHAEDGADBIJ; // 0x60
	::LGINJIKKBJA* ACKMCEFPFAC; // 0x68
	::UnityEngine::RectTransform* HCBEELBCAED; // 0x70
	::LGINJIKKBJA* CIPLLBJJOJG; // 0x78
	::LGINJIKKBJA* FGBCAFAGECO; // 0x80
	::FGCOIBFFCHB* KEIGKBMLNCJ; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMAPOPGCEG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEMAPOPGCEG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEMAPOPGCEG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JEMAPOPGCEG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
