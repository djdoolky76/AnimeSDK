#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define OKEIICNPAMA_JEJBDKJMKPC_AJLPEGKDOFK_OFFSET UNITYSDK_OFFSET(0x13A67410)
#define OKEIICNPAMA_JEJBDKJMKPC_MDCFIKOPKFA_OFFSET UNITYSDK_OFFSET(0x13A67400)
#define OKEIICNPAMA_JEJBDKJMKPC__CTOR_OFFSET UNITYSDK_OFFSET(0x13A673F0)

inline static constexpr unsigned int OKEIICNPAMA_JEJBDKJMKPC_TypeDefinitionIndex = 87975;

class OKEIICNPAMA_JEJBDKJMKPC : public ::System::Object
{
public:
	::System::Action* EDNJGMKPFHG; // 0x10
	::System::Action* OLBAKFLBNIG; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JEJBDKJMKPC__CTOR_OFFSET))(this);
	}

	::System::Void MDCFIKOPKFA(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JEJBDKJMKPC_MDCFIKOPKFA_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void AJLPEGKDOFK(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + OKEIICNPAMA_JEJBDKJMKPC_AJLPEGKDOFK_OFFSET))(this, PIIPCLCCOIG);
	}
};
