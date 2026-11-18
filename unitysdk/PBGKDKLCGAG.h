#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PBGKDKLCGAG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFD9F0E0)
#define PBGKDKLCGAG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFD9EFF0)
#define PBGKDKLCGAG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD9EDF0)
#define PBGKDKLCGAG__CTOR_OFFSET UNITYSDK_OFFSET(0xFD9F0D0)

inline static constexpr unsigned int PBGKDKLCGAG_TypeDefinitionIndex = 76531;

class PBGKDKLCGAG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x18
	::FGCOIBFFCHB* KJIFELCKJKE; // 0x20
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x28
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DICFJBHBNIA; // 0x38
	::UnityEngine::GameObject* IMCPCIDGGKK; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKDKLCGAG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBGKDKLCGAG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PBGKDKLCGAG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBGKDKLCGAG_KGEBDLGBGNM_OFFSET))(this);
	}
};
