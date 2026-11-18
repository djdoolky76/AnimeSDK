#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HLLKGPBCHOB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16CFA0E0)
#define HLLKGPBCHOB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16CFA030)
#define HLLKGPBCHOB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16CF9E10)
#define HLLKGPBCHOB__CTOR_OFFSET UNITYSDK_OFFSET(0x16CFA0D0)

inline static constexpr unsigned int HLLKGPBCHOB_TypeDefinitionIndex = 66580;

class HLLKGPBCHOB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HOHOCKDLPEG; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x20
	::FGCOIBFFCHB* HILGNAGCBIO; // 0x28
	::UnityEngine::GameObject* EGMDOFEELIK; // 0x30
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x38
	::GCIMMDDIFBJ* MPJLGGOJBHG; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLKGPBCHOB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLLKGPBCHOB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HLLKGPBCHOB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLLKGPBCHOB_KGEBDLGBGNM_OFFSET))(this);
	}
};
