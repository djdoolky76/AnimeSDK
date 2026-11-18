#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BOGFAMJKJJE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11402A20)
#define BOGFAMJKJJE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11402930)
#define BOGFAMJKJJE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11402750)
#define BOGFAMJKJJE__CTOR_OFFSET UNITYSDK_OFFSET(0x11402A10)

inline static constexpr unsigned int BOGFAMJKJJE_TypeDefinitionIndex = 43471;

class BOGFAMJKJJE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CFKEAPOGCLD; // 0x18
	::LGINJIKKBJA* DAOIHCKDHOI; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::FGCOIBFFCHB* EPIFILEEHFF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ADEPIHHHGEP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGFAMJKJJE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOGFAMJKJJE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOGFAMJKJJE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOGFAMJKJJE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
