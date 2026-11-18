#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define CAKHIFCPOKM_DOPPIALNLNC_BPAOLLBAEOD_OFFSET UNITYSDK_OFFSET(0x1477C010)
#define CAKHIFCPOKM_DOPPIALNLNC__CTOR_OFFSET UNITYSDK_OFFSET(0x1477C000)

inline static constexpr unsigned int CAKHIFCPOKM_DOPPIALNLNC_TypeDefinitionIndex = 79970;

class CAKHIFCPOKM_DOPPIALNLNC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_DOPPIALNLNC__CTOR_OFFSET))(this);
	}

	::System::Void BPAOLLBAEOD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + CAKHIFCPOKM_DOPPIALNLNC_BPAOLLBAEOD_OFFSET))(this, PIIPCLCCOIG);
	}
};
