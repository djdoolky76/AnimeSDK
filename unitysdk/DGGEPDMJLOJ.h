#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DGGEPDMJLOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1240F3A0)
#define DGGEPDMJLOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1240F1D0)
#define DGGEPDMJLOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1240EED0)
#define DGGEPDMJLOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1240F390)

inline static constexpr unsigned int DGGEPDMJLOJ_TypeDefinitionIndex = 76243;

class DGGEPDMJLOJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* LKIHDIDNCJL; // 0x18
	::UnityEngine::RectTransform* JOBJDBBKHBM; // 0x20
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x28
	::UnityEngine::RectTransform* DPNLLKMJMMB; // 0x30
	::FGCOIBFFCHB* MPFDMAPAHOO; // 0x38
	::LGINJIKKBJA* NPJLIILIJAH; // 0x40
	::UnityEngine::RectTransform* ODKGAHDFMAP; // 0x48
	::FGCOIBFFCHB* CENAJMCPANF; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* OFPNEDLGPJK; // 0x58
	::FGCOIBFFCHB* LGJLKPHHEGC; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* OIJKJNBJDCD; // 0x68
	::FGCOIBFFCHB* OAHLKJNGKFB; // 0x70
	::FGCOIBFFCHB* ANAEFBINODG; // 0x78
	::FGCOIBFFCHB* OFJGGKHGLLJ; // 0x80
	::UnityEngine::UI::Extension::UILocalizationText* ACGGKKHEFJP; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGEPDMJLOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGGEPDMJLOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DGGEPDMJLOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGGEPDMJLOJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
