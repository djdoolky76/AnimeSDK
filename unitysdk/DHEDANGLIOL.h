#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DHEDANGLIOL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194123D0)
#define DHEDANGLIOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19412320)
#define DHEDANGLIOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19412160)
#define DHEDANGLIOL__CTOR_OFFSET UNITYSDK_OFFSET(0x194123C0)

inline static constexpr unsigned int DHEDANGLIOL_TypeDefinitionIndex = 58275;

class DHEDANGLIOL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x18
	::UnityEngine::RectTransform* LPLMMNCJHBK; // 0x20
	::LGINJIKKBJA* HEOACLIFDNO; // 0x28
	::UnityEngine::RectTransform* KLLJKOMCALL; // 0x30
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEDANGLIOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHEDANGLIOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHEDANGLIOL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DHEDANGLIOL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
