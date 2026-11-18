#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define AGIMKNBPKKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F44DB30)
#define AGIMKNBPKKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1F44DA40)
#define AGIMKNBPKKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F44D7C0)
#define AGIMKNBPKKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F44DB20)

inline static constexpr unsigned int AGIMKNBPKKE_TypeDefinitionIndex = 96506;

class AGIMKNBPKKE : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* JEADJGHEHIH; // 0x18
	::UnityEngine::GameObject* FMLHPKIHFJC; // 0x20
	::LGINJIKKBJA* KOMIELKMHIC; // 0x28
	::LGINJIKKBJA* KDLNMKIAGAJ; // 0x30
	::UnityEngine::GameObject* PJLIMJOGOKD; // 0x38
	::UnityEngine::GameObject* PHOONPGDHAC; // 0x40
	::UnityEngine::GameObject* GMEACHCPCAH; // 0x48
	::MonoUITableScrollV2* LCAIFNHJCJO; // 0x50
	::UnityEngine::UI::Extension::UITabButtonGroup* IGLLLLGNOIM; // 0x58
	::UnityEngine::GameObject* ENCLDAIKKPO; // 0x60
	::UnityEngine::GameObject* AIPOBKJDGLF; // 0x68
	::MonoUITableScrollV2* PPMJJDPMAAJ; // 0x70
	::UnityEngine::Animation* OBLFGHFAGHM; // 0x78
	::UnityEngine::GameObject* FPHNPDEHFIL; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIMKNBPKKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGIMKNBPKKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AGIMKNBPKKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGIMKNBPKKE_KGEBDLGBGNM_OFFSET))(this);
	}
};
