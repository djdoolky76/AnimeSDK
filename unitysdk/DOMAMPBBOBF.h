#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define DOMAMPBBOBF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1587FFB0)
#define DOMAMPBBOBF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1587FEE0)
#define DOMAMPBBOBF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1587FCB0)
#define DOMAMPBBOBF__CTOR_OFFSET UNITYSDK_OFFSET(0x1587FFA0)

inline static constexpr unsigned int DOMAMPBBOBF_TypeDefinitionIndex = 69351;

class DOMAMPBBOBF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GOPFPLCFNJK; // 0x18
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* JCJECBDEDBK; // 0x28
	::FGCOIBFFCHB* HFEHDHCNJHB; // 0x30
	::UnityEngine::UI::Extension::UITabButton* FNMOJAPJAJI; // 0x38
	::FGCOIBFFCHB* OPMIDGCFJDF; // 0x40
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* AGCCEHDJPID; // 0x50
	::FGCOIBFFCHB* NMICOAHDPAJ; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* NLFEHCFAKNK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAMPBBOBF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOMAMPBBOBF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOMAMPBBOBF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DOMAMPBBOBF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
