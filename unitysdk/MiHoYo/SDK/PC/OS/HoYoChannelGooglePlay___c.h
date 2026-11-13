#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS { class HoYoChannelConsumeResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF7E840)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF7E880)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__PROCESSENTITLEMENT_B__18_1_OFFSET UNITYSDK_OFFSET(0x1BF7E8A0)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__VERIFYORDER_B__13_3_OFFSET UNITYSDK_OFFSET(0x1BF7E890)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelGooglePlay___c_TypeDefinitionIndex = 8589;

	class HoYoChannelGooglePlay___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>** StaticGet___9__18_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x13B50);
		}

		static ::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>** StaticGet___9__13_3()
		{
			return (::System::Action_1<::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x13B58);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x13B60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C_CTOR_OFFSET))(this);
		}

		::System::Void _VerifyOrder_b__13_3(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__VERIFYORDER_B__13_3_OFFSET))(this, a1);
		}

		::System::Void _ProcessEntitlement_b__18_1(::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PC::OS::HoYoChannelConsumeResult*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELGOOGLEPLAY___C__PROCESSENTITLEMENT_B__18_1_OFFSET))(this, a1);
		}

	};
}
