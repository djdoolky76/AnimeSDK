#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA39FC0)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1CA39F60)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int SourceContextReflection_TypeDefinitionIndex = 5431;

	class SourceContextReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "SourceContextReflection")->GetStaticField(0x24A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_SOURCECONTEXTREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
