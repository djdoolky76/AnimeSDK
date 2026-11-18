#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NENCHHFAFHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE735CB0)
#define NENCHHFAFHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE735C00)
#define NENCHHFAFHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE735A50)
#define NENCHHFAFHH__CTOR_OFFSET UNITYSDK_OFFSET(0xE735CA0)

inline static constexpr unsigned int NENCHHFAFHH_TypeDefinitionIndex = 87951;

class NENCHHFAFHH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENCHHFAFHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NENCHHFAFHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NENCHHFAFHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NENCHHFAFHH_KGEBDLGBGNM_OFFSET))(this);
	}
};
