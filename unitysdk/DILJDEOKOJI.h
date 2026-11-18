#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define DILJDEOKOJI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148AAAB0)
#define DILJDEOKOJI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148AA9D0)
#define DILJDEOKOJI__CTOR_OFFSET UNITYSDK_OFFSET(0x148AAAA0)

inline static constexpr unsigned int DILJDEOKOJI_TypeDefinitionIndex = 75801;

class DILJDEOKOJI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* KIOKABONMEG; // 0x18
	::UnityEngine::CanvasGroup* PHLNDNMBFOM; // 0x20
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DILJDEOKOJI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DILJDEOKOJI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DILJDEOKOJI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
