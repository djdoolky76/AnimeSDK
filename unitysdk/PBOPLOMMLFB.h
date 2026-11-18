#pragma once
#include "unitysdk/unitysdk.h"

#define PBOPLOMMLFB_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x119543B0)
#define PBOPLOMMLFB_GET_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x11954550)
#define PBOPLOMMLFB_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x119542F0)
#define PBOPLOMMLFB_OOJFFGEGFON_OFFSET UNITYSDK_OFFSET(0x119545F0)
#define PBOPLOMMLFB__CTOR_OFFSET UNITYSDK_OFFSET(0x11954560)

inline static constexpr unsigned int PBOPLOMMLFB_TypeDefinitionIndex = 78769;

class PBOPLOMMLFB
{
public:
	::System::Double BJMBOABGKOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOPLOMMLFB__CTOR_OFFSET))(this);
	}

	::System::Double get_Timestamp()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOPLOMMLFB_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Single get_DeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOPLOMMLFB_GET_DELTATIME_OFFSET))(this);
	}

	::System::Boolean get_IsThreadSafeInWorkThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOPLOMMLFB_GET_ISTHREADSAFEINWORKTHREAD_OFFSET))(this);
	}

	::System::Void OOJFFGEGFON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBOPLOMMLFB_OOJFFGEGFON_OFFSET))(this);
	}
};
