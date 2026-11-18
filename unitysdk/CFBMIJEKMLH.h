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

#define CFBMIJEKMLH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x159BEBC0)
#define CFBMIJEKMLH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x159BEAF0)
#define CFBMIJEKMLH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159BE820)
#define CFBMIJEKMLH__CTOR_OFFSET UNITYSDK_OFFSET(0x159BEBB0)

inline static constexpr unsigned int CFBMIJEKMLH_TypeDefinitionIndex = 42428;

class CFBMIJEKMLH : public ::GIBMJLOJLKD
{
public:
	::GCIMMDDIFBJ* NONNAGPOPJK; // 0x18
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::UnityEngine::RectTransform* BAEKBHECMIP; // 0x38
	::FGCOIBFFCHB* HCOFIMMAKJP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::UnityEngine::RectTransform* EJHNNMBHAPK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x58
	::UnityEngine::RectTransform* DOJJIAGKBEF; // 0x60
	::GCIMMDDIFBJ* DFFJAGGJNJI; // 0x68
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x70
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBMIJEKMLH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFBMIJEKMLH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFBMIJEKMLH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFBMIJEKMLH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
