#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define FLLABPLGNGF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x179B4B00)
#define FLLABPLGNGF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179B4A60)
#define FLLABPLGNGF__CTOR_OFFSET UNITYSDK_OFFSET(0x179B4AF0)

inline static constexpr unsigned int FLLABPLGNGF_TypeDefinitionIndex = 76586;

class FLLABPLGNGF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLLABPLGNGF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLLABPLGNGF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FLLABPLGNGF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
