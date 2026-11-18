#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CPNBJODNFIK;
class JGNCILNLFEE;
class OAEFGCLEHHO;
namespace System { class Action; }

#define CPNBJODNFIK_DKENNLAOAPC_EBNKAFAABEB_OFFSET UNITYSDK_OFFSET(0x19D4B560)
#define CPNBJODNFIK_DKENNLAOAPC_KKPCPFEJFEC_OFFSET UNITYSDK_OFFSET(0x19D4B5A0)
#define CPNBJODNFIK_DKENNLAOAPC__CTOR_OFFSET UNITYSDK_OFFSET(0x19D495F0)

inline static constexpr unsigned int CPNBJODNFIK_DKENNLAOAPC_TypeDefinitionIndex = 49701;

class CPNBJODNFIK_DKENNLAOAPC : public ::System::Object
{
public:
	::CPNBJODNFIK* KLHPEBKNIFB; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18
	::System::Action* OLBAKFLBNIG; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNBJODNFIK_DKENNLAOAPC__CTOR_OFFSET))(this);
	}

	::System::Void EBNKAFAABEB(::JGNCILNLFEE* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::JGNCILNLFEE*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_DKENNLAOAPC_EBNKAFAABEB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void KKPCPFEJFEC(::OAEFGCLEHHO* BLLNHDIDKPA)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CPNBJODNFIK_DKENNLAOAPC_KKPCPFEJFEC_OFFSET))(this, BLLNHDIDKPA);
	}
};
