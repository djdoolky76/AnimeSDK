#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define DFILGLOBNDM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1974EC10)
#define DFILGLOBNDM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1974EB80)
#define DFILGLOBNDM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1974E9D0)
#define DFILGLOBNDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1974EC00)

inline static constexpr unsigned int DFILGLOBNDM_TypeDefinitionIndex = 87618;

class DFILGLOBNDM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PHGPKDJBHJF; // 0x18
	::UnityEngine::RectTransform* OBEMLOACGAF; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::RectTransform* OFNDMBEELON; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* ECJHBBIFIFK; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFILGLOBNDM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFILGLOBNDM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DFILGLOBNDM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFILGLOBNDM_KGEBDLGBGNM_OFFSET))(this);
	}
};
