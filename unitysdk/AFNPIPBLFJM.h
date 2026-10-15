#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNIDONCOAEE;

#define AFNPIPBLFJM_CTOR_OFFSET UNITYSDK_OFFSET(0xCF1AAB0)
#define AFNPIPBLFJM_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCF1AA50)
#define AFNPIPBLFJM_GET_POINTS_OFFSET UNITYSDK_OFFSET(0xCF1AA70)
#define AFNPIPBLFJM_GET_RANK_OFFSET UNITYSDK_OFFSET(0xCF1AA90)
#define AFNPIPBLFJM_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xCF1AA60)
#define AFNPIPBLFJM_SET_POINTS_OFFSET UNITYSDK_OFFSET(0xCF1AA80)
#define AFNPIPBLFJM_SET_RANK_OFFSET UNITYSDK_OFFSET(0xCF1AAA0)

	class AFNPIPBLFJM : public ::System::Object
	{
	public:
		::DNIDONCOAEE* _Config_k__BackingField; // 0x10
		::System::Int32 _Rank_k__BackingField; // 0x18
		::System::Int32 _Points_k__BackingField; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_CTOR_OFFSET))(this);
		}

		::DNIDONCOAEE* get_Config()
		{
			return ((::DNIDONCOAEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::DNIDONCOAEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNIDONCOAEE*))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_SET_CONFIG_OFFSET))(this, a1);
		}

		::System::Int32 get_Points()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_GET_POINTS_OFFSET))(this);
		}

		::System::Void set_Points(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_SET_POINTS_OFFSET))(this, a1);
		}

		::System::Int32 get_Rank()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_GET_RANK_OFFSET))(this);
		}

		::System::Void set_Rank(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AFNPIPBLFJM_SET_RANK_OFFSET))(this, a1);
		}

	};
