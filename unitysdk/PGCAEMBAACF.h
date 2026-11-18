#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define PGCAEMBAACF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1949D380)
#define PGCAEMBAACF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1949D270)
#define PGCAEMBAACF__CTOR_OFFSET UNITYSDK_OFFSET(0x1949D370)

inline static constexpr unsigned int PGCAEMBAACF_TypeDefinitionIndex = 71763;

class PGCAEMBAACF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* HHIIBMBKIKD; // 0x18
	::UnityEngine::CanvasGroup* PDACHPLBKIE; // 0x20
	::UnityEngine::RectTransform* GCNEPOLIPMJ; // 0x28
	::UnityEngine::RectTransform* PBFFLOBBBBK; // 0x30
	::UnityEngine::RectTransform* PJAIICIHPDD; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCAEMBAACF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGCAEMBAACF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PGCAEMBAACF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
