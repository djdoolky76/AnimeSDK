#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class CommonInfo; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_COMMONINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0xAF65890)
#define MIHOYO_SDK_COMMONINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xAF66430)
#define MIHOYO_SDK_COMMONINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xAF649C0)
#define MIHOYO_SDK_COMMONINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xAF648A0)
#define MIHOYO_SDK_COMMONINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xAF64800)
#define MIHOYO_SDK_COMMONINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xAF64F50)
#define MIHOYO_SDK_COMMONINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xAF64EF0)
#define MIHOYO_SDK_COMMONINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xAF650F0)
#define MIHOYO_SDK_COMMONINFO_GET_APPVERSION_OFFSET UNITYSDK_OFFSET(0xAF64D80)
#define MIHOYO_SDK_COMMONINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xAF645C0)
#define MIHOYO_SDK_COMMONINFO_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xAF64CD0)
#define MIHOYO_SDK_COMMONINFO_GET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xAF64B70)
#define MIHOYO_SDK_COMMONINFO_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xAF64EE0)
#define MIHOYO_SDK_COMMONINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0xAF64560)
#define MIHOYO_SDK_COMMONINFO_GET_PKGCHANNEL_OFFSET UNITYSDK_OFFSET(0xAF64E30)
#define MIHOYO_SDK_COMMONINFO_GET_PLATFORM_OFFSET UNITYSDK_OFFSET(0xAF64AC0)
#define MIHOYO_SDK_COMMONINFO_GET_SYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0xAF64C20)
#define MIHOYO_SDK_COMMONINFO_GET_USERID_OFFSET UNITYSDK_OFFSET(0xAF64A10)
#define MIHOYO_SDK_COMMONINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0xAF65E60)
#define MIHOYO_SDK_COMMONINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0xAF65B10)
#define MIHOYO_SDK_COMMONINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xAF647A0)
#define MIHOYO_SDK_COMMONINFO_SET_APPVERSION_OFFSET UNITYSDK_OFFSET(0xAF64D90)
#define MIHOYO_SDK_COMMONINFO_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0xAF64CE0)
#define MIHOYO_SDK_COMMONINFO_SET_DEVICENAME_OFFSET UNITYSDK_OFFSET(0xAF64B80)
#define MIHOYO_SDK_COMMONINFO_SET_PKGCHANNEL_OFFSET UNITYSDK_OFFSET(0xAF64E40)
#define MIHOYO_SDK_COMMONINFO_SET_PLATFORM_OFFSET UNITYSDK_OFFSET(0xAF64AD0)
#define MIHOYO_SDK_COMMONINFO_SET_SYSTEMVERSION_OFFSET UNITYSDK_OFFSET(0xAF64C30)
#define MIHOYO_SDK_COMMONINFO_SET_USERID_OFFSET UNITYSDK_OFFSET(0xAF64A20)
#define MIHOYO_SDK_COMMONINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xAF654A0)
#define MIHOYO_SDK_COMMONINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0xAF65500)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int CommonInfo_TypeDefinitionIndex = 46366;

	class CommonInfo : public ::System::Object
	{
	public:
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* extraInfo_; // 0x10
		::System::String* userId_; // 0x18
		::System::String* platform_; // 0x20
		::System::String* systemVersion_; // 0x28
		::System::String* deviceId_; // 0x30
		::System::String* appVersion_; // 0x38
		::System::String* pkgChannel_; // 0x40
		::System::String* deviceName_; // 0x48
		static ::System::Object** StaticGet__map_extraInfo_codec()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "CommonInfo")->GetStaticField(0x1FC70);
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>**)UnitySDK::FromName("MiHoYo.SDK", "CommonInfo")->GetStaticField(0x1FC78);
		}

		// static const ::System::Object UserIdFieldNumber; // 0x0
		// static const ::System::Object PlatformFieldNumber; // 0x0
		// static const ::System::Object DeviceNameFieldNumber; // 0x0
		// static const ::System::Object SystemVersionFieldNumber; // 0x0
		// static const ::System::Object DeviceIdFieldNumber; // 0x0
		// static const ::System::Object AppVersionFieldNumber; // 0x0
		// static const ::System::Object PkgChannelFieldNumber; // 0x0
		// static const ::System::Object ExtraInfoFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::CommonInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::CommonInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::CommonInfo* Clone()
		{
			return ((::MiHoYo::SDK::CommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_UserId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_USERID_OFFSET))(this);
		}

		::System::Void set_UserId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_USERID_OFFSET))(this, a1);
		}

		::System::String* get_Platform()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_PLATFORM_OFFSET))(this);
		}

		::System::Void set_Platform(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_PLATFORM_OFFSET))(this, a1);
		}

		::System::String* get_DeviceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_DEVICENAME_OFFSET))(this);
		}

		::System::Void set_DeviceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_DEVICENAME_OFFSET))(this, a1);
		}

		::System::String* get_SystemVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_SYSTEMVERSION_OFFSET))(this);
		}

		::System::Void set_SystemVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_SYSTEMVERSION_OFFSET))(this, a1);
		}

		::System::String* get_DeviceId()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_DeviceId(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_DEVICEID_OFFSET))(this, a1);
		}

		::System::String* get_AppVersion()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_APPVERSION_OFFSET))(this);
		}

		::System::Void set_AppVersion(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_APPVERSION_OFFSET))(this, a1);
		}

		::System::String* get_PkgChannel()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_PKGCHANNEL_OFFSET))(this);
		}

		::System::Void set_PkgChannel(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_SET_PKGCHANNEL_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* get_ExtraInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::CommonInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::CommonInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_COMMONINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
