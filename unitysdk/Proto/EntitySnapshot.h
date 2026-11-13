#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABPEEALGKAO.h"
#include "unitysdk/Proto/EntitySnapshot_EntityOneofCase.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class MotionInfoSnapshot; }
namespace Proto { class PropInfoSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ENTITYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4BFF00)
#define PROTO_ENTITYSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4C0510)
#define PROTO_ENTITYSNAPSHOT_CLEARENTITY_OFFSET UNITYSDK_OFFSET(0x1F4BF900)
#define PROTO_ENTITYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4BF820)
#define PROTO_ENTITYSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4BF650)
#define PROTO_ENTITYSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4BF640)
#define PROTO_ENTITYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4BF970)
#define PROTO_ENTITYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4BF910)
#define PROTO_ENTITYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4BFBA0)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYCASE_OFFSET UNITYSDK_OFFSET(0x1F4BF8F0)
#define PROTO_ENTITYSNAPSHOT_GET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1F4BF870)
#define PROTO_ENTITYSNAPSHOT_GET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1F4BF890)
#define PROTO_ENTITYSNAPSHOT_GET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1F4BF8D0)
#define PROTO_ENTITYSNAPSHOT_GET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1F4BF8B0)
#define PROTO_ENTITYSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F4BF5D0)
#define PROTO_ENTITYSNAPSHOT_GET_PROP_OFFSET UNITYSDK_OFFSET(0x1F4BF7A0)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4C0370)
#define PROTO_ENTITYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4C0190)
#define PROTO_ENTITYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4BF630)
#define PROTO_ENTITYSNAPSHOT_SET_ENTITYID_OFFSET UNITYSDK_OFFSET(0x1F4BF880)
#define PROTO_ENTITYSNAPSHOT_SET_INSTANCEID_OFFSET UNITYSDK_OFFSET(0x1F4BF8A0)
#define PROTO_ENTITYSNAPSHOT_SET_MAPOBJECTTYPE_OFFSET UNITYSDK_OFFSET(0x1F4BF8E0)
#define PROTO_ENTITYSNAPSHOT_SET_MOTIONINFO_OFFSET UNITYSDK_OFFSET(0x1F4BF8C0)
#define PROTO_ENTITYSNAPSHOT_SET_PROP_OFFSET UNITYSDK_OFFSET(0x1F4BF800)
#define PROTO_ENTITYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4BFC50)
#define PROTO_ENTITYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4BFCB0)

namespace Proto
{
	inline static constexpr unsigned int EntitySnapshot_TypeDefinitionIndex = 26320;

	class EntitySnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::Object* entity_; // 0x18
		::Proto::MotionInfoSnapshot* motionInfo_; // 0x20
		::ABPEEALGKAO mapObjectType_; // 0x28
		::System::UInt32 entityId_; // 0x2C
		::System::UInt32 instanceId_; // 0x30
		::Proto::EntitySnapshot_EntityOneofCase entityCase_; // 0x34
		static ::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>**)UnitySDK::FromName("Proto", "EntitySnapshot")->GetStaticField(0x4F380);
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

		static ::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::EntitySnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_ENTITYSNAPSHOT_GET_PARSER_OFFSET))();
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
