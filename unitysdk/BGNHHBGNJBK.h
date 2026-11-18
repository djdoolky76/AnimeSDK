#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUIDamageTMPEffect;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define BGNHHBGNJBK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14C42980)
#define BGNHHBGNJBK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14C42870)
#define BGNHHBGNJBK__CTOR_OFFSET UNITYSDK_OFFSET(0x14C42970)

inline static constexpr unsigned int BGNHHBGNJBK_TypeDefinitionIndex = 75003;

class BGNHHBGNJBK : public ::GIBMJLOJLKD
{
public:
	::MonoUIDamageTMPEffect* AMMJAMODHCO; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20
	::UnityEngine::Transform* GJFKDEHNOFK; // 0x28
	::UnityEngine::RectTransform* KIOKABONMEG; // 0x30
	::UnityEngine::RectTransform* PMCLJMMPEEH; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNHHBGNJBK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGNHHBGNJBK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BGNHHBGNJBK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
