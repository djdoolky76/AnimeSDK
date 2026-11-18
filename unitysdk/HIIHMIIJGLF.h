#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HIIHMIIJGLF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DB5CB0)
#define HIIHMIIJGLF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DB5B70)
#define HIIHMIIJGLF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DB5960)
#define HIIHMIIJGLF__CTOR_OFFSET UNITYSDK_OFFSET(0x15DB5CA0)

inline static constexpr unsigned int HIIHMIIJGLF_TypeDefinitionIndex = 63065;

class HIIHMIIJGLF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* GENFGBPJOJC; // 0x18
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x20
	::FGCOIBFFCHB* DJBDCGFIGPE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::FGCOIBFFCHB* MCPCOFPCKOF; // 0x38
	::UnityEngine::CanvasGroup* FEDNPODCPBE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* CKFAOJDHLLI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIHMIIJGLF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIIHMIIJGLF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIIHMIIJGLF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIIHMIIJGLF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
