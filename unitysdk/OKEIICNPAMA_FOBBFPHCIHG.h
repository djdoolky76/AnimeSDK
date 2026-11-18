#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_FOBBFPHCIHG_GCAIMJAHNJN_OFFSET UNITYSDK_OFFSET(0xE15E320)
#define OKEIICNPAMA_FOBBFPHCIHG_MHLJBOLMMCA_OFFSET UNITYSDK_OFFSET(0xE15E310)
#define OKEIICNPAMA_FOBBFPHCIHG__CTOR_OFFSET UNITYSDK_OFFSET(0xE15E300)

inline static constexpr unsigned int OKEIICNPAMA_FOBBFPHCIHG_TypeDefinitionIndex = 87989;

class OKEIICNPAMA_FOBBFPHCIHG : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FOBBFPHCIHG__CTOR_OFFSET))(this);
	}

	::System::Void MHLJBOLMMCA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FOBBFPHCIHG_MHLJBOLMMCA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void GCAIMJAHNJN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FOBBFPHCIHG_GCAIMJAHNJN_OFFSET))(this, PIIPCLCCOIG);
	}
};
