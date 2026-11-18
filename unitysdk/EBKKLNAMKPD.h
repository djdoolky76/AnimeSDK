#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EBKKLNAMKPD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1062BD60)
#define EBKKLNAMKPD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1062BC40)
#define EBKKLNAMKPD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1062BA10)
#define EBKKLNAMKPD__CTOR_OFFSET UNITYSDK_OFFSET(0x1062BD50)

inline static constexpr unsigned int EBKKLNAMKPD_TypeDefinitionIndex = 54864;

class EBKKLNAMKPD : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KIECLDCKCCP; // 0x18
	::LGINJIKKBJA* GAEJFGJDONJ; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AHJGLPIFAHF; // 0x28
	::FGCOIBFFCHB* DKODJEFADOG; // 0x30
	::LGINJIKKBJA* KFOKPEHEAPI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EPBIMGGNJFP; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* GMLEMGLDJEP; // 0x48
	::FGCOIBFFCHB* FOHDPILIIKI; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKKLNAMKPD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBKKLNAMKPD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EBKKLNAMKPD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBKKLNAMKPD_KGEBDLGBGNM_OFFSET))(this);
	}
};
