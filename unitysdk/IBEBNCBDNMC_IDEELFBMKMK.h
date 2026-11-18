#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GIHGFNHCBEI;

#define IBEBNCBDNMC_IDEELFBMKMK_BDIEIIJGCGL_OFFSET UNITYSDK_OFFSET(0x12E9E8A0)
#define IBEBNCBDNMC_IDEELFBMKMK__CTOR_OFFSET UNITYSDK_OFFSET(0x12E9E890)

inline static constexpr unsigned int IBEBNCBDNMC_IDEELFBMKMK_TypeDefinitionIndex = 45417;

class IBEBNCBDNMC_IDEELFBMKMK : public ::System::Object
{
public:
	::GIHGFNHCBEI* BGNPIFFIMME; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_IDEELFBMKMK__CTOR_OFFSET))(this);
	}

	::System::Boolean BDIEIIJGCGL(::System::Int32 KDDJHNKKCAG)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IBEBNCBDNMC_IDEELFBMKMK_BDIEIIJGCGL_OFFSET))(this, KDDJHNKKCAG);
	}
};
