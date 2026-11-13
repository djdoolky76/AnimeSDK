#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class MethodDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F38AB70)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F38ABB0)
#define GOOGLE_PROTOBUF_REFLECTION_METHODDESCRIPTORPROTO___C___CCTOR_B__74_0_OFFSET UNITYSDK_OFFSET(0x1F38ABC0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int MethodDescriptorProto___c_TypeDefinitionIndex = 5492;

	class MethodDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x22E50);
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
