#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DGOKGNKBJFA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1833D870)
#define DGOKGNKBJFA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1833D760)
#define DGOKGNKBJFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1833D530)
#define DGOKGNKBJFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1833D860)

inline static constexpr unsigned int DGOKGNKBJFA_TypeDefinitionIndex = 76261;

class DGOKGNKBJFA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BLMIHPLNMEE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* OGBONAGHMOF; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x28
	::UnityEngine::GameObject* EJAMLGKCJED; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x40
	::FGCOIBFFCHB* FDJHEBHLJLD; // 0x48
	::UnityEngine::GameObject* EABIDOCLFBN; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOKGNKBJFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGOKGNKBJFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGOKGNKBJFA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGOKGNKBJFA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
