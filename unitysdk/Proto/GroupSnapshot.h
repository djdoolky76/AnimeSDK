#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ActiveMCVKeySnapshot; }
namespace Proto { class EntitySnapshot; }
namespace Proto { class GroupSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GROUPSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F4CD3E0)
#define PROTO_GROUPSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F4CD980)
#define PROTO_GROUPSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1F4CCD90)
#define PROTO_GROUPSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F4CCCA0)
#define PROTO_GROUPSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F4CCBC0)
#define PROTO_GROUPSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F4CCEC0)
#define PROTO_GROUPSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F4CCE60)
#define PROTO_GROUPSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F4CCFE0)
#define PROTO_GROUPSNAPSHOT_GET_ACTIVEMCVKEYLIST_OFFSET UNITYSDK_OFFSET(0x1F4CCE50)
#define PROTO_GROUPSNAPSHOT_GET_ACTIVESUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1F4CCE40)
#define PROTO_GROUPSNAPSHOT_GET_ENTITYLIST_OFFSET UNITYSDK_OFFSET(0x1F4CCE20)
#define PROTO_GROUPSNAPSHOT_GET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1F4CCDE0)
#define PROTO_GROUPSNAPSHOT_GET_GROUPSTATE_OFFSET UNITYSDK_OFFSET(0x1F4CCE00)
#define PROTO_GROUPSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F4CCB50)
#define PROTO_GROUPSNAPSHOT_GET_PROPERTYMAP_OFFSET UNITYSDK_OFFSET(0x1F4CCE30)
#define PROTO_GROUPSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F4CD750)
#define PROTO_GROUPSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F4CD600)
#define PROTO_GROUPSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F4CCBB0)
#define PROTO_GROUPSNAPSHOT_SET_GROUPID_OFFSET UNITYSDK_OFFSET(0x1F4CCDF0)
#define PROTO_GROUPSNAPSHOT_SET_GROUPSTATE_OFFSET UNITYSDK_OFFSET(0x1F4CCE10)
#define PROTO_GROUPSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F4CD180)
#define PROTO_GROUPSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F4CD1E0)

namespace Proto
{
	inline static constexpr unsigned int GroupSnapshot_TypeDefinitionIndex = 26323;

	class GroupSnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* activeSubmissionList_; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* propertyMap_; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EntitySnapshot*>* entityList_; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ActiveMCVKeySnapshot*>* activeMcvKeyList_; // 0x28
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x30
		::System::UInt32 groupState_; // 0x38
		::System::UInt32 groupId_; // 0x3C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet__repeated_activeSubmissionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("Proto", "GroupSnapshot")->GetStaticField(0x51060);
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>**)UnitySDK::FromName("Proto", "GroupSnapshot")->GetStaticField(0x51068);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::EntitySnapshot*>** StaticGet__repeated_entityList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::EntitySnapshot*>**)UnitySDK::FromName("Proto", "GroupSnapshot")->GetStaticField(0x51070);
		}

		static ::System::Object** StaticGet__map_propertyMap_codec()
		{
			return (::System::Object**)UnitySDK::FromName("Proto", "GroupSnapshot")->GetStaticField(0x51078);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::ActiveMCVKeySnapshot*>** StaticGet__repeated_activeMcvKeyList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ActiveMCVKeySnapshot*>**)UnitySDK::FromName("Proto", "GroupSnapshot")->GetStaticField(0x51080);
		}

		// static const ::System::Object GroupIdFieldNumber; // 0x0
		// static const ::System::Object GroupStateFieldNumber; // 0x0
		// static const ::System::Object EntityListFieldNumber; // 0x0
		// static const ::System::Object PropertyMapFieldNumber; // 0x0
		// static const ::System::Object ActiveSubmissionListFieldNumber; // 0x0
		// static const ::System::Object ActiveMcvKeyListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::GroupSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GroupSnapshot* Clone()
		{
			return ((::Proto::GroupSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_GroupId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_GROUPID_OFFSET))(this);
		}

		::System::Void set_GroupId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_SET_GROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_GroupState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_GROUPSTATE_OFFSET))(this);
		}

		::System::Void set_GroupState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_SET_GROUPSTATE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::EntitySnapshot*>* get_EntityList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::EntitySnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_ENTITYLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>* get_PropertyMap()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_PROPERTYMAP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_ActiveSubmissionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_ACTIVESUBMISSIONLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ActiveMCVKeySnapshot*>* get_ActiveMcvKeyList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ActiveMCVKeySnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GET_ACTIVEMCVKEYLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GroupSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GroupSnapshot*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GROUPSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
