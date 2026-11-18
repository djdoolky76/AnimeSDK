#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define PAFPKHBFLLL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1845BAD0)
#define PAFPKHBFLLL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1845BA10)
#define PAFPKHBFLLL__CTOR_OFFSET UNITYSDK_OFFSET(0x1845BAC0)

inline static constexpr unsigned int PAFPKHBFLLL_TypeDefinitionIndex = 43781;

class PAFPKHBFLLL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ONDPMDEBPME; // 0x18
	::UnityEngine::Transform* BPLCMMDMCFL; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAFPKHBFLLL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAFPKHBFLLL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PAFPKHBFLLL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
