#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define EMJPLAPMHJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13550BE0)
#define EMJPLAPMHJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13550B40)
#define EMJPLAPMHJA__CTOR_OFFSET UNITYSDK_OFFSET(0x13550BD0)

inline static constexpr unsigned int EMJPLAPMHJA_TypeDefinitionIndex = 90158;

class EMJPLAPMHJA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* MIOFCHHGMAG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJPLAPMHJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMJPLAPMHJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EMJPLAPMHJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
