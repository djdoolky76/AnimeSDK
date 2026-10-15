#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class DialogSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_DIALOGSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFEC680)
#define PROTO_DIALOGSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC950)
#define PROTO_DIALOGSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFEC280)
#define PROTO_DIALOGSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFEC250)
#define PROTO_DIALOGSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC240)
#define PROTO_DIALOGSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFEC440)
#define PROTO_DIALOGSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFEC330)
#define PROTO_DIALOGSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFEC510)
#define PROTO_DIALOGSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DFEC310)
#define PROTO_DIALOGSNAPSHOT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1DFEC2F0)
#define PROTO_DIALOGSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFEC1D0)
#define PROTO_DIALOGSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFEC7D0)
#define PROTO_DIALOGSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFEC790)
#define PROTO_DIALOGSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFEC230)
#define PROTO_DIALOGSNAPSHOT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DFEC320)
#define PROTO_DIALOGSNAPSHOT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1DFEC300)
#define PROTO_DIALOGSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFEC540)
#define PROTO_DIALOGSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFEC5A0)

namespace Proto
{
	class DialogSnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 groupId_; // 0x18
		::System::UInt32 entityId_; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "DialogSnapshot")->GetStaticField(0x43A50);
		}

		// static const ::System::Object GroupIdFieldNumber; // 0x0
		// static const ::System::Object EntityIdFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::DialogSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::DialogSnapshot* Clone()
		{
			return ((::Proto::DialogSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_SET_ENTITYID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::DialogSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::DialogSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::DialogSnapshot*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_DIALOGSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
