#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KOHPPCLBOBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD410990)
#define KOHPPCLBOBK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xD4108A0)
#define KOHPPCLBOBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD4106F0)
#define KOHPPCLBOBK__CTOR_OFFSET UNITYSDK_OFFSET(0xD410980)

inline static constexpr unsigned int KOHPPCLBOBK_TypeDefinitionIndex = 45620;

class KOHPPCLBOBK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHPPCLBOBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOHPPCLBOBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOHPPCLBOBK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KOHPPCLBOBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
