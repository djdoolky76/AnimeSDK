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

#define EJHHCJDNFGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16149600)
#define EJHHCJDNFGF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16149530)
#define EJHHCJDNFGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x161492C0)
#define EJHHCJDNFGF__CTOR_OFFSET UNITYSDK_OFFSET(0x161495F0)

inline static constexpr unsigned int EJHHCJDNFGF_TypeDefinitionIndex = 44334;

class EJHHCJDNFGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AFHFJIIIPNE; // 0x28
	::GCIMMDDIFBJ* DDKPFJLICJB; // 0x30
	::UnityEngine::GameObject* MKLDKLCJEID; // 0x38
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x40
	::MoleMole::NotificationBadgeEx* LHOADKMDIDG; // 0x48
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x50
	::FGCOIBFFCHB* NKOKAFLOJCM; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHHCJDNFGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJHHCJDNFGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJHHCJDNFGF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EJHHCJDNFGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
