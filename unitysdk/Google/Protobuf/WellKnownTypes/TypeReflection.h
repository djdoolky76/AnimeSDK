#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf::Reflection { class FileDescriptor; }

#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B8B5850)
#define GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1B8B57F0)

namespace Google::Protobuf::WellKnownTypes
{
	class TypeReflection : public ::System::Object
	{
	public:
		static ::Google::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::Google::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("Google.Protobuf.WellKnownTypes", "TypeReflection")->GetStaticField(0x1B430);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + GOOGLE_PROTOBUF_WELLKNOWNTYPES_TYPEREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
