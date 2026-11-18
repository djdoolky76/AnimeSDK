#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DGDPBBDLAEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13293590)
#define DGDPBBDLAEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x132934C0)
#define DGDPBBDLAEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13293340)
#define DGDPBBDLAEO__CTOR_OFFSET UNITYSDK_OFFSET(0x13293580)

inline static constexpr unsigned int DGDPBBDLAEO_TypeDefinitionIndex = 38323;

class DGDPBBDLAEO : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x18
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDPBBDLAEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGDPBBDLAEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGDPBBDLAEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGDPBBDLAEO_KGEBDLGBGNM_OFFSET))(this);
	}
};
