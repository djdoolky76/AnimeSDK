#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_LABPMMDJGKL_DGDDFNGKAME_OFFSET UNITYSDK_OFFSET(0x16C1C0D0)
#define OKEIICNPAMA_LABPMMDJGKL_ICOHMJKBFIO_OFFSET UNITYSDK_OFFSET(0x16C1C0E0)
#define OKEIICNPAMA_LABPMMDJGKL__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C0C0)

inline static constexpr unsigned int OKEIICNPAMA_LABPMMDJGKL_TypeDefinitionIndex = 87984;

class OKEIICNPAMA_LABPMMDJGKL : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LABPMMDJGKL__CTOR_OFFSET))(this);
	}

	::System::Void DGDDFNGKAME(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LABPMMDJGKL_DGDDFNGKAME_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void ICOHMJKBFIO(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_LABPMMDJGKL_ICOHMJKBFIO_OFFSET))(this, PIIPCLCCOIG);
	}
};
