#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NKEKCLOJFCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17295370)
#define NKEKCLOJFCG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17295270)
#define NKEKCLOJFCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17295050)
#define NKEKCLOJFCG__CTOR_OFFSET UNITYSDK_OFFSET(0x17295360)

inline static constexpr unsigned int NKEKCLOJFCG_TypeDefinitionIndex = 49061;

class NKEKCLOJFCG : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* OHDHJIPHEHM; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ALFAFFKFAEG; // 0x20
	::UnityEngine::RectTransform* KKMCLPDAJKJ; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::FGCOIBFFCHB* AJIBHBJNOCE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x48
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEKCLOJFCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKEKCLOJFCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKEKCLOJFCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKEKCLOJFCG_KGEBDLGBGNM_OFFSET))(this);
	}
};
