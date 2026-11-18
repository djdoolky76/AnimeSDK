#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define BMBCHBKBANF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1692CE10)
#define BMBCHBKBANF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1692CD70)
#define BMBCHBKBANF__CTOR_OFFSET UNITYSDK_OFFSET(0x1692CE00)

inline static constexpr unsigned int BMBCHBKBANF_TypeDefinitionIndex = 44200;

class BMBCHBKBANF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MBKACMJJMBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMBCHBKBANF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMBCHBKBANF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BMBCHBKBANF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
