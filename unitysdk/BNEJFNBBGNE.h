#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define BNEJFNBBGNE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x113FD680)
#define BNEJFNBBGNE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x113FD5D0)
#define BNEJFNBBGNE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x113FD420)
#define BNEJFNBBGNE__CTOR_OFFSET UNITYSDK_OFFSET(0x113FD670)

inline static constexpr unsigned int BNEJFNBBGNE_TypeDefinitionIndex = 71286;

class BNEJFNBBGNE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x20
	::LGINJIKKBJA* KADDHBOOKAC; // 0x28
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEJFNBBGNE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNEJFNBBGNE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNEJFNBBGNE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNEJFNBBGNE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
