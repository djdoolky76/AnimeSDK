#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DCBCOHEIODM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18326070)
#define DCBCOHEIODM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18325F30)
#define DCBCOHEIODM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18325CE0)
#define DCBCOHEIODM__CTOR_OFFSET UNITYSDK_OFFSET(0x18326060)

inline static constexpr unsigned int DCBCOHEIODM_TypeDefinitionIndex = 73942;

class DCBCOHEIODM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HBHNPKPPKFE; // 0x18
	::UnityEngine::GameObject* COPKFNAFGME; // 0x20
	::UnityEngine::GameObject* PGGPNEEJJBC; // 0x28
	::FGCOIBFFCHB* OMPFLKCBFHF; // 0x30
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x38
	::FGCOIBFFCHB* KEHPAOOHNOI; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* OGDKDKGNMOE; // 0x50
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCOHEIODM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCBCOHEIODM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DCBCOHEIODM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCBCOHEIODM_KGEBDLGBGNM_OFFSET))(this);
	}
};
