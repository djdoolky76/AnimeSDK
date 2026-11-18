#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }

#define BJIFEIAFOPI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18682770)
#define BJIFEIAFOPI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x186826B0)
#define BJIFEIAFOPI__CTOR_OFFSET UNITYSDK_OFFSET(0x18682760)

inline static constexpr unsigned int BJIFEIAFOPI_TypeDefinitionIndex = 85867;

class BJIFEIAFOPI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Animation* AOFAAKEELMK; // 0x18
	::UnityEngine::Animation* MHEKIELDBNC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIFEIAFOPI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJIFEIAFOPI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BJIFEIAFOPI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
