#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_IAKFJEBADLC_CHHCOAIOOOH_OFFSET UNITYSDK_OFFSET(0xFB92E40)
#define OKEIICNPAMA_IAKFJEBADLC_FIOLLCJLFCE_OFFSET UNITYSDK_OFFSET(0xFB92E50)
#define OKEIICNPAMA_IAKFJEBADLC__CTOR_OFFSET UNITYSDK_OFFSET(0xFB92E30)

inline static constexpr unsigned int OKEIICNPAMA_IAKFJEBADLC_TypeDefinitionIndex = 87980;

class OKEIICNPAMA_IAKFJEBADLC : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_IAKFJEBADLC__CTOR_OFFSET))(this);
	}

	::System::Void CHHCOAIOOOH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_IAKFJEBADLC_CHHCOAIOOOH_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FIOLLCJLFCE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_IAKFJEBADLC_FIOLLCJLFCE_OFFSET))(this, PIIPCLCCOIG);
	}
};
