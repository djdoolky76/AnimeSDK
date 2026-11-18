#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define KBNNJKDEOGL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12977FD0)
#define KBNNJKDEOGL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12977E30)
#define KBNNJKDEOGL__CTOR_OFFSET UNITYSDK_OFFSET(0x12977FC0)

inline static constexpr unsigned int KBNNJKDEOGL_TypeDefinitionIndex = 84253;

class KBNNJKDEOGL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x18
	::UnityEngine::CanvasGroup* PNKGGGNEOOI; // 0x20
	::UnityEngine::CanvasGroup* HDHJDNGFKJG; // 0x28
	::GCIMMDDIFBJ* PMBABIEPGOG; // 0x30
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x38
	::UnityEngine::CanvasGroup* FMPKCHDCMBM; // 0x40
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x48
	::UnityEngine::RectTransform* OCJOCLEDABL; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNNJKDEOGL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBNNJKDEOGL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KBNNJKDEOGL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
