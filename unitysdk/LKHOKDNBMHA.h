#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define LKHOKDNBMHA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16C5F700)
#define LKHOKDNBMHA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C5F610)
#define LKHOKDNBMHA__CTOR_OFFSET UNITYSDK_OFFSET(0x16C5F6F0)

inline static constexpr unsigned int LKHOKDNBMHA_TypeDefinitionIndex = 86355;

class LKHOKDNBMHA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x18
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHOKDNBMHA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKHOKDNBMHA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKHOKDNBMHA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
