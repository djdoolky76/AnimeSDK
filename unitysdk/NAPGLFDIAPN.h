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
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define NAPGLFDIAPN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16B45F70)
#define NAPGLFDIAPN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16B45EC0)
#define NAPGLFDIAPN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16B45C30)
#define NAPGLFDIAPN__CTOR_OFFSET UNITYSDK_OFFSET(0x16B45F60)

inline static constexpr unsigned int NAPGLFDIAPN_TypeDefinitionIndex = 64802;

class NAPGLFDIAPN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* LBMPDPJKNJH; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* CCDNKBONPLB; // 0x30
	::UnityEngine::RectTransform* EJAMLGKCJED; // 0x38
	::UnityEngine::RectTransform* KBILENLEEOD; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48
	::UnityEngine::RectTransform* LPEMIDGKFEK; // 0x50
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* ELPMOBIIFGJ; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* ODPHGOMCFCI; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* FHCGJKMHAPA; // 0x70
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x78
	::FGCOIBFFCHB* JOBJDBBKHBM; // 0x80
	::MoleMole::UIGeneralButtonController* DDPMCFOFMFA; // 0x88

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGLFDIAPN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAPGLFDIAPN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NAPGLFDIAPN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPGLFDIAPN_KGEBDLGBGNM_OFFSET))(this);
	}
};
