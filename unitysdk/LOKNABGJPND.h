#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LOKNABGJPND_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151B4B70)
#define LOKNABGJPND_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x151B4AA0)
#define LOKNABGJPND_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151B48F0)
#define LOKNABGJPND__CTOR_OFFSET UNITYSDK_OFFSET(0x151B4B60)

inline static constexpr unsigned int LOKNABGJPND_TypeDefinitionIndex = 52472;

class LOKNABGJPND : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* MBHICFCDCJE; // 0x18
	::UnityEngine::RectTransform* PALOGGGMFBA; // 0x20
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* FIEKKDIMMGC; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PAENLJOMKLI; // 0x38
	::UnityEngine::RectTransform* BHGGELLCJIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKNABGJPND__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOKNABGJPND_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LOKNABGJPND_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LOKNABGJPND_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
