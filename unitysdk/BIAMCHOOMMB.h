#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BIAMCHOOMMB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x150790C0)
#define BIAMCHOOMMB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15079030)
#define BIAMCHOOMMB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15078E30)
#define BIAMCHOOMMB__CTOR_OFFSET UNITYSDK_OFFSET(0x150790B0)

inline static constexpr unsigned int BIAMCHOOMMB_TypeDefinitionIndex = 70799;

class BIAMCHOOMMB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* DKMBCCABHFB; // 0x18
	::GCIMMDDIFBJ* BGBAJHKHBIN; // 0x20
	::FGCOIBFFCHB* IKOFJEHPPAN; // 0x28
	::UnityEngine::Transform* JIKBJBFBDIJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PIDJJJOBBHI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* AKDLNMLMLGP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* BMKJJFOPKCJ; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAMCHOOMMB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIAMCHOOMMB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BIAMCHOOMMB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIAMCHOOMMB_KGEBDLGBGNM_OFFSET))(this);
	}
};
