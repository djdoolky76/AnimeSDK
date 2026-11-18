#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define HMBOOJICAKK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x140C1160)
#define HMBOOJICAKK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x140C10A0)
#define HMBOOJICAKK__CTOR_OFFSET UNITYSDK_OFFSET(0x140C1150)

inline static constexpr unsigned int HMBOOJICAKK_TypeDefinitionIndex = 52734;

class HMBOOJICAKK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBOOJICAKK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMBOOJICAKK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HMBOOJICAKK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
