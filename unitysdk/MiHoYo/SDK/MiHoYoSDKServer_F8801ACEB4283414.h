#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK { class MiHoYoSDKServer; }

#define MIHOYO_SDK_MIHOYOSDKSERVER_F8801ACEB4283414_B3D4D68D6F0332E4_OFFSET UNITYSDK_OFFSET(0x2A00570)
#define MIHOYO_SDK_MIHOYOSDKSERVER_F8801ACEB4283414__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKServer_F8801ACEB4283414_TypeDefinitionIndex = 15821;

	class MiHoYoSDKServer_F8801ACEB4283414 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::MiHoYoSDKServer* A544919C800E2923; // 0x10
		::System::Int32 A3BDDE9D1F2C8C6A; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Byte>* E83E519C5C42896F; // 0x20
		::System::UInt32 A96B867D8BBB8B00; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F8801ACEB4283414__CTOR_OFFSET))(this);
		}

		::System::Void B3D4D68D6F0332E4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKSERVER_F8801ACEB4283414_B3D4D68D6F0332E4_OFFSET))(this);
		}
	};
}
