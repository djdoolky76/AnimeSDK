#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EHGKMFAFHFM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF9C6AD0)
#define EHGKMFAFHFM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF9C6960)
#define EHGKMFAFHFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF9C66D0)
#define EHGKMFAFHFM__CTOR_OFFSET UNITYSDK_OFFSET(0xF9C6AC0)

inline static constexpr unsigned int EHGKMFAFHFM_TypeDefinitionIndex = 56723;

class EHGKMFAFHFM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x18
	::FGCOIBFFCHB* LDDKENLHPBJ; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x30
	::FGCOIBFFCHB* OCBNLOAGKNC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::FGCOIBFFCHB* CKEKMDOEMPC; // 0x48
	::FGCOIBFFCHB* JNADFFOLDGP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x58
	::FGCOIBFFCHB* KJCDFCGIPLB; // 0x60
	::FGCOIBFFCHB* OFNDMBEELON; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGKMFAFHFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHGKMFAFHFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHGKMFAFHFM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EHGKMFAFHFM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
