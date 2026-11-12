#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class ServiceOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD997E0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD99820)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_SERVICEOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1CD99830)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceOptions___c_TypeDefinitionIndex = 36730;

	class ServiceOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x5EE90);
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
