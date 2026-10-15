#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SavePointsInfoNotify; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0105C0)
#define PROTO_SAVEPOINTSINFONOTIFY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0108F0)
#define PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x1E010200)
#define PROTO_SAVEPOINTSINFONOTIFY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0101C0)
#define PROTO_SAVEPOINTSINFONOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0101B0)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E010370)
#define PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E010290)
#define PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E010440)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E010170)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x1E010270)
#define PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x1E010250)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E010770)
#define PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E010730)
#define PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0101A0)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET UNITYSDK_OFFSET(0x1E010280)
#define PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET UNITYSDK_OFFSET(0x1E010260)
#define PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E010480)
#define PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0104E0)

namespace Proto
{
	inline static constexpr unsigned int SavePointsInfoNotify_TypeDefinitionIndex = 34027;

	class SavePointsInfoNotify : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Int64 refreshTime_; // 0x18
		::System::UInt32 validTimes_; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "SavePointsInfoNotify")->GetStaticField(0x45740);
		}

		// static const ::System::Object ValidTimesFieldNumber; // 0x0
		// static const ::System::Object RefreshTimeFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SavePointsInfoNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SavePointsInfoNotify* Clone()
		{
			return ((::Proto::SavePointsInfoNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ValidTimes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_VALIDTIMES_OFFSET))(this);
		}

		::System::Void set_ValidTimes(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_VALIDTIMES_OFFSET))(this, a1);
		}

		::System::Int64 get_RefreshTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GET_REFRESHTIME_OFFSET))(this);
		}

		::System::Void set_RefreshTime(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_SET_REFRESHTIME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SavePointsInfoNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SavePointsInfoNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SavePointsInfoNotify*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SAVEPOINTSINFONOTIFY_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
