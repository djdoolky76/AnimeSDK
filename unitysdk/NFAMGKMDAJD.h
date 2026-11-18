#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NFAMGKMDAJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE7360E0)
#define NFAMGKMDAJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE735FE0)
#define NFAMGKMDAJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE735DD0)
#define NFAMGKMDAJD__CTOR_OFFSET UNITYSDK_OFFSET(0xE7360D0)

inline static constexpr unsigned int NFAMGKMDAJD_TypeDefinitionIndex = 57221;

class NFAMGKMDAJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KLLJKOMCALL; // 0x18
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x20
	::FGCOIBFFCHB* HLCDLFHMHDF; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x38
	::UnityEngine::RectTransform* EOHLKFEFLGH; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* KIHGNGKBADE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAMGKMDAJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFAMGKMDAJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NFAMGKMDAJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFAMGKMDAJD_KGEBDLGBGNM_OFFSET))(this);
	}
};
