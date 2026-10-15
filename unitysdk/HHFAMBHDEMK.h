#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define HHFAMBHDEMK_CTOR_OFFSET UNITYSDK_OFFSET(0x15CCA3F0)
#define HHFAMBHDEMK_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x15CCA3D0)
#define HHFAMBHDEMK_GET_LV3TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x15CCA3B0)
#define HHFAMBHDEMK_GET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x15CCA390)
#define HHFAMBHDEMK_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x15CCA3E0)
#define HHFAMBHDEMK_SET_LV3TOGGLENAME_OFFSET UNITYSDK_OFFSET(0x15CCA3C0)
#define HHFAMBHDEMK_SET_REQUIREDCASTTIME_OFFSET UNITYSDK_OFFSET(0x15CCA3A0)

inline static constexpr unsigned int HHFAMBHDEMK_TypeDefinitionIndex = 75837;

	class HHFAMBHDEMK
	{
	public:
		::System::String* _LV3ToggleName_k__BackingField; // 0x18
		::System::Single _RequiredCastTime_k__BackingField; // 0x20
		::System::Single _CurrentTime_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_CTOR_OFFSET))(this);
		}

		::System::Single get_RequiredCastTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_GET_REQUIREDCASTTIME_OFFSET))(this);
		}

		::System::Void set_RequiredCastTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_SET_REQUIREDCASTTIME_OFFSET))(this, a1);
		}

		::System::String* get_LV3ToggleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_GET_LV3TOGGLENAME_OFFSET))(this);
		}

		::System::Void set_LV3ToggleName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_SET_LV3TOGGLENAME_OFFSET))(this, a1);
		}

		::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_GET_CURRENTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HHFAMBHDEMK_SET_CURRENTTIME_OFFSET))(this, a1);
		}

	};
