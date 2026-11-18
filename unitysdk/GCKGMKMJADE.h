#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GCKGMKMJADE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13DB7110)
#define GCKGMKMJADE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13DB7060)
#define GCKGMKMJADE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DB6E60)
#define GCKGMKMJADE__CTOR_OFFSET UNITYSDK_OFFSET(0x13DB7100)

inline static constexpr unsigned int GCKGMKMJADE_TypeDefinitionIndex = 44495;

class GCKGMKMJADE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BFEKNHCDDGK; // 0x18
	::LGINJIKKBJA* IOKMAADCDAO; // 0x20
	::UnityEngine::RectTransform* CODDMOCBDKL; // 0x28
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x30
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PADIIIBPCHM; // 0x40
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKGMKMJADE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCKGMKMJADE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GCKGMKMJADE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCKGMKMJADE_KGEBDLGBGNM_OFFSET))(this);
	}
};
