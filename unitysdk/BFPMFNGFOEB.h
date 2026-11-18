#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BFPMFNGFOEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10DD6B80)
#define BFPMFNGFOEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10DD6AF0)
#define BFPMFNGFOEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10DD6940)
#define BFPMFNGFOEB__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD6B70)

inline static constexpr unsigned int BFPMFNGFOEB_TypeDefinitionIndex = 43030;

class BFPMFNGFOEB : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x20
	::UnityEngine::RectTransform* KJCGLADLBFI; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMCDAOJKFNF; // 0x30
	::UnityEngine::RectTransform* BJHCGNBFOEA; // 0x38
	::UnityEngine::RectTransform* IJGBDGOFGNK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPMFNGFOEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFPMFNGFOEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFPMFNGFOEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFPMFNGFOEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
