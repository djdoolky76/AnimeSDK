#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_OGFFFCMBJDN_ACCDBEADOML_OFFSET UNITYSDK_OFFSET(0x16C1C100)
#define OKEIICNPAMA_OGFFFCMBJDN_DJNGCGMNOAJ_OFFSET UNITYSDK_OFFSET(0x16C1C110)
#define OKEIICNPAMA_OGFFFCMBJDN__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C0F0)

inline static constexpr unsigned int OKEIICNPAMA_OGFFFCMBJDN_TypeDefinitionIndex = 87977;

class OKEIICNPAMA_OGFFFCMBJDN : public ::System::Object
{
public:
	::System::Action* OLBAKFLBNIG; // 0x10
	::System::Action* EDNJGMKPFHG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_OGFFFCMBJDN__CTOR_OFFSET))(this);
	}

	::System::Void ACCDBEADOML(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_OGFFFCMBJDN_ACCDBEADOML_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void DJNGCGMNOAJ(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_OGFFFCMBJDN_DJNGCGMNOAJ_OFFSET))(this, PIIPCLCCOIG);
	}
};
