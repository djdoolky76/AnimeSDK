#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LCOCNHMJDIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BB6F70)
#define LCOCNHMJDIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15BB6EE0)
#define LCOCNHMJDIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BB6CE0)
#define LCOCNHMJDIP__CTOR_OFFSET UNITYSDK_OFFSET(0x15BB6F60)

inline static constexpr unsigned int LCOCNHMJDIP_TypeDefinitionIndex = 53633;

class LCOCNHMJDIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x18
	::UnityEngine::UI::Text* HFJGFOLKIMA; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* OPKDLALOLEB; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Text* HKIPALPLCEN; // 0x38
	::MonoUITableScrollV2* FHIGAJCDDMB; // 0x40
	::LGINJIKKBJA* CNEMGKPCIBB; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x50
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOCNHMJDIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCOCNHMJDIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCOCNHMJDIP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LCOCNHMJDIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
