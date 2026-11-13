#pragma once
#include "unitysdk/unitysdk.h"
class LPCECJIBEBN;

#define CPNHCLGMDCC_CTOR_OFFSET UNITYSDK_OFFSET(0x1990FD90)
#define CPNHCLGMDCC_GET_ADDITIVECONFIGS_OFFSET UNITYSDK_OFFSET(0x1990FCF0)
#define CPNHCLGMDCC_GET_ADDITIVECONFIG_OFFSET UNITYSDK_OFFSET(0x1990FD10)
#define CPNHCLGMDCC_GET_CURRENTCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1990FD70)
#define CPNHCLGMDCC_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1990FD50)
#define CPNHCLGMDCC_GET_ISRELEASECHARGING_OFFSET UNITYSDK_OFFSET(0x1990FD30)
#define CPNHCLGMDCC_SET_ADDITIVECONFIGS_OFFSET UNITYSDK_OFFSET(0x1990FD00)
#define CPNHCLGMDCC_SET_ADDITIVECONFIG_OFFSET UNITYSDK_OFFSET(0x1990FD20)
#define CPNHCLGMDCC_SET_CURRENTCHARGEVALUE_OFFSET UNITYSDK_OFFSET(0x1990FD80)
#define CPNHCLGMDCC_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1990FD60)
#define CPNHCLGMDCC_SET_ISRELEASECHARGING_OFFSET UNITYSDK_OFFSET(0x1990FD40)

inline static constexpr unsigned int CPNHCLGMDCC_TypeDefinitionIndex = 78155;

	class CPNHCLGMDCC
	{
	public:
		::Il2CppArray<::LPCECJIBEBN*>* _AdditiveConfigs_k__BackingField; // 0x18
		::LPCECJIBEBN* _AdditiveConfig_k__BackingField; // 0x20
		::System::Single _CurrentChargeValue_k__BackingField; // 0x28
		::System::Single _CurrentTime_k__BackingField; // 0x2C
		::System::Boolean _IsReleaseCharging_k__BackingField; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::LPCECJIBEBN*>* get_AdditiveConfigs()
		{
			return ((::Il2CppArray<::LPCECJIBEBN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_GET_ADDITIVECONFIGS_OFFSET))(this);
		}

		::System::Void set_AdditiveConfigs(::Il2CppArray<::LPCECJIBEBN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::LPCECJIBEBN*>*))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_SET_ADDITIVECONFIGS_OFFSET))(this, a1);
		}

		::LPCECJIBEBN* get_AdditiveConfig()
		{
			return ((::LPCECJIBEBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_GET_ADDITIVECONFIG_OFFSET))(this);
		}

		::System::Void set_AdditiveConfig(::LPCECJIBEBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LPCECJIBEBN*))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_SET_ADDITIVECONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsReleaseCharging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_GET_ISRELEASECHARGING_OFFSET))(this);
		}

		::System::Void set_IsReleaseCharging(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_SET_ISRELEASECHARGING_OFFSET))(this, a1);
		}

		::System::Single get_CurrentTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_GET_CURRENTTIME_OFFSET))(this);
		}

		::System::Void set_CurrentTime(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_SET_CURRENTTIME_OFFSET))(this, a1);
		}

		::System::Single get_CurrentChargeValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_GET_CURRENTCHARGEVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentChargeValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CPNHCLGMDCC_SET_CURRENTCHARGEVALUE_OFFSET))(this, a1);
		}

	};
