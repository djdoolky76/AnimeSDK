#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define FLCNDDODIMG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165B1470)
#define FLCNDDODIMG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165B13E0)
#define FLCNDDODIMG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165B1260)
#define FLCNDDODIMG__CTOR_OFFSET UNITYSDK_OFFSET(0x165B1460)

inline static constexpr unsigned int FLCNDDODIMG_TypeDefinitionIndex = 88811;

class FLCNDDODIMG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x18
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCNDDODIMG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLCNDDODIMG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLCNDDODIMG_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLCNDDODIMG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
