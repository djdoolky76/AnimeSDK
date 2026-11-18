#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_FFLGFGNGDDL_IIHJFLIGNGH_OFFSET UNITYSDK_OFFSET(0xE15E2F0)
#define OKEIICNPAMA_FFLGFGNGDDL_JIPPIJMAEIC_OFFSET UNITYSDK_OFFSET(0xE15E2E0)
#define OKEIICNPAMA_FFLGFGNGDDL__CTOR_OFFSET UNITYSDK_OFFSET(0xE15E2D0)

inline static constexpr unsigned int OKEIICNPAMA_FFLGFGNGDDL_TypeDefinitionIndex = 87976;

class OKEIICNPAMA_FFLGFGNGDDL : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FFLGFGNGDDL__CTOR_OFFSET))(this);
	}

	::System::Void JIPPIJMAEIC(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FFLGFGNGDDL_JIPPIJMAEIC_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void IIHJFLIGNGH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_FFLGFGNGDDL_IIHJFLIGNGH_OFFSET))(this, PIIPCLCCOIG);
	}
};
