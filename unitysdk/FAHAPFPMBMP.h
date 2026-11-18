#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FAHAPFPMBMP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CCD610)
#define FAHAPFPMBMP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CCD580)
#define FAHAPFPMBMP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CCD3D0)
#define FAHAPFPMBMP__CTOR_OFFSET UNITYSDK_OFFSET(0x11CCD600)

inline static constexpr unsigned int FAHAPFPMBMP_TypeDefinitionIndex = 70521;

class FAHAPFPMBMP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CNJHAPNFNNL; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x30
	::UnityEngine::RectTransform* KKMCLPDAJKJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DGJNCIFBOJN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHAPFPMBMP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAHAPFPMBMP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FAHAPFPMBMP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHAPFPMBMP_KGEBDLGBGNM_OFFSET))(this);
	}
};
