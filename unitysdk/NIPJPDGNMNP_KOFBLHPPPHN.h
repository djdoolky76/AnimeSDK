#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define NIPJPDGNMNP_KOFBLHPPPHN_CBCBPKFHHIB_OFFSET UNITYSDK_OFFSET(0xE1A36F0)
#define NIPJPDGNMNP_KOFBLHPPPHN_EMDDKFDAANE_OFFSET UNITYSDK_OFFSET(0xE1A3700)
#define NIPJPDGNMNP_KOFBLHPPPHN__CTOR_OFFSET UNITYSDK_OFFSET(0xE1A20F0)

inline static constexpr unsigned int NIPJPDGNMNP_KOFBLHPPPHN_TypeDefinitionIndex = 69472;

class NIPJPDGNMNP_KOFBLHPPPHN : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* IFKOKLCPMNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIPJPDGNMNP_KOFBLHPPPHN__CTOR_OFFSET))(this);
	}

	::System::Void CBCBPKFHHIB(::OAEFGCLEHHO* GLAOEHCGCFO)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NIPJPDGNMNP_KOFBLHPPPHN_CBCBPKFHHIB_OFFSET))(this, GLAOEHCGCFO);
	}

	::System::Void EMDDKFDAANE(::OAEFGCLEHHO* JMFEPDAHBED)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + NIPJPDGNMNP_KOFBLHPPPHN_EMDDKFDAANE_OFFSET))(this, JMFEPDAHBED);
	}
};
