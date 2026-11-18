#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define JPGMIFFOJCI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x155D3390)
#define JPGMIFFOJCI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x155D3290)
#define JPGMIFFOJCI__CTOR_OFFSET UNITYSDK_OFFSET(0x155D3380)

inline static constexpr unsigned int JPGMIFFOJCI_TypeDefinitionIndex = 75051;

class JPGMIFFOJCI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MINADKAGABL; // 0x18
	::UnityEngine::Transform* MCFBELGDPEE; // 0x20
	::UnityEngine::Animation* AHAJDJJNDAG; // 0x28
	::UnityEngine::Animation* HMJOILOJDAA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPGMIFFOJCI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPGMIFFOJCI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JPGMIFFOJCI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
