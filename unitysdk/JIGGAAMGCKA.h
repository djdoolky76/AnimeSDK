#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JIGGAAMGCKA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B27D70)
#define JIGGAAMGCKA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B27C80)
#define JIGGAAMGCKA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B27A70)
#define JIGGAAMGCKA__CTOR_OFFSET UNITYSDK_OFFSET(0x17B27D60)

inline static constexpr unsigned int JIGGAAMGCKA_TypeDefinitionIndex = 48764;

class JIGGAAMGCKA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x18
	::UnityEngine::RectTransform* BKCMOJIFHID; // 0x20
	::UnityEngine::RectTransform* OPBBBLFJDJJ; // 0x28
	::FGCOIBFFCHB* OBEMLOACGAF; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::RectTransform* ONNIKMMJEEG; // 0x48
	::UnityEngine::RectTransform* GEOJODFIMHN; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGGAAMGCKA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIGGAAMGCKA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGGAAMGCKA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JIGGAAMGCKA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
