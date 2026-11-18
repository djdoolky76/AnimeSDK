#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_AOKLECHHMDL_OLFLLCOBLAD_OFFSET UNITYSDK_OFFSET(0x172D19D0)
#define OKEIICNPAMA_AOKLECHHMDL_OPLPDEILEEH_OFFSET UNITYSDK_OFFSET(0x172D19E0)
#define OKEIICNPAMA_AOKLECHHMDL__CTOR_OFFSET UNITYSDK_OFFSET(0x172D19C0)

inline static constexpr unsigned int OKEIICNPAMA_AOKLECHHMDL_TypeDefinitionIndex = 87988;

class OKEIICNPAMA_AOKLECHHMDL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_AOKLECHHMDL__CTOR_OFFSET))(this);
	}

	::System::Void OLFLLCOBLAD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_AOKLECHHMDL_OLFLLCOBLAD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void OPLPDEILEEH(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_AOKLECHHMDL_OPLPDEILEEH_OFFSET))(this, PIIPCLCCOIG);
	}
};
