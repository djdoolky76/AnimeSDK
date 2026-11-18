#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KBAKBJOMALH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x130A7830)
#define KBAKBJOMALH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x130A7760)
#define KBAKBJOMALH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x130A7500)
#define KBAKBJOMALH__CTOR_OFFSET UNITYSDK_OFFSET(0x130A7820)

inline static constexpr unsigned int KBAKBJOMALH_TypeDefinitionIndex = 67475;

class KBAKBJOMALH : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::LGINJIKKBJA* PMBLECALCKB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::GCIMMDDIFBJ* HBBOOGPIJOF; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x40
	::UnityEngine::GameObject* JPCDPLJFJPA; // 0x48
	::UnityEngine::GameObject* CMGJMMJCHDL; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBJOMALH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBAKBJOMALH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBJOMALH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBAKBJOMALH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
