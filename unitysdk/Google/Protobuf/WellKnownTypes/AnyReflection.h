#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F39E210)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F39E1B0)

namespace Google::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int AnyReflection_TypeDefinitionIndex = 5422;

	class AnyReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "AnyReflection")->GetStaticField(0x27A40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
