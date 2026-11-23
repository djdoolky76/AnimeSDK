#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Win { class DeviceLoginTips; }
namespace MiHoYo::SDK::Win { class NewDeviceInfoModel; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_EF6E324086FB72B4_BF3138F24160F012_OFFSET UNITYSDK_OFFSET(0x3953E80)
#define MIHOYO_SDK_WIN_DEVICELOGINTIPS_EF6E324086FB72B4__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int DeviceLoginTips_EF6E324086FB72B4_TypeDefinitionIndex = 12424;

	class DeviceLoginTips_EF6E324086FB72B4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MiHoYo::SDK::Win::NewDeviceInfoModel*>* B9B26B23B27A46C7; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_EF6E324086FB72B4__CTOR_OFFSET))(this);
		}

		::System::Void BF3138F24160F012(::MiHoYo::SDK::Win::DeviceLoginTips* F9ADA718944F49ED)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Win::DeviceLoginTips*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_DEVICELOGINTIPS_EF6E324086FB72B4_BF3138F24160F012_OFFSET))(this, F9ADA718944F49ED);
		}
	};
}
