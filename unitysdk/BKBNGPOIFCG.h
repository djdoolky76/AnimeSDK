#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define BKBNGPOIFCG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18682E40)
#define BKBNGPOIFCG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x18682D80)
#define BKBNGPOIFCG__CTOR_OFFSET UNITYSDK_OFFSET(0x18682E30)

inline static constexpr unsigned int BKBNGPOIFCG_TypeDefinitionIndex = 73837;

class BKBNGPOIFCG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKBNGPOIFCG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKBNGPOIFCG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKBNGPOIFCG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
