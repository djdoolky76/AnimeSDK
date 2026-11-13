#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class CommonInfo; }
namespace MiHoYo::SDK { class EventInfo; }
namespace MiHoYo::SDK { class PageInfo; }
namespace MiHoYo::SDK { class TrackInfo; }
namespace MiHoYo::SDK::Protobuf { class CodedInputStream; }
namespace MiHoYo::SDK::Protobuf { class CodedOutputStream; }
namespace MiHoYo::SDK::Protobuf { template <typename T> class MessageParser_1; }
namespace MiHoYo::SDK::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MIHOYO_SDK_TRACKINFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DD31FD0)
#define MIHOYO_SDK_TRACKINFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD32780)
#define MIHOYO_SDK_TRACKINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DD31790)
#define MIHOYO_SDK_TRACKINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD31660)
#define MIHOYO_SDK_TRACKINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD31650)
#define MIHOYO_SDK_TRACKINFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DD31BB0)
#define MIHOYO_SDK_TRACKINFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DD31960)
#define MIHOYO_SDK_TRACKINFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DD31DE0)
#define MIHOYO_SDK_TRACKINFO_GET_COMMONINFO_OFFSET UNITYSDK_OFFSET(0x1DD31920)
#define MIHOYO_SDK_TRACKINFO_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD31410)
#define MIHOYO_SDK_TRACKINFO_GET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1DD31940)
#define MIHOYO_SDK_TRACKINFO_GET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x1DD31900)
#define MIHOYO_SDK_TRACKINFO_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DD313B0)
#define MIHOYO_SDK_TRACKINFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD32330)
#define MIHOYO_SDK_TRACKINFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DD320A0)
#define MIHOYO_SDK_TRACKINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DD315F0)
#define MIHOYO_SDK_TRACKINFO_SET_COMMONINFO_OFFSET UNITYSDK_OFFSET(0x1DD31930)
#define MIHOYO_SDK_TRACKINFO_SET_EVENTINFO_OFFSET UNITYSDK_OFFSET(0x1DD31950)
#define MIHOYO_SDK_TRACKINFO_SET_PAGEINFO_OFFSET UNITYSDK_OFFSET(0x1DD31910)
#define MIHOYO_SDK_TRACKINFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DD31E40)
#define MIHOYO_SDK_TRACKINFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD31EA0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int TrackInfo_TypeDefinitionIndex = 47390;

	class TrackInfo : public ::System::Object
	{
	public:
		::MiHoYo::SDK::EventInfo* eventInfo_; // 0x10
		::MiHoYo::SDK::CommonInfo* commonInfo_; // 0x18
		::MiHoYo::SDK::PageInfo* pageInfo_; // 0x20
		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>** StaticGet__parser()
		{
			return (::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>**)UnitySDK::FromName("MiHoYo.SDK", "TrackInfo")->GetStaticField(0x28EB0);
		}

		// static const ::System::Object PageInfoFieldNumber; // 0x0
		// static const ::System::Object CommonInfoFieldNumber; // 0x0
		// static const ::System::Object EventInfoFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MiHoYo::SDK::TrackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::TrackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CCTOR_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>* get_Parser()
		{
			return ((::MiHoYo::SDK::Protobuf::MessageParser_1<::MiHoYo::SDK::TrackInfo*>*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_PARSER_OFFSET))();
		}

		static ::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_DESCRIPTOR_OFFSET))();
		}

		::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor* pb__MiHoYo_SDK_Protobuf_IMessage_get_Descriptor()
		{
			return ((::MiHoYo::SDK::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_PB__MIHOYO_SDK_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MiHoYo::SDK::TrackInfo* Clone()
		{
			return ((::MiHoYo::SDK::TrackInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CLONE_OFFSET))(this);
		}

		::MiHoYo::SDK::PageInfo* get_PageInfo()
		{
			return ((::MiHoYo::SDK::PageInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_PAGEINFO_OFFSET))(this);
		}

		::System::Void set_PageInfo(::MiHoYo::SDK::PageInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::PageInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_SET_PAGEINFO_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::CommonInfo* get_CommonInfo()
		{
			return ((::MiHoYo::SDK::CommonInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_COMMONINFO_OFFSET))(this);
		}

		::System::Void set_CommonInfo(::MiHoYo::SDK::CommonInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::CommonInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_SET_COMMONINFO_OFFSET))(this, a1);
		}

		::MiHoYo::SDK::EventInfo* get_EventInfo()
		{
			return ((::MiHoYo::SDK::EventInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GET_EVENTINFO_OFFSET))(this);
		}

		::System::Void set_EventInfo(::MiHoYo::SDK::EventInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::EventInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_SET_EVENTINFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MiHoYo::SDK::TrackInfo* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MiHoYo::SDK::TrackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::MiHoYo::SDK::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MiHoYo::SDK::TrackInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::TrackInfo*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::MiHoYo::SDK::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_TRACKINFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
