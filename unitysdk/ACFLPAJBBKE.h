#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ACFLPAJBBKE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1433CD70)
#define ACFLPAJBBKE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1433CCE0)
#define ACFLPAJBBKE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1433CA80)
#define ACFLPAJBBKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1433CD60)

inline static constexpr unsigned int ACFLPAJBBKE_TypeDefinitionIndex = 61008;

class ACFLPAJBBKE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* FHCGJKMHAPA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ODPHGOMCFCI; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x48
	::UnityEngine::RectTransform* BAHICOJEGKD; // 0x50
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x58
	::UnityEngine::RectTransform* LPEMIDGKFEK; // 0x60
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x68
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x70
	::UnityEngine::RectTransform* EJAMLGKCJED; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLPAJBBKE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACFLPAJBBKE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ACFLPAJBBKE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACFLPAJBBKE_KGEBDLGBGNM_OFFSET))(this);
	}
};
