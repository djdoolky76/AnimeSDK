#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define OMELHEICAMH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF19D1C0)
#define OMELHEICAMH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF19D0C0)
#define OMELHEICAMH__CTOR_OFFSET UNITYSDK_OFFSET(0xF19D1B0)

inline static constexpr unsigned int OMELHEICAMH_TypeDefinitionIndex = 76235;

class OMELHEICAMH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* HNDJNNKHMGG; // 0x18
	::UnityEngine::RectTransform* BPLAOHMAOMF; // 0x20
	::UnityEngine::RectTransform* INLEJCKCFEO; // 0x28
	::UnityEngine::RectTransform* PMEOOCLPLBK; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMELHEICAMH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OMELHEICAMH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OMELHEICAMH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
