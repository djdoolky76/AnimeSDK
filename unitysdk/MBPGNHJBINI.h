#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MBPGNHJBINI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x151BAAD0)
#define MBPGNHJBINI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x151BA9F0)
#define MBPGNHJBINI__CTOR_OFFSET UNITYSDK_OFFSET(0x151BAAC0)

inline static constexpr unsigned int MBPGNHJBINI_TypeDefinitionIndex = 82022;

class MBPGNHJBINI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FJFCCFMPJAM; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBPGNHJBINI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBPGNHJBINI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MBPGNHJBINI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
