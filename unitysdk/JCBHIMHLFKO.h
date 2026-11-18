#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JCBHIMHLFKO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16AC41B0)
#define JCBHIMHLFKO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16AC40E0)
#define JCBHIMHLFKO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16AC3E90)
#define JCBHIMHLFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC41A0)

inline static constexpr unsigned int JCBHIMHLFKO_TypeDefinitionIndex = 72120;

class JCBHIMHLFKO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KEPMOJNKIIO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x30
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x38
	::UnityEngine::GameObject* EJLMIOMCPOK; // 0x40
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CFPJGKEKCMN; // 0x48
	::LGINJIKKBJA* MPOOGNABAJO; // 0x50
	::UnityEngine::GameObject* EIJAJCALCAN; // 0x58
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CAFHFLHHAJK; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHIMHLFKO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCBHIMHLFKO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCBHIMHLFKO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBHIMHLFKO_KGEBDLGBGNM_OFFSET))(this);
	}
};
