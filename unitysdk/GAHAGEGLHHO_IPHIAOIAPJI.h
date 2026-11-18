#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LGCNEDCMPKM.h"
#include "unitysdk/System/Object.h"

class GAHAGEGLHHO;

#define GAHAGEGLHHO_IPHIAOIAPJI_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x165E20E0)
#define GAHAGEGLHHO_IPHIAOIAPJI__CTOR_OFFSET UNITYSDK_OFFSET(0x165E20D0)

inline static constexpr unsigned int GAHAGEGLHHO_IPHIAOIAPJI_TypeDefinitionIndex = 86560;

class GAHAGEGLHHO_IPHIAOIAPJI : public ::System::Object
{
public:
	::LGCNEDCMPKM BPBLBAJCDAH; // 0x10
	::GAHAGEGLHHO* KLHPEBKNIFB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHAGEGLHHO_IPHIAOIAPJI__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAHAGEGLHHO_IPHIAOIAPJI_LIDNPLMPHAL_OFFSET))(this);
	}
};
