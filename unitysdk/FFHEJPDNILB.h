#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FFHEJPDNILB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1FB85A40)
#define FFHEJPDNILB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1FB85990)
#define FFHEJPDNILB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1FB85780)
#define FFHEJPDNILB__CTOR_OFFSET UNITYSDK_OFFSET(0x1FB85A30)

inline static constexpr unsigned int FFHEJPDNILB_TypeDefinitionIndex = 94972;

class FFHEJPDNILB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DPNLLKMJMMB; // 0x18
	::GCIMMDDIFBJ* NDIEOPDFNDM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x28
	::UnityEngine::RectTransform* AHKNHJKFDCH; // 0x30
	::FILNFMCNCFE* AMEEMEPHGEL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHEJPDNILB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFHEJPDNILB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FFHEJPDNILB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFHEJPDNILB_KGEBDLGBGNM_OFFSET))(this);
	}
};
