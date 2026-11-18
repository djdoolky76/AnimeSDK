#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OPDIIHAANIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FF6C60)
#define OPDIIHAANIB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15FF6B90)
#define OPDIIHAANIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FF69C0)
#define OPDIIHAANIB__CTOR_OFFSET UNITYSDK_OFFSET(0x15FF6C50)

inline static constexpr unsigned int OPDIIHAANIB_TypeDefinitionIndex = 79160;

class OPDIIHAANIB : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* PILHKIOCONE; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::LGINJIKKBJA* BHJFEMFHNIN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OFJFGAEDAPP; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDIIHAANIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPDIIHAANIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPDIIHAANIB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OPDIIHAANIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
