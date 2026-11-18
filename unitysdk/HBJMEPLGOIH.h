#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HBJMEPLGOIH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11006D20)
#define HBJMEPLGOIH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11006BF0)
#define HBJMEPLGOIH__CTOR_OFFSET UNITYSDK_OFFSET(0x11006D10)

inline static constexpr unsigned int HBJMEPLGOIH_TypeDefinitionIndex = 60211;

class HBJMEPLGOIH : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* FHIGAJCDDMB; // 0x18
	::UnityEngine::UI::Text* HKIPALPLCEN; // 0x20
	::UnityEngine::UI::Text* CIODPKMJMGE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OPKDLALOLEB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MFKBCHAJOGK; // 0x38
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJMEPLGOIH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBJMEPLGOIH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HBJMEPLGOIH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
