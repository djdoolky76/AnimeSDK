#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HLJEEEHCJNK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F444F0)
#define HLJEEEHCJNK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F44400)
#define HLJEEEHCJNK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F44200)
#define HLJEEEHCJNK__CTOR_OFFSET UNITYSDK_OFFSET(0x16F444E0)

inline static constexpr unsigned int HLJEEEHCJNK_TypeDefinitionIndex = 84293;

class HLJEEEHCJNK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* LNBIEGJBAKA; // 0x18
	::LGINJIKKBJA* GPJIEHCKFMB; // 0x20
	::UnityEngine::GameObject* FLNDHNJHCEM; // 0x28
	::FGCOIBFFCHB* MAMNIGKOFLN; // 0x30
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* IKODDPOMADP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* CMHCFHJBGOP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJEEEHCJNK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLJEEEHCJNK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLJEEEHCJNK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLJEEEHCJNK_KGEBDLGBGNM_OFFSET))(this);
	}
};
