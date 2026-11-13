#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class EnumValueDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BECAF50)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BECAF90)
#define GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C___CCTOR_B__47_0_OFFSET UNITYSDK_OFFSET(0x1BECAFA0)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int EnumValueDescriptorProto___c_TypeDefinitionIndex = 5488;

	class EnumValueDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x201F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::EnumValueDescriptorProto* __cctor_b__47_0()
		{
			return ((::Google::Protobuf::Reflection::EnumValueDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_ENUMVALUEDESCRIPTORPROTO___C___CCTOR_B__47_0_OFFSET))(this);
		}

	};
}
