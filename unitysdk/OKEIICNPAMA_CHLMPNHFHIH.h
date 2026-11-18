#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_CHLMPNHFHIH_CIAKLNEFINL_OFFSET UNITYSDK_OFFSET(0x14F89860)
#define OKEIICNPAMA_CHLMPNHFHIH_IGJAJLLMDHO_OFFSET UNITYSDK_OFFSET(0x14F89850)
#define OKEIICNPAMA_CHLMPNHFHIH__CTOR_OFFSET UNITYSDK_OFFSET(0x14F89840)

inline static constexpr unsigned int OKEIICNPAMA_CHLMPNHFHIH_TypeDefinitionIndex = 87986;

class OKEIICNPAMA_CHLMPNHFHIH : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CHLMPNHFHIH__CTOR_OFFSET))(this);
	}

	::System::Void IGJAJLLMDHO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CHLMPNHFHIH_IGJAJLLMDHO_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void CIAKLNEFINL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_CHLMPNHFHIH_CIAKLNEFINL_OFFSET))(this, PIIPCLCCOIG);
	}
};
