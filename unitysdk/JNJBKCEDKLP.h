#pragma once
#include "unitysdk/unitysdk.h"

#define JNJBKCEDKLP_CTOR_OFFSET UNITYSDK_OFFSET(0x111F0)
#define JNJBKCEDKLP_GET_X_OFFSET UNITYSDK_OFFSET(0xE620)
#define JNJBKCEDKLP_GET_Y_OFFSET UNITYSDK_OFFSET(0xFE70)
#define JNJBKCEDKLP_SET_X_OFFSET UNITYSDK_OFFSET(0xAF40)
#define JNJBKCEDKLP_SET_Y_OFFSET UNITYSDK_OFFSET(0xFE80)

	struct alignas(4) JNJBKCEDKLP
	{
		::System::Int32 _x_k__BackingField; // 0x10
		::System::Int32 _y_k__BackingField; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + JNJBKCEDKLP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJBKCEDKLP_GET_X_OFFSET))(this);
		}

		::System::Void set_x(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNJBKCEDKLP_SET_X_OFFSET))(this, a1);
		}

		::System::Int32 get_y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNJBKCEDKLP_GET_Y_OFFSET))(this);
		}

		::System::Void set_y(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNJBKCEDKLP_SET_Y_OFFSET))(this, a1);
		}

	};
