#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IEHNJJPOMNG;

#define DEJMKFCMPNP_KDCNKKCMMJL_HCFCJJCNDFC_OFFSET UNITYSDK_OFFSET(0x1974BC50)
#define DEJMKFCMPNP_KDCNKKCMMJL__CTOR_OFFSET UNITYSDK_OFFSET(0x1974B610)

inline static constexpr unsigned int DEJMKFCMPNP_KDCNKKCMMJL_TypeDefinitionIndex = 73458;

class DEJMKFCMPNP_KDCNKKCMMJL : public ::System::Object
{
public:
	::System::Int32 FBPAJLKHALF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJMKFCMPNP_KDCNKKCMMJL__CTOR_OFFSET))(this);
	}

	::System::Boolean HCFCJJCNDFC(::IEHNJJPOMNG* PCEFKJHBDDF)
	{
		return ((::System::Boolean(*)(::PVOID, ::IEHNJJPOMNG*))((::PBYTE)hIl2Cpp + DEJMKFCMPNP_KDCNKKCMMJL_HCFCJJCNDFC_OFFSET))(this, PCEFKJHBDDF);
	}
};
