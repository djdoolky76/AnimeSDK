#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class MethodOptions; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC0C920)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC0C960)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C___CCTOR_B__29_0_OFFSET UNITYSDK_OFFSET(0x1BC0C970)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodOptions___c_TypeDefinitionIndex = 35804;

	class MethodOptions___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x517C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::MethodOptions* __cctor_b__29_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MethodOptions*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_METHODOPTIONS___C___CCTOR_B__29_0_OFFSET))(this);
		}

	};
}
