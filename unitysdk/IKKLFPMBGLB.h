#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IKKLFPMBGLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xEBE8400)
#define IKKLFPMBGLB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xEBE8350)
#define IKKLFPMBGLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xEBE8180)
#define IKKLFPMBGLB__CTOR_OFFSET UNITYSDK_OFFSET(0xEBE83F0)

inline static constexpr unsigned int IKKLFPMBGLB_TypeDefinitionIndex = 52733;

class IKKLFPMBGLB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKLFPMBGLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKKLFPMBGLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKKLFPMBGLB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKKLFPMBGLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
