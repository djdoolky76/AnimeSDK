#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KEOHIGMLCDE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B86290)
#define KEOHIGMLCDE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15B86130)
#define KEOHIGMLCDE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B85F10)
#define KEOHIGMLCDE__CTOR_OFFSET UNITYSDK_OFFSET(0x15B86280)

inline static constexpr unsigned int KEOHIGMLCDE_TypeDefinitionIndex = 65037;

class KEOHIGMLCDE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* GDODMIFPNBF; // 0x18
	::LGINJIKKBJA* ODCMFOODNBA; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::LGINJIKKBJA* MDGNJACIPLG; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* JEGFAAIAFOP; // 0x40
	::FGCOIBFFCHB* EMGGKOOHCNF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOHIGMLCDE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEOHIGMLCDE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEOHIGMLCDE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEOHIGMLCDE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
