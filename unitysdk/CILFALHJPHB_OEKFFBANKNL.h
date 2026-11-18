#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CILFALHJPHB_NLGMCNOJMOA.h"
#include "unitysdk/System/Object.h"

#define CILFALHJPHB_OEKFFBANKNL_CIIJHIBGMDJ_OFFSET UNITYSDK_OFFSET(0x20007850)
#define CILFALHJPHB_OEKFFBANKNL__CTOR_OFFSET UNITYSDK_OFFSET(0x20007840)

inline static constexpr unsigned int CILFALHJPHB_OEKFFBANKNL_TypeDefinitionIndex = 96533;

class CILFALHJPHB_OEKFFBANKNL : public ::System::Object
{
public:
	::CILFALHJPHB_NLGMCNOJMOA PMBKCKOBCDN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_OEKFFBANKNL__CTOR_OFFSET))(this);
	}

	::System::Void CIIJHIBGMDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILFALHJPHB_OEKFFBANKNL_CIIJHIBGMDJ_OFFSET))(this);
	}
};
