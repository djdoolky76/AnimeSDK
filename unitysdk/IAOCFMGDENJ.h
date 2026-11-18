#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IAOCFMGDENJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12E9D360)
#define IAOCFMGDENJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12E9D2D0)
#define IAOCFMGDENJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12E9D0D0)
#define IAOCFMGDENJ__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9D350)

inline static constexpr unsigned int IAOCFMGDENJ_TypeDefinitionIndex = 57950;

class IAOCFMGDENJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* KAGMIOALCFO; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PLAEINEAEGI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* LNANNGJLEND; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MFGPCFNAPHA; // 0x30
	::UnityEngine::GameObject* OHGKDMDJNBI; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x40
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x48
	::UnityEngine::RectTransform* IKOFJEHPPAN; // 0x50
	::LGINJIKKBJA* DKJCIEIHKCL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCFMGDENJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOCFMGDENJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAOCFMGDENJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IAOCFMGDENJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
