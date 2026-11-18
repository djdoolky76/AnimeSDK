#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BNPGMECCFGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFF92100)
#define BNPGMECCFGL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xFF91F40)
#define BNPGMECCFGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFF91CC0)
#define BNPGMECCFGL__CTOR_OFFSET UNITYSDK_OFFSET(0xFF920F0)

inline static constexpr unsigned int BNPGMECCFGL_TypeDefinitionIndex = 86983;

class BNPGMECCFGL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MCNIHBDGDIN; // 0x18
	::FGCOIBFFCHB* COIOKOOEMMH; // 0x20
	::LGINJIKKBJA* GPLJEKNNGLO; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::FGCOIBFFCHB* CKEKMDOEMPC; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* GIEBFLOGIFI; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x48
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x50
	::FGCOIBFFCHB* OCBNLOAGKNC; // 0x58
	::FGCOIBFFCHB* DCMPEKLIIKH; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPGMECCFGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNPGMECCFGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNPGMECCFGL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNPGMECCFGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
