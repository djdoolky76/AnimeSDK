#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8932F0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B893330)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x1B893340)

namespace Google::Protobuf::Reflection
{
	class MethodDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x18730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::MethodDescriptorProto* __cctor_b__74_0()
		{
			return ((::Google::Protobuf::Reflection::MethodDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__74_0_OFFSET))(this);
		}

	};
}
