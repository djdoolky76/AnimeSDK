#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ALDBOOKMFDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12D04400)
#define ALDBOOKMFDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12D04310)
#define ALDBOOKMFDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12D04130)
#define ALDBOOKMFDM__CTOR_OFFSET UNITYSDK_OFFSET(0x12D043F0)

inline static constexpr unsigned int ALDBOOKMFDM_TypeDefinitionIndex = 39328;

class ALDBOOKMFDM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x20
	::LGINJIKKBJA* EADDCKNAFGG; // 0x28
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x30
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDBOOKMFDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALDBOOKMFDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALDBOOKMFDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDBOOKMFDM_KGEBDLGBGNM_OFFSET))(this);
	}
};
