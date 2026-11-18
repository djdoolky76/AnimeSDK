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

#define DBFBIKFHMCJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132852E0)
#define DBFBIKFHMCJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13285210)
#define DBFBIKFHMCJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13284F40)
#define DBFBIKFHMCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x132852D0)

inline static constexpr unsigned int DBFBIKFHMCJ_TypeDefinitionIndex = 92911;

class DBFBIKFHMCJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PMCNDKMMFDG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x38
	::FGCOIBFFCHB* HCOFIMMAKJP; // 0x40
	::UnityEngine::RectTransform* BAEKBHECMIP; // 0x48
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x58
	::GCIMMDDIFBJ* DFFJAGGJNJI; // 0x60
	::UnityEngine::RectTransform* DOJJIAGKBEF; // 0x68
	::UnityEngine::RectTransform* EJHNNMBHAPK; // 0x70
	::GCIMMDDIFBJ* NONNAGPOPJK; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFBIKFHMCJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBFBIKFHMCJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFBIKFHMCJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DBFBIKFHMCJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
