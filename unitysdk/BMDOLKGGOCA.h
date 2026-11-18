#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BMDOLKGGOCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14EF8630)
#define BMDOLKGGOCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14EF84E0)
#define BMDOLKGGOCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14EF81C0)
#define BMDOLKGGOCA__CTOR_OFFSET UNITYSDK_OFFSET(0x14EF8620)

inline static constexpr unsigned int BMDOLKGGOCA_TypeDefinitionIndex = 63246;

class BMDOLKGGOCA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* HPFDFAKOAGN; // 0x18
	::FGCOIBFFCHB* MNPAKJLEMKH; // 0x20
	::FGCOIBFFCHB* IPEDBFEEFFE; // 0x28
	::UnityEngine::Transform* PDACHPLBKIE; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* DBMPEIKCMME; // 0x38
	::FILNFMCNCFE* CALJMMPPAOE; // 0x40
	::UnityEngine::Transform* MGEDBKBHJPM; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* JIAPDEAHAMM; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* ICBDIAEODJN; // 0x58
	::FGCOIBFFCHB* POPGLGEDFFG; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x68
	::UnityEngine::Transform* ODPHCLMJAOE; // 0x70
	::UnityEngine::RectTransform* FILPGCNDNMC; // 0x78
	::FGCOIBFFCHB* AIDNPHEBHCB; // 0x80
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x88
	::UnityEngine::RectTransform* LGFIICKCKGO; // 0x90

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDOLKGGOCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMDOLKGGOCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMDOLKGGOCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDOLKGGOCA_KGEBDLGBGNM_OFFSET))(this);
	}
};
