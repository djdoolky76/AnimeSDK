#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define FPIHJGBGEDF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F004A0)
#define FPIHJGBGEDF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F003A0)
#define FPIHJGBGEDF__CTOR_OFFSET UNITYSDK_OFFSET(0x15F00490)

inline static constexpr unsigned int FPIHJGBGEDF_TypeDefinitionIndex = 66635;

class FPIHJGBGEDF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* MCHBBPJHNCK; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::Animation* IEOIENFFIGH; // 0x28
	::UnityEngine::RectTransform* EPFBIOCOAMO; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPIHJGBGEDF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPIHJGBGEDF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FPIHJGBGEDF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
