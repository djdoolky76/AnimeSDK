#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JBCDIMEONJI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A3FAE0)
#define JBCDIMEONJI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14A3FA30)
#define JBCDIMEONJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A3F880)
#define JBCDIMEONJI__CTOR_OFFSET UNITYSDK_OFFSET(0x14A3FAD0)

inline static constexpr unsigned int JBCDIMEONJI_TypeDefinitionIndex = 56847;

class JBCDIMEONJI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* GANCEGMMNMB; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCDIMEONJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBCDIMEONJI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JBCDIMEONJI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBCDIMEONJI_KGEBDLGBGNM_OFFSET))(this);
	}
};
