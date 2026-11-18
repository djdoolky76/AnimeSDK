#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define HHLAHKLHFBF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F37D70)
#define HHLAHKLHFBF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F37CA0)
#define HHLAHKLHFBF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F37B50)
#define HHLAHKLHFBF__CTOR_OFFSET UNITYSDK_OFFSET(0x16F37D60)

inline static constexpr unsigned int HHLAHKLHFBF_TypeDefinitionIndex = 85765;

class HHLAHKLHFBF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* PHEHCLKKBPA; // 0x18
	::UnityEngine::RectTransform* IJLCFNIBMLP; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLAHKLHFBF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHLAHKLHFBF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHLAHKLHFBF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHLAHKLHFBF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
