#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_GNFEJIEELFD_FGJEIIOGKJM_OFFSET UNITYSDK_OFFSET(0x16C1C0B0)
#define OKEIICNPAMA_GNFEJIEELFD_HEBIIJOAKOB_OFFSET UNITYSDK_OFFSET(0x16C1C0A0)
#define OKEIICNPAMA_GNFEJIEELFD__CTOR_OFFSET UNITYSDK_OFFSET(0x16C1C090)

inline static constexpr unsigned int OKEIICNPAMA_GNFEJIEELFD_TypeDefinitionIndex = 87983;

class OKEIICNPAMA_GNFEJIEELFD : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_GNFEJIEELFD__CTOR_OFFSET))(this);
	}

	::System::Void HEBIIJOAKOB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_GNFEJIEELFD_HEBIIJOAKOB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FGJEIIOGKJM(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_GNFEJIEELFD_FGJEIIOGKJM_OFFSET))(this, PIIPCLCCOIG);
	}
};
