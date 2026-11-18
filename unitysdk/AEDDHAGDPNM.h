#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AEDDHAGDPNM__CTOR_OFFSET UNITYSDK_OFFSET(0x154E4EA0)

inline static constexpr unsigned int AEDDHAGDPNM_TypeDefinitionIndex = 74525;

class AEDDHAGDPNM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEDDHAGDPNM__CTOR_OFFSET))(this);
	}
};
