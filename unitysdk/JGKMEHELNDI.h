#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JGKMEHELNDI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x198B8950)
#define JGKMEHELNDI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x198B8880)
#define JGKMEHELNDI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x198B8680)
#define JGKMEHELNDI__CTOR_OFFSET UNITYSDK_OFFSET(0x198B8940)

inline static constexpr unsigned int JGKMEHELNDI_TypeDefinitionIndex = 43822;

class JGKMEHELNDI : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* FHIGAJCDDMB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x20
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x28
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x30
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x38
	::UnityEngine::UI::Text* HKIPALPLCEN; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* OPKDLALOLEB; // 0x48
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x50
	::UnityEngine::UI::Text* HFJGFOLKIMA; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKMEHELNDI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKMEHELNDI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JGKMEHELNDI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGKMEHELNDI_KGEBDLGBGNM_OFFSET))(this);
	}
};
