#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HEJKDDIGJAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A05F30)
#define HEJKDDIGJAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A05E00)
#define HEJKDDIGJAF__CTOR_OFFSET UNITYSDK_OFFSET(0x14A05F20)

inline static constexpr unsigned int HEJKDDIGJAF_TypeDefinitionIndex = 60809;

class HEJKDDIGJAF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KOLPADIFFPO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MEDAJMAKKON; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AOJCEICPCLJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CMGDALCACPD; // 0x30
	::UnityEngine::RectTransform* KPCNHMMFCPN; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BMGLNCDHCDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEJKDDIGJAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEJKDDIGJAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEJKDDIGJAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
