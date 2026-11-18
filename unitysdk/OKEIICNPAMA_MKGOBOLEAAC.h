#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_MKGOBOLEAAC_HEGELDCBCJB_OFFSET UNITYSDK_OFFSET(0xE15E340)
#define OKEIICNPAMA_MKGOBOLEAAC_HOHJCKPJECE_OFFSET UNITYSDK_OFFSET(0xE15E350)
#define OKEIICNPAMA_MKGOBOLEAAC__CTOR_OFFSET UNITYSDK_OFFSET(0xE15E330)

inline static constexpr unsigned int OKEIICNPAMA_MKGOBOLEAAC_TypeDefinitionIndex = 87994;

class OKEIICNPAMA_MKGOBOLEAAC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_MKGOBOLEAAC__CTOR_OFFSET))(this);
	}

	::System::Void HEGELDCBCJB(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_MKGOBOLEAAC_HEGELDCBCJB_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HOHJCKPJECE(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_MKGOBOLEAAC_HOHJCKPJECE_OFFSET))(this, PIIPCLCCOIG);
	}
};
