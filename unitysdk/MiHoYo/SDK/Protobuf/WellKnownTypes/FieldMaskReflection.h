#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x20906640)
#define MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x209057E0)

namespace MiHoYo::SDK::Protobuf::WellKnownTypes
{
	inline static constexpr unsigned int FieldMaskReflection_TypeDefinitionIndex = 36670;

	class FieldMaskReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("MiHoYo.SDK.Protobuf.WellKnownTypes", "FieldMaskReflection")->GetStaticField(0x8D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PROTOBUF_WELLKNOWNTYPES_FIELDMASKREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
