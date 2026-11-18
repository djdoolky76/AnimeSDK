#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENDBGIPMOFN;
class FPEEPFBOGDP_CIJIEKNDICN;

#define FPEEPFBOGDP_IPBIFENHEHI_MABKCKGGPGE_OFFSET UNITYSDK_OFFSET(0x1323EED0)
#define FPEEPFBOGDP_IPBIFENHEHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1323EEC0)

inline static constexpr unsigned int FPEEPFBOGDP_IPBIFENHEHI_TypeDefinitionIndex = 71668;

class FPEEPFBOGDP_IPBIFENHEHI : public ::System::Object
{
public:
	::ENDBGIPMOFN* GPMOKAFOLBL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPEEPFBOGDP_IPBIFENHEHI__CTOR_OFFSET))(this);
	}

	::System::Boolean MABKCKGGPGE(::FPEEPFBOGDP_CIJIEKNDICN* EJCBEJMGFAJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::FPEEPFBOGDP_CIJIEKNDICN*))((::PBYTE)hIl2Cpp + FPEEPFBOGDP_IPBIFENHEHI_MABKCKGGPGE_OFFSET))(this, EJCBEJMGFAJ);
	}
};
