#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UIImgText; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BHJEBOMCGPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15078620)
#define BHJEBOMCGPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x150784A0)
#define BHJEBOMCGPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x150781D0)
#define BHJEBOMCGPN__CTOR_OFFSET UNITYSDK_OFFSET(0x15078610)

inline static constexpr unsigned int BHJEBOMCGPN_TypeDefinitionIndex = 49573;

class BHJEBOMCGPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LMPHPJGOPKE; // 0x18
	::UnityEngine::UI::Extension::UIImgText* CBBIIJIGEGM; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ODHIBECKKOA; // 0x28
	::FGCOIBFFCHB* CBDELHDIOCD; // 0x30
	::LGINJIKKBJA* GPOPCMKPHBC; // 0x38
	::LGINJIKKBJA* MONGAHKMJGG; // 0x40
	::UnityEngine::UI::Extension::UIImgText* FGAPHHELAAK; // 0x48
	::UnityEngine::Animation* KEIOKLIDNPE; // 0x50
	::UnityEngine::Animation* JJNNKFOEBDD; // 0x58
	::FGCOIBFFCHB* JFKFGMCAGHG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* CKNGLJDLHKL; // 0x68
	::FGCOIBFFCHB* BGNHLFGPPJD; // 0x70
	::UnityEngine::UI::Extension::UILocalizationText* FHELNEHDLPB; // 0x78
	::FGCOIBFFCHB* KGCKIPNHELD; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBOMCGPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHJEBOMCGPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BHJEBOMCGPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BHJEBOMCGPN_KGEBDLGBGNM_OFFSET))(this);
	}
};
