#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF28A20)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF28A60)
#define MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CHECKENTITLEMENTS_B__23_1_OFFSET UNITYSDK_OFFSET(0x1BF28A70)

namespace MiHoYo::SDK::PC::OS
{
	inline static constexpr unsigned int HoYoChannelEpic___c_TypeDefinitionIndex = 8524;

	class HoYoChannelEpic___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x16260);
		}

		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__23_1()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.PC.OS", "<>c")->GetStaticField(0x16268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C_CTOR_OFFSET))(this);
		}

		::System::Void _CheckEntitlements_b__23_1(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_HOYOCHANNELEPIC___C__CHECKENTITLEMENTS_B__23_1_OFFSET))(this, a1);
		}

	};
}
