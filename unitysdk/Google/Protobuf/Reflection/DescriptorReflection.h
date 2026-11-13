#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BEC17D0)
#define GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BEC1770)

namespace Google::Protobuf::Reflection
{
	inline static constexpr unsigned int DescriptorReflection_TypeDefinitionIndex = 5461;

	class DescriptorReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("Google.Protobuf.Reflection", "DescriptorReflection")->GetStaticField(0x1F620);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_REFLECTION_DESCRIPTORREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
