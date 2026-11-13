#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class SubMissionSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_SUBMISSIONSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202207A0)
#define PROTO_SUBMISSIONSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x202209C0)
#define PROTO_SUBMISSIONSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x20220390)
#define PROTO_SUBMISSIONSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20220360)
#define PROTO_SUBMISSIONSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x20220350)
#define PROTO_SUBMISSIONSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20220520)
#define PROTO_SUBMISSIONSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x20220420)
#define PROTO_SUBMISSIONSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20220690)
#define PROTO_SUBMISSIONSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x202202E0)
#define PROTO_SUBMISSIONSNAPSHOT_GET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x20220400)
#define PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20220860)
#define PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20220830)
#define PROTO_SUBMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20220340)
#define PROTO_SUBMISSIONSNAPSHOT_SET_SUBMISSIONID_OFFSET UNITYSDK_OFFSET(0x20220410)
#define PROTO_SUBMISSIONSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202206C0)
#define PROTO_SUBMISSIONSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x20220720)

namespace Proto
{
	inline static constexpr unsigned int SubMissionSnapshot_TypeDefinitionIndex = 26333;

	class SubMissionSnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 subMissionId_; // 0x18
		static ::Google::Protobuf::MessageParser_1<::Proto::SubMissionSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SubMissionSnapshot*>**)UnitySDK::FromName("Proto", "SubMissionSnapshot")->GetStaticField(0x546C0);
		}

		// static const ::System::Object SubMissionIdFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SubMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SubMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SubMissionSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SubMissionSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SubMissionSnapshot* Clone()
		{
			return ((::Proto::SubMissionSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_SubMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_GET_SUBMISSIONID_OFFSET))(this);
		}

		::System::Void set_SubMissionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_SET_SUBMISSIONID_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SubMissionSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SubMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SubMissionSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SubMissionSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SUBMISSIONSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
