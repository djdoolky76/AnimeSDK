#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class DescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B847C30)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1B847C70)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1B847C80)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorProto___c_TypeDefinitionIndex = 5467;

	class DescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x1F810);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::DescriptorProto* __cctor_b__78_0()
		{
			return ((::Google::Protobuf::Reflection::DescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORPROTO___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
}
