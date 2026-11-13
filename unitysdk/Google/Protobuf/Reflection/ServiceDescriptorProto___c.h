#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class ServiceDescriptorProto; }
namespace System { class Object; }

#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F392830)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F392870)
#define GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__42_0_OFFSET UNITYSDK_OFFSET(0x1F392880)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int ServiceDescriptorProto___c_TypeDefinitionIndex = 5490;

	class ServiceDescriptorProto___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("Google.Protobuf.Reflection", "<>c")->GetStaticField(0x23380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C_CTOR_OFFSET))(this);
		}

		::Google::Protobuf::Reflection::ServiceDescriptorProto* __cctor_b__42_0()
		{
			return ((::Google::Protobuf::Reflection::ServiceDescriptorProto*(*)(::PVOID))((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_SERVICEDESCRIPTORPROTO___C___CCTOR_B__42_0_OFFSET))(this);
		}

	};
}
