#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FELIGAEEBNG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169CD140)
#define FELIGAEEBNG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169CD050)
#define FELIGAEEBNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169CCE40)
#define FELIGAEEBNG__CTOR_OFFSET UNITYSDK_OFFSET(0x169CD130)

inline static constexpr unsigned int FELIGAEEBNG_TypeDefinitionIndex = 77331;

class FELIGAEEBNG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* COEGDCPBBAB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LONDMNEMFKN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IKOFJEHPPAN; // 0x28
	::UnityEngine::GameObject* JOBJDBBKHBM; // 0x30
	::UnityEngine::GameObject* FKKFDIACHKN; // 0x38
	::LGINJIKKBJA* NPHPKPAPBNF; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELIGAEEBNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FELIGAEEBNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FELIGAEEBNG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FELIGAEEBNG_KGEBDLGBGNM_OFFSET))(this);
	}
};
