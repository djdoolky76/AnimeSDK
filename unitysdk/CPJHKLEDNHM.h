#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CPJHKLEDNHM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A1C5420)
#define CPJHKLEDNHM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1A1C5330)
#define CPJHKLEDNHM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A1C50D0)
#define CPJHKLEDNHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C5410)

inline static constexpr unsigned int CPJHKLEDNHM_TypeDefinitionIndex = 72664;

class CPJHKLEDNHM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JKLABKIHBKP; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::GameObject* AHKNHJKFDCH; // 0x30
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x38
	::UnityEngine::GameObject* HMPNHFMMJBE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* NMOBIHLMHKF; // 0x48
	::UnityEngine::GameObject* GMABNNKNIIF; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* KIJDNMHJDHC; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* KLNFMPJGOOA; // 0x60
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJHKLEDNHM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CPJHKLEDNHM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CPJHKLEDNHM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPJHKLEDNHM_KGEBDLGBGNM_OFFSET))(this);
	}
};
