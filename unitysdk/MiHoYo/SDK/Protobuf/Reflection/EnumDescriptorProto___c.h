#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class EnumDescriptorProto; }
namespace System { class Object; }

#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BBF8850)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBF8890)
#define MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET UNITYSDK_OFFSET(0x1BBF88A0)

namespace MiHoYo::SDK::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumDescriptorProto___c_TypeDefinitionIndex = 35777;

	class EnumDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.Reflection", "<>c")->GetStaticField(0x4DFB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto* __cctor_b__34_0()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__34_0_OFFSET))(this);
		}

	};
}
