#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define MNLPBPMPNBC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1077F8D0)
#define MNLPBPMPNBC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1077F830)
#define MNLPBPMPNBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1077F8C0)

inline static constexpr unsigned int MNLPBPMPNBC_TypeDefinitionIndex = 76051;

class MNLPBPMPNBC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNLPBPMPNBC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNLPBPMPNBC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNLPBPMPNBC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
