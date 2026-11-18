#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
class ShaderAniHelp;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define IKJAHAEMAEB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1657E320)
#define IKJAHAEMAEB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1657E250)
#define IKJAHAEMAEB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1657E060)
#define IKJAHAEMAEB__CTOR_OFFSET UNITYSDK_OFFSET(0x1657E310)

inline static constexpr unsigned int IKJAHAEMAEB_TypeDefinitionIndex = 79516;

class IKJAHAEMAEB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::ShaderAniHelp* OBEMLOACGAF; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30
	::LGINJIKKBJA* KADDHBOOKAC; // 0x38
	::FGCOIBFFCHB* BPECPPJFIMK; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJAHAEMAEB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKJAHAEMAEB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKJAHAEMAEB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IKJAHAEMAEB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
