#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }

#define IPLCGHDLPJH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13CA32F0)
#define IPLCGHDLPJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13CA3250)
#define IPLCGHDLPJH__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA32E0)

inline static constexpr unsigned int IPLCGHDLPJH_TypeDefinitionIndex = 77483;

class IPLCGHDLPJH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* MBKACMJJMBH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPLCGHDLPJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPLCGHDLPJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IPLCGHDLPJH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
