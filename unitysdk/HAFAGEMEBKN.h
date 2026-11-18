#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HAFAGEMEBKN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E07780)
#define HAFAGEMEBKN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E07690)
#define HAFAGEMEBKN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E074E0)
#define HAFAGEMEBKN__CTOR_OFFSET UNITYSDK_OFFSET(0x13E07770)

inline static constexpr unsigned int HAFAGEMEBKN_TypeDefinitionIndex = 84442;

class HAFAGEMEBKN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ECJCMIGKCDL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* EBDHCIEIOLA; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFAGEMEBKN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAFAGEMEBKN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HAFAGEMEBKN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFAGEMEBKN_KGEBDLGBGNM_OFFSET))(this);
	}
};
