#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OAEFGCLEHHO;
namespace System { class Action; }

#define KFBAENHGMFB_LOBKNNMCICF_AJAADOHFFOL_OFFSET UNITYSDK_OFFSET(0x17702D60)
#define KFBAENHGMFB_LOBKNNMCICF__CTOR_OFFSET UNITYSDK_OFFSET(0x17700990)

inline static constexpr unsigned int KFBAENHGMFB_LOBKNNMCICF_TypeDefinitionIndex = 78579;

class KFBAENHGMFB_LOBKNNMCICF : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LOBKNNMCICF__CTOR_OFFSET))(this);
	}

	::System::Void AJAADOHFFOL(::OAEFGCLEHHO* BHDNBGLCNOM)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + KFBAENHGMFB_LOBKNNMCICF_AJAADOHFFOL_OFFSET))(this, BHDNBGLCNOM);
	}
};
