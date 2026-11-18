#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OBNKAJELMOB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE13F2B0)
#define OBNKAJELMOB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE13F220)
#define OBNKAJELMOB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE13F070)
#define OBNKAJELMOB__CTOR_OFFSET UNITYSDK_OFFSET(0xE13F2A0)

inline static constexpr unsigned int OBNKAJELMOB_TypeDefinitionIndex = 82726;

class OBNKAJELMOB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PBLGHCLFFEH; // 0x18
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CNMABGKFCCE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNKAJELMOB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBNKAJELMOB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNKAJELMOB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBNKAJELMOB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
