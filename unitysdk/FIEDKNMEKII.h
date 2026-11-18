#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define FIEDKNMEKII_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x156BE840)
#define FIEDKNMEKII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x156BE760)
#define FIEDKNMEKII__CTOR_OFFSET UNITYSDK_OFFSET(0x156BE830)

inline static constexpr unsigned int FIEDKNMEKII_TypeDefinitionIndex = 74493;

class FIEDKNMEKII : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::UnityEngine::RectTransform* KNLPBPPPHBE; // 0x20
	::UnityEngine::Transform* KKBHLPCGFLN; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIEDKNMEKII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIEDKNMEKII_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FIEDKNMEKII_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
