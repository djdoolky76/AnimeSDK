#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class EnumDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8704F0)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B870530)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__53_0_OFFSET UNITYSDK_OFFSET(0x1B870540)

namespace Google::Protobuf::Reflection
{
	class EnumDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1C430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumDescriptorProto* __cctor_b__53_0()
		{
			return ((::Google::Protobuf::Reflection::EnumDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMDESCRIPTORPROTO___C___CCTOR_B__53_0_OFFSET))(this);
		}

	};
}
