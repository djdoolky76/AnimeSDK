#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MissionCustomValueSnapshot; }
namespace Proto { class MissionCustomValueSnapshotList; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2020F530)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CCTOR_OFFSET UNITYSDK_OFFSET(0x2020F790)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x2020F120)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2020F070)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x2020C460)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2020F300)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_OFFSET UNITYSDK_OFFSET(0x2020F180)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2020C050)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x2020F170)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x2020F000)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2020F5D0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2020C4B0)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2020F060)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2020F420)
#define PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_WRITETO_OFFSET UNITYSDK_OFFSET(0x2020F480)

namespace Proto
{
	inline static constexpr unsigned int MissionCustomValueSnapshotList_TypeDefinitionIndex = 26329;

	class MissionCustomValueSnapshotList : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MissionCustomValueSnapshot*>* customValueList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::Proto::MissionCustomValueSnapshot*>** StaticGet__repeated_customValueList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::MissionCustomValueSnapshot*>**)UnitySDK::FromName("Proto", "MissionCustomValueSnapshotList")->GetStaticField(0x52B30);
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>**)UnitySDK::FromName("Proto", "MissionCustomValueSnapshotList")->GetStaticField(0x52B38);
		}

		// static const ::System::Object CustomValueListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MissionCustomValueSnapshotList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MissionCustomValueSnapshotList*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MissionCustomValueSnapshotList* Clone()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::MissionCustomValueSnapshot*>* get_CustomValueList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::MissionCustomValueSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GET_CUSTOMVALUELIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MissionCustomValueSnapshotList* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MissionCustomValueSnapshotList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MISSIONCUSTOMVALUESNAPSHOTLIST_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
