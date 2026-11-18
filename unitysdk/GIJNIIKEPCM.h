#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GIJNIIKEPCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15CFE7B0)
#define GIJNIIKEPCM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15CFE6C0)
#define GIJNIIKEPCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15CFE4E0)
#define GIJNIIKEPCM__CTOR_OFFSET UNITYSDK_OFFSET(0x15CFE7A0)

inline static constexpr unsigned int GIJNIIKEPCM_TypeDefinitionIndex = 89959;

class GIJNIIKEPCM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* CHCCPCCKJBG; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x38
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJNIIKEPCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIJNIIKEPCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GIJNIIKEPCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJNIIKEPCM_KGEBDLGBGNM_OFFSET))(this);
	}
};
