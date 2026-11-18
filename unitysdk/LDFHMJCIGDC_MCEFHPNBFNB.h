#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDFHMJCIGDC_MCEFHPNBFNB_MADJOKEIJPD_OFFSET UNITYSDK_OFFSET(0x17683B70)
#define LDFHMJCIGDC_MCEFHPNBFNB__CTOR_OFFSET UNITYSDK_OFFSET(0x17683B60)

inline static constexpr unsigned int LDFHMJCIGDC_MCEFHPNBFNB_TypeDefinitionIndex = 49148;

class LDFHMJCIGDC_MCEFHPNBFNB : public ::System::Object
{
public:
	::System::Int32 PAEEEHKILOC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_MCEFHPNBFNB__CTOR_OFFSET))(this);
	}

	::System::Boolean MADJOKEIJPD(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_MCEFHPNBFNB_MADJOKEIJPD_OFFSET))(this, HAAEBCOBKFF);
	}
};
