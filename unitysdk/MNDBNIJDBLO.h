#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MNDBNIJDBLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12743750)
#define MNDBNIJDBLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x127436A0)
#define MNDBNIJDBLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12743480)
#define MNDBNIJDBLO__CTOR_OFFSET UNITYSDK_OFFSET(0x12743740)

inline static constexpr unsigned int MNDBNIJDBLO_TypeDefinitionIndex = 67961;

class MNDBNIJDBLO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* MBDMAMEEAOO; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PCBKPMJKHKK; // 0x28
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x30
	::UnityEngine::RectTransform* JNEJLLGMMOB; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* KHBNCNAKEBM; // 0x40
	::FGCOIBFFCHB* KIHGNGKBADE; // 0x48
	::UnityEngine::RectTransform* COPKFNAFGME; // 0x50
	::UnityEngine::RectTransform* DBBNEDOJDPI; // 0x58
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDBNIJDBLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDBNIJDBLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDBNIJDBLO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDBNIJDBLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
