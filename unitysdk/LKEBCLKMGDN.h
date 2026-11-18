#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define LKEBCLKMGDN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1257BF90)
#define LKEBCLKMGDN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1257BED0)
#define LKEBCLKMGDN__CTOR_OFFSET UNITYSDK_OFFSET(0x1257BF80)

inline static constexpr unsigned int LKEBCLKMGDN_TypeDefinitionIndex = 89876;

class LKEBCLKMGDN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* CIPIDBOOIIL; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKEBCLKMGDN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKEBCLKMGDN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKEBCLKMGDN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
