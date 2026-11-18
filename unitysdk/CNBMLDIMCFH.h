#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CNBMLDIMCFH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13E15330)
#define CNBMLDIMCFH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13E151C0)
#define CNBMLDIMCFH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13E14F00)
#define CNBMLDIMCFH__CTOR_OFFSET UNITYSDK_OFFSET(0x13E15320)

inline static constexpr unsigned int CNBMLDIMCFH_TypeDefinitionIndex = 44026;

class CNBMLDIMCFH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x18
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x20
	::UnityEngine::RectTransform* CGBNOLPGEHC; // 0x28
	::FGCOIBFFCHB* AHDOBBDMCMO; // 0x30
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x38
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* IALBEFOCPAK; // 0x50
	::FGCOIBFFCHB* LIEHJKPOMNH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* FDOGGANACAP; // 0x60
	::FGCOIBFFCHB* MJMHFKFBMGD; // 0x68
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x70
	::FGCOIBFFCHB* CONBBLDCMED; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBMLDIMCFH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNBMLDIMCFH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CNBMLDIMCFH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNBMLDIMCFH_KGEBDLGBGNM_OFFSET))(this);
	}
};
