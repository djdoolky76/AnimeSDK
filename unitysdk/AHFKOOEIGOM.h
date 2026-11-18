#pragma once
#include "unitysdk/unitysdk.h"

#define AHFKOOEIGOM_GET_DELTATIME_OFFSET UNITYSDK_OFFSET(0x154F8AD0)
#define AHFKOOEIGOM_GET_ISTHREADSAFEINWORKTHREAD_OFFSET UNITYSDK_OFFSET(0x154F8C70)
#define AHFKOOEIGOM_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0x154F8A10)
#define AHFKOOEIGOM_OOJFFGEGFON_OFFSET UNITYSDK_OFFSET(0x154F8D10)
#define AHFKOOEIGOM__CTOR_OFFSET UNITYSDK_OFFSET(0x154F8C80)

inline static constexpr unsigned int AHFKOOEIGOM_TypeDefinitionIndex = 79765;

class AHFKOOEIGOM
{
public:
	::System::Double BJMBOABGKOK; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKOOEIGOM__CTOR_OFFSET))(this);
	}

	::System::Double get_Timestamp()
	{
		return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKOOEIGOM_GET_TIMESTAMP_OFFSET))(this);
	}

	::System::Single get_DeltaTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKOOEIGOM_GET_DELTATIME_OFFSET))(this);
	}

	::System::Boolean get_IsThreadSafeInWorkThread()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKOOEIGOM_GET_ISTHREADSAFEINWORKTHREAD_OFFSET))(this);
	}

	::System::Void OOJFFGEGFON()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHFKOOEIGOM_OOJFFGEGFON_OFFSET))(this);
	}
};
