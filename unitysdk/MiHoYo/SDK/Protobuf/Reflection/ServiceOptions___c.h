#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC10980)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC109C0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BC109D0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	class ServiceOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x51CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::ServiceOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
}
