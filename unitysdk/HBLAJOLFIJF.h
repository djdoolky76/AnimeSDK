#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HBLAJOLFIJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19DEE250)
#define HBLAJOLFIJF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19DEE140)
#define HBLAJOLFIJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19DEDF40)
#define HBLAJOLFIJF__CTOR_OFFSET UNITYSDK_OFFSET(0x19DEE240)

inline static constexpr unsigned int HBLAJOLFIJF_TypeDefinitionIndex = 87329;

class HBLAJOLFIJF : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x30
	::UnityEngine::GameObject* HGMNLNMGBBG; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x40
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLAJOLFIJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBLAJOLFIJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBLAJOLFIJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBLAJOLFIJF_KGEBDLGBGNM_OFFSET))(this);
	}
};
