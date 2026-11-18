#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define MAJNJALKOOK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x185238B0)
#define MAJNJALKOOK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x185237C0)
#define MAJNJALKOOK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18523550)
#define MAJNJALKOOK__CTOR_OFFSET UNITYSDK_OFFSET(0x185238A0)

inline static constexpr unsigned int MAJNJALKOOK_TypeDefinitionIndex = 67137;

class MAJNJALKOOK : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x18
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x20
	::UnityEngine::GameObject* LELNPCADHHE; // 0x28
	::UnityEngine::GameObject* EJHNNMBHAPK; // 0x30
	::UnityEngine::UI::Text* IGMLLFPCOGE; // 0x38
	::UnityEngine::GameObject* GJOIFJKPHPL; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::GameObject* POOODBMILCH; // 0x50
	::UnityEngine::GameObject* EKFNNJIKOPL; // 0x58
	::UnityEngine::GameObject* IJCLDJAHEJL; // 0x60
	::UnityEngine::GameObject* LMBJGCIDMMF; // 0x68
	::UnityEngine::GameObject* DCBOFFDIHPH; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJNJALKOOK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAJNJALKOOK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MAJNJALKOOK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MAJNJALKOOK_KGEBDLGBGNM_OFFSET))(this);
	}
};
