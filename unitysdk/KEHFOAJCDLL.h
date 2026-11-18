#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KEHFOAJCDLL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16339200)
#define KEHFOAJCDLL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16339150)
#define KEHFOAJCDLL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16338F80)
#define KEHFOAJCDLL__CTOR_OFFSET UNITYSDK_OFFSET(0x163391F0)

inline static constexpr unsigned int KEHFOAJCDLL_TypeDefinitionIndex = 69836;

class KEHFOAJCDLL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PCIPGKNAAIC; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* FJLMBLJHFLM; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x30
	::LGINJIKKBJA* HEOACLIFDNO; // 0x38
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x40
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHFOAJCDLL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEHFOAJCDLL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEHFOAJCDLL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEHFOAJCDLL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
