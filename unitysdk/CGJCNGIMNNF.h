#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CGJCNGIMNNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x145BF710)
#define CGJCNGIMNNF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x145BF600)
#define CGJCNGIMNNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x145BF350)
#define CGJCNGIMNNF__CTOR_OFFSET UNITYSDK_OFFSET(0x145BF700)

inline static constexpr unsigned int CGJCNGIMNNF_TypeDefinitionIndex = 87064;

class CGJCNGIMNNF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EJHNNMBHAPK; // 0x18
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x20
	::UnityEngine::GameObject* LMBJGCIDMMF; // 0x28
	::UnityEngine::GameObject* DCBOFFDIHPH; // 0x30
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x38
	::UnityEngine::GameObject* GJOIFJKPHPL; // 0x40
	::UnityEngine::GameObject* IJCLDJAHEJL; // 0x48
	::UnityEngine::GameObject* LELNPCADHHE; // 0x50
	::FGCOIBFFCHB* BOCHNGHCIIB; // 0x58
	::UnityEngine::GameObject* EKFNNJIKOPL; // 0x60
	::UnityEngine::UI::Text* IGMLLFPCOGE; // 0x68
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x70
	::UnityEngine::GameObject* POOODBMILCH; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* OAIINMLFKAB; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJCNGIMNNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGJCNGIMNNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGJCNGIMNNF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CGJCNGIMNNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
