#pragma once
#include "unitysdk/unitysdk.h"

#define HOGJOEEDMJD_CTOR_OFFSET UNITYSDK_OFFSET(0x16980)
#define HOGJOEEDMJD_GET_ENDVIDEOID_OFFSET UNITYSDK_OFFSET(0xACE0)
#define HOGJOEEDMJD_GET_LOOPVIDEOID_OFFSET UNITYSDK_OFFSET(0x12B10)
#define HOGJOEEDMJD_GET_STARTVIDEOID_OFFSET UNITYSDK_OFFSET(0xE600)

inline static constexpr unsigned int HOGJOEEDMJD_TypeDefinitionIndex = 74946;

	struct alignas(4) HOGJOEEDMJD
	{
		::System::UInt32 _StartVideoID_k__BackingField; // 0x10
		::System::UInt32 _LoopVideoID_k__BackingField; // 0x14
		::System::UInt32 _EndVideoID_k__BackingField; // 0x18
		::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + HOGJOEEDMJD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_StartVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJOEEDMJD_GET_STARTVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_LoopVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJOEEDMJD_GET_LOOPVIDEOID_OFFSET))(this);
		}

		::System::UInt32 get_EndVideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGJOEEDMJD_GET_ENDVIDEOID_OFFSET))(this);
		}

	};
