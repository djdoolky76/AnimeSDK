#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class GeneratedCodeInfo; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC077B0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC077F0)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__25_0_OFFSET UNITYSDK_OFFSET(0x1BC07800)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	class GeneratedCodeInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x50740);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo* __cctor_b__25_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::GeneratedCodeInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_GENERATEDCODEINFO___C___CCTOR_B__25_0_OFFSET))(this);
		}

	};
}
