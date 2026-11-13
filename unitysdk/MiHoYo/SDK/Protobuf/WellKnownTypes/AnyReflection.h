#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x20903E20)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20902F40)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int AnyReflection_TypeDefinitionIndex = 36664;

	class AnyReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "AnyReflection")->GetStaticField(0x870);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_ANYREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
