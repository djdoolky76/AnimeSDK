#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GBENMHBBJHC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14124900)
#define GBENMHBBJHC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x141247F0)
#define GBENMHBBJHC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14124590)
#define GBENMHBBJHC__CTOR_OFFSET UNITYSDK_OFFSET(0x141248F0)

inline static constexpr unsigned int GBENMHBBJHC_TypeDefinitionIndex = 64501;

class GBENMHBBJHC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* HBHNPKPPKFE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BEGCOICMFFI; // 0x20
	::UnityEngine::GameObject* BKDGGCFMIPD; // 0x28
	::LGINJIKKBJA* PPKEPOEPEEH; // 0x30
	::UnityEngine::GameObject* OBNHHHHIPOL; // 0x38
	::LGINJIKKBJA* NIENBJEFKAF; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ODDCLCMOPJJ; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x50
	::FGCOIBFFCHB* NMNMCIGILJN; // 0x58
	::UnityEngine::RectTransform* KGPFGMNJCJB; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* KDADINNPFAK; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBENMHBBJHC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBENMHBBJHC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GBENMHBBJHC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBENMHBBJHC_KGEBDLGBGNM_OFFSET))(this);
	}
};
