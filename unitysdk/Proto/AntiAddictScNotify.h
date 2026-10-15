#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class AntiAddictScNotify; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ANTIADDICTSCNOTIFY_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFE76B0)
#define PROTO_ANTIADDICTSCNOTIFY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE7A40)
#define PROTO_ANTIADDICTSCNOTIFY_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFE6FF0)
#define PROTO_ANTIADDICTSCNOTIFY_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFE6F90)
#define PROTO_ANTIADDICTSCNOTIFY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6F70)
#define PROTO_ANTIADDICTSCNOTIFY_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFE7270)
#define PROTO_ANTIADDICTSCNOTIFY_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFE7140)
#define PROTO_ANTIADDICTSCNOTIFY_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFE73A0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DFE70E0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x1DFE70C0)
#define PROTO_ANTIADDICTSCNOTIFY_GET_MSG_OFFSET UNITYSDK_OFFSET(0x1DFE7060)
#define PROTO_ANTIADDICTSCNOTIFY_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFE6F30)
#define PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFE7840)
#define PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFE77E0)
#define PROTO_ANTIADDICTSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6F60)
#define PROTO_ANTIADDICTSCNOTIFY_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1DFE70F0)
#define PROTO_ANTIADDICTSCNOTIFY_SET_MSGTYPE_OFFSET UNITYSDK_OFFSET(0x1DFE70D0)
#define PROTO_ANTIADDICTSCNOTIFY_SET_MSG_OFFSET UNITYSDK_OFFSET(0x1DFE7070)
#define PROTO_ANTIADDICTSCNOTIFY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFE74F0)
#define PROTO_ANTIADDICTSCNOTIFY_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFE7550)

namespace Proto
{
	inline static constexpr unsigned int AntiAddictScNotify_TypeDefinitionIndex = 32050;

	class AntiAddictScNotify : public ::System::Object
	{
	public:
		::System::String* msg_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::String* level_; // 0x20
		::System::UInt32 msgType_; // 0x28
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "AntiAddictScNotify")->GetStaticField(0x439C0);
		}

		// static const ::System::Object MsgFieldNumber; // 0x0
		// static const ::System::Object MsgTypeFieldNumber; // 0x0
		// static const ::System::Object LevelFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::AntiAddictScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::AntiAddictScNotify* Clone()
		{
			return ((::Proto::AntiAddictScNotify*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CLONE_OFFSET))(this);
		}

		::System::String* get_Msg()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_MSG_OFFSET))(this);
		}

		::System::Void set_Msg(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_MSG_OFFSET))(this, a1);
		}

		::System::UInt32 get_MsgType()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_MSGTYPE_OFFSET))(this);
		}

		::System::Void set_MsgType(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_MSGTYPE_OFFSET))(this, a1);
		}

		::System::String* get_Level()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::AntiAddictScNotify* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::AntiAddictScNotify* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::AntiAddictScNotify*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ANTIADDICTSCNOTIFY_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
