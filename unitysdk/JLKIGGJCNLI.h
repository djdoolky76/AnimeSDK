#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define JLKIGGJCNLI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x194609C0)
#define JLKIGGJCNLI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19460920)
#define JLKIGGJCNLI__CTOR_OFFSET UNITYSDK_OFFSET(0x194609B0)

inline static constexpr unsigned int JLKIGGJCNLI_TypeDefinitionIndex = 76514;

class JLKIGGJCNLI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MIOFCHHGMAG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLKIGGJCNLI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLKIGGJCNLI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JLKIGGJCNLI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
