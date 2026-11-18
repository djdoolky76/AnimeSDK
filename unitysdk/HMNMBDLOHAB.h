#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HMNMBDLOHAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14D39280)
#define HMNMBDLOHAB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14D39140)
#define HMNMBDLOHAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14D38EC0)
#define HMNMBDLOHAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14D39270)

inline static constexpr unsigned int HMNMBDLOHAB_TypeDefinitionIndex = 68630;

class HMNMBDLOHAB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x18
	::FGCOIBFFCHB* DFEDJPOBJMB; // 0x20
	::FGCOIBFFCHB* LKHNJLMCMOK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BMJDGHKDAIA; // 0x30
	::UnityEngine::RectTransform* DPDOFDHIBCP; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* PEFBPACGBAC; // 0x40
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x48
	::LGINJIKKBJA* DKPDELMFFKA; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* FOKAHHGDAHL; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* KGLCPFAMJKL; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* HKJIGPNHKAK; // 0x68
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMBDLOHAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMNMBDLOHAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMNMBDLOHAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMNMBDLOHAB_KGEBDLGBGNM_OFFSET))(this);
	}
};
