#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CAKHIFCPOKM_GLPPHGKHOPP_ELKOGJHLLJM_OFFSET UNITYSDK_OFFSET(0x1399A7A0)
#define CAKHIFCPOKM_GLPPHGKHOPP_PLCMBGLFJLI_OFFSET UNITYSDK_OFFSET(0x1399A790)
#define CAKHIFCPOKM_GLPPHGKHOPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1399A780)

inline static constexpr unsigned int CAKHIFCPOKM_GLPPHGKHOPP_TypeDefinitionIndex = 79968;

class CAKHIFCPOKM_GLPPHGKHOPP : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_GLPPHGKHOPP__CTOR_OFFSET))(this);
	}

	::System::Void PLCMBGLFJLI(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_GLPPHGKHOPP_PLCMBGLFJLI_OFFSET))(this, JMFEPDAHBED);
	}

	::System::Void ELKOGJHLLJM(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_GLPPHGKHOPP_ELKOGJHLLJM_OFFSET))(this, GLAOEHCGCFO);
	}
};
