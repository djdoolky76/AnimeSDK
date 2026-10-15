#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FieldDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B85B950)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B85B990)
#define GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C___CCTOR_B__111_0_OFFSET UNITYSDK_OFFSET(0x1B85B9A0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int FieldDescriptorProto___c_TypeDefinitionIndex = 5474;

	class FieldDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x20DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::FieldDescriptorProto* __cctor_b__111_0()
		{
			return ((::Google::Protobuf::Reflection::FieldDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_FIELDDESCRIPTORPROTO___C___CCTOR_B__111_0_OFFSET))(this);
		}

	};
}
