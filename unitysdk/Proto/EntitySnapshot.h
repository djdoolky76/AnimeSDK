#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABPEEALGKAO.h"
#include "unitysdk/Proto/EntitySnapshot_EntityOneofCase.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class MotionInfoSnapshot; }
namespace Proto { class PropInfoSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFEEDD0)
#define PROTO_ENTITYSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFEF520)
#define PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x1DFEE6D0)
#define PROTO_ENTITYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFEE5F0)
#define PROTO_ENTITYSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFEE320)
#define PROTO_ENTITYSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE310)
#define PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFEE740)
#define PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFEE6E0)
#define PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFEE970)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x1DFEE6C0)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DFEE640)
#define PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1DFEE660)
#define PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1DFEE6A0)
#define PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1DFEE680)
#define PROTO_ENTITYSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFEE2A0)
#define PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET UNITYSDK_OFFSET(0x1DFEE570)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFEF380)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFEF060)
#define PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFEE300)
#define PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1DFEE650)
#define PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1DFEE670)
#define PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1DFEE6B0)
#define PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1DFEE690)
#define PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET UNITYSDK_OFFSET(0x1DFEE5D0)
#define PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFEEB20)
#define PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFEEB80)

namespace Proto
{
	inline static constexpr unsigned int EntitySnapshot_TypeDefinitionIndex = 25823;

	class EntitySnapshot : public ::System::Object
	{
	public:
		::System::Object* entity_; // 0x10
		::Proto::MotionInfoSnapshot* motionInfo_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::ABPEEALGKAO mapObjectType_; // 0x28
		::Proto::EntitySnapshot_EntityOneofCase entityCase_; // 0x2C
		::System::UInt32 entityId_; // 0x30
		::System::UInt32 instanceId_; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "EntitySnapshot")->GetStaticField(0x43A80);
		}

		// static const ::System::Object EntityIdFieldNumber; // 0x0
		// static const ::System::Object InstanceIdFieldNumber; // 0x0
		// static const ::System::Object MotionInfoFieldNumber; // 0x0
		// static const ::System::Object MapObjectTypeFieldNumber; // 0x0
		// static const ::System::Object PropFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::EntitySnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::EntitySnapshot* Clone()
		{
			return ((::Proto::EntitySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_EntityId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET))(this);
		}

		::System::Void set_EntityId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET))(this, a1);
		}

		::System::UInt32 get_InstanceId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET))(this);
		}

		::System::Void set_InstanceId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET))(this, a1);
		}

		::Proto::MotionInfoSnapshot* get_MotionInfo()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET))(this);
		}

		::System::Void set_MotionInfo(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET))(this, a1);
		}

		::ABPEEALGKAO get_MapObjectType()
		{
			return ((::ABPEEALGKAO(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET))(this);
		}

		::System::Void set_MapObjectType(::ABPEEALGKAO a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABPEEALGKAO))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET))(this, a1);
		}

		::Proto::PropInfoSnapshot* get_Prop()
		{
			return ((::Proto::PropInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET))(this);
		}

		::System::Void set_Prop(::Proto::PropInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::PropInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET))(this, a1);
		}

		::Proto::EntitySnapshot_EntityOneofCase get_EntityCase()
		{
			return ((::Proto::EntitySnapshot_EntityOneofCase(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET))(this);
		}

		::System::Void ClearEntity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::EntitySnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::EntitySnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::EntitySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
