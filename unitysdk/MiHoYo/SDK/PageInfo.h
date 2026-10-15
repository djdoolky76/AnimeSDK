#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class PageInfo; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { class MessageParser; }
namespace MiHoYo::SDK::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_PAGEINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0xB014510)
#define MIHOYO_SDK_PAGEINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0xB014F40)
#define MIHOYO_SDK_PAGEINFO_CLONE_OFFSET UNITYSDK_OFFSET(0xB0137F0)
#define MIHOYO_SDK_PAGEINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB0136E0)
#define MIHOYO_SDK_PAGEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB013650)
#define MIHOYO_SDK_PAGEINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xB013CD0)
#define MIHOYO_SDK_PAGEINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0xB013C70)
#define MIHOYO_SDK_PAGEINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xB013E50)
#define MIHOYO_SDK_PAGEINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xB013410)
#define MIHOYO_SDK_PAGEINFO_GET_EXTRAINFO_OFFSET UNITYSDK_OFFSET(0xB013C60)
#define MIHOYO_SDK_PAGEINFO_GET_PAGENAME_OFFSET UNITYSDK_OFFSET(0xB0138F0)
#define MIHOYO_SDK_PAGEINFO_GET_PAGEPATH_OFFSET UNITYSDK_OFFSET(0xB013840)
#define MIHOYO_SDK_PAGEINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0xB0133B0)
#define MIHOYO_SDK_PAGEINFO_GET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0xB013BB0)
#define MIHOYO_SDK_PAGEINFO_GET_SOURCEPATH_OFFSET UNITYSDK_OFFSET(0xB013B00)
#define MIHOYO_SDK_PAGEINFO_GET_SUBPAGENAME_OFFSET UNITYSDK_OFFSET(0xB013A50)
#define MIHOYO_SDK_PAGEINFO_GET_SUBPAGEPATH_OFFSET UNITYSDK_OFFSET(0xB0139A0)
#define MIHOYO_SDK_PAGEINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0xB014A30)
#define MIHOYO_SDK_PAGEINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0xB014740)
#define MIHOYO_SDK_PAGEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0xB0135F0)
#define MIHOYO_SDK_PAGEINFO_SET_PAGENAME_OFFSET UNITYSDK_OFFSET(0xB013900)
#define MIHOYO_SDK_PAGEINFO_SET_PAGEPATH_OFFSET UNITYSDK_OFFSET(0xB013850)
#define MIHOYO_SDK_PAGEINFO_SET_SOURCENAME_OFFSET UNITYSDK_OFFSET(0xB013BC0)
#define MIHOYO_SDK_PAGEINFO_SET_SOURCEPATH_OFFSET UNITYSDK_OFFSET(0xB013B10)
#define MIHOYO_SDK_PAGEINFO_SET_SUBPAGENAME_OFFSET UNITYSDK_OFFSET(0xB013A60)
#define MIHOYO_SDK_PAGEINFO_SET_SUBPAGEPATH_OFFSET UNITYSDK_OFFSET(0xB0139B0)
#define MIHOYO_SDK_PAGEINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0xB014190)
#define MIHOYO_SDK_PAGEINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0xB0141F0)

namespace MiHoYo::SDK
{
	class PageInfo : public ::System::Object
	{
	public:
		::System::String* sourcePath_; // 0x10
		::System::String* subPagePath_; // 0x18
		::System::String* pageName_; // 0x20
		::System::String* sourceName_; // 0x28
		::System::String* pagePath_; // 0x30
		::System::String* subPageName_; // 0x38
		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* extraInfo_; // 0x40
		static ::MiHoYo::SDK::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser**)UnitySDK::FromName("MiHoYo.SDK", "PageInfo")->GetStaticField(0x2FFF0);
		}

		static ::System::Object** StaticGet__map_extraInfo_codec()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK", "PageInfo")->GetStaticField(0x2FFF8);
		}

		// static const ::System::Object PagePathFieldNumber; // 0x0
		// static const ::System::Object PageNameFieldNumber; // 0x0
		// static const ::System::Object SubPagePathFieldNumber; // 0x0
		// static const ::System::Object SubPageNameFieldNumber; // 0x0
		// static const ::System::Object SourcePathFieldNumber; // 0x0
		// static const ::System::Object SourceNameFieldNumber; // 0x0
		// static const ::System::Object ExtraInfoFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::PageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::PageInfo* Clone()
		{
			return ((::MiHoYo::SDK::PageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CLONE_OFFSET))(this);
		}

		::System::String* get_PagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_PAGEPATH_OFFSET))(this);
		}

		::System::Void set_PagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_PAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_PageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_PAGENAME_OFFSET))(this);
		}

		::System::Void set_PageName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_PAGENAME_OFFSET))(this, a1);
		}

		::System::String* get_SubPagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SUBPAGEPATH_OFFSET))(this);
		}

		::System::Void set_SubPagePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SUBPAGEPATH_OFFSET))(this, a1);
		}

		::System::String* get_SubPageName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SUBPAGENAME_OFFSET))(this);
		}

		::System::Void set_SubPageName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SUBPAGENAME_OFFSET))(this, a1);
		}

		::System::String* get_SourcePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SOURCEPATH_OFFSET))(this);
		}

		::System::Void set_SourcePath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SOURCEPATH_OFFSET))(this, a1);
		}

		::System::String* get_SourceName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_SOURCENAME_OFFSET))(this);
		}

		::System::Void set_SourceName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_SET_SOURCENAME_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>* get_ExtraInfo()
		{
			return ((::MiHoYo::SDK::Protobuf::Collections::MapField_2<::System::String*, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GET_EXTRAINFO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::PageInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::PageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PAGEINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
