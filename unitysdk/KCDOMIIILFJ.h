#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KCDOMIIILFJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155DDD10)
#define KCDOMIIILFJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x155DDC40)
#define KCDOMIIILFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155DDA60)
#define KCDOMIIILFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x155DDD00)

inline static constexpr unsigned int KCDOMIIILFJ_TypeDefinitionIndex = 62949;

class KCDOMIIILFJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GEDFFBGOMMF; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* PKFNOKPBFBC; // 0x20
	::UnityEngine::Animation* MGCHDADNOPH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EHEOPMBAPDA; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* LOIBONJMJAF; // 0x38
	::UnityEngine::RectTransform* PKGIILEMBID; // 0x40
	::UnityEngine::Animation* GFPEKGALJPG; // 0x48
	::FGCOIBFFCHB* EIDIBNGPEJD; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDOMIIILFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCDOMIIILFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCDOMIIILFJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCDOMIIILFJ_KGEBDLGBGNM_OFFSET))(this);
	}
};
