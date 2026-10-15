#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BC19E10)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BC18870)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int StructReflection_TypeDefinitionIndex = 35745;

	class StructReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "StructReflection")->GetStaticField(0x970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_STRUCTREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
