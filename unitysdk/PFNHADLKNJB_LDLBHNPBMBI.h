#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KBCDMCDHICF;

#define PFNHADLKNJB_LDLBHNPBMBI_MJMKFFANPBL_OFFSET UNITYSDK_OFFSET(0x14B997F0)
#define PFNHADLKNJB_LDLBHNPBMBI__CTOR_OFFSET UNITYSDK_OFFSET(0x14B997E0)

inline static constexpr unsigned int PFNHADLKNJB_LDLBHNPBMBI_TypeDefinitionIndex = 86097;

class PFNHADLKNJB_LDLBHNPBMBI : public ::System::Object
{
public:
	::KBCDMCDHICF* AAOCANGHBDG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNHADLKNJB_LDLBHNPBMBI__CTOR_OFFSET))(this);
	}

	::System::Void MJMKFFANPBL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFNHADLKNJB_LDLBHNPBMBI_MJMKFFANPBL_OFFSET))(this);
	}
};
