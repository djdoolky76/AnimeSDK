#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::Protobuf::Reflection { class FileDescriptor; }

#define MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF2C0E0)
#define MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1BF2C080)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int MiHoYoSDKTrackInfoReflection_TypeDefinitionIndex = 47388;

	class MiHoYoSDKTrackInfoReflection : public ::System::Object
	{
	public:
		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor** StaticGet_descriptor()
		{
			return (::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor**)UnitySDK::FromName("MiHoYo.SDK", "MiHoYoSDKTrackInfoReflection")->GetStaticField(0x1AD20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::FileDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_MIHOYOSDKTRACKINFOREFLECTION_GET_DESCRIPTOR_OFFSET))();
		}

	};
}
