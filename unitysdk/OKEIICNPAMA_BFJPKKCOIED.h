#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_BFJPKKCOIED_FIBINHMJEJH_OFFSET UNITYSDK_OFFSET(0x1B7A16F0)
#define OKEIICNPAMA_BFJPKKCOIED_PMPDDONHIFE_OFFSET UNITYSDK_OFFSET(0x1B7A16E0)
#define OKEIICNPAMA_BFJPKKCOIED__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A16D0)

inline static constexpr unsigned int OKEIICNPAMA_BFJPKKCOIED_TypeDefinitionIndex = 87991;

class OKEIICNPAMA_BFJPKKCOIED : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_BFJPKKCOIED__CTOR_OFFSET))(this);
	}

	::System::Void PMPDDONHIFE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_BFJPKKCOIED_PMPDDONHIFE_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FIBINHMJEJH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_BFJPKKCOIED_FIBINHMJEJH_OFFSET))(this, PIIPCLCCOIG);
	}
};
