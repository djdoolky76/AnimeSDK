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
namespace Proto { class MainMissionSnapshot; }
namespace Proto { class SubMissionSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_MAINMISSIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2D2080)
#define PROTO_MAINMISSIONSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2D2400)
#define PROTO_MAINMISSIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2D1B70)
#define PROTO_MAINMISSIONSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2D1AB0)
#define PROTO_MAINMISSIONSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D1A60)
#define PROTO_MAINMISSIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2D1D80)
#define PROTO_MAINMISSIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2D1BF0)
#define PROTO_MAINMISSIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2D1EB0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1F2D1BC0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F2D19F0)
#define PROTO_MAINMISSIONSNAPSHOT_GET_SUBMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x1F2D1BE0)
#define PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2D2230)
#define PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2D2190)
#define PROTO_MAINMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2D1A50)
#define PROTO_MAINMISSIONSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1F2D1BD0)
#define PROTO_MAINMISSIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2D1F20)
#define PROTO_MAINMISSIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2D1F80)

namespace Proto
{
	inline static constexpr unsigned int MainMissionSnapshot_TypeDefinitionIndex = 26335;

	class MainMissionSnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>* subMissionList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::Proto::SubMissionSnapshot*>** StaticGet__repeated_subMissionList_codec()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::SubMissionSnapshot*>**)UnitySDK::FromName("Proto", "MainMissionSnapshot")->GetStaticField(0x50220);
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>**)UnitySDK::FromName("Proto", "MainMissionSnapshot")->GetStaticField(0x50228);
		}

		// static const ::System::Object MainMissionIdFieldNumber; // 0x0
		// static const ::System::Object SubMissionListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::MainMissionSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MainMissionSnapshot* Clone()
		{
			return ((::Proto::MainMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>* get_SubMissionList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::SubMissionSnapshot*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GET_SUBMISSIONLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MainMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
