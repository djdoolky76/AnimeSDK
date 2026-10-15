#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MainMissionMcvSnapshot; }
namespace Proto { class MissionCustomValueSnapshotList; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_MAINMISSIONMCVSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E001170)
#define PROTO_MAINMISSIONMCVSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0016B0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1E000B00)
#define PROTO_MAINMISSIONMCVSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E000A30)
#define PROTO_MAINMISSIONMCVSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1E000A20)
#define PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E000DB0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E000C00)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E000F30)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x1E000BE0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1E000BC0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1E0009B0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0014C0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E001240)
#define PROTO_MAINMISSIONMCVSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E000A10)
#define PROTO_MAINMISSIONMCVSNAPSHOT_SET_CUSTOMVALUELIST_OFFSET UNITYSDK_OFFSET(0x1E000BF0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1E000BD0)
#define PROTO_MAINMISSIONMCVSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E001030)
#define PROTO_MAINMISSIONMCVSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E001090)

namespace Proto
{
	inline static constexpr unsigned int MainMissionMcvSnapshot_TypeDefinitionIndex = 25834;

	class MainMissionMcvSnapshot : public ::System::Object
	{
	public:
		::Proto::MissionCustomValueSnapshotList* customValueList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 mainMissionId_; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "MainMissionMcvSnapshot")->GetStaticField(0x43D50);
		}

		// static const ::System::Object MainMissionIdFieldNumber; // 0x0
		// static const ::System::Object CustomValueListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::MainMissionMcvSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::MainMissionMcvSnapshot* Clone()
		{
			return ((::Proto::MainMissionMcvSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, a1);
		}

		::Proto::MissionCustomValueSnapshotList* get_CustomValueList()
		{
			return ((::Proto::MissionCustomValueSnapshotList*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GET_CUSTOMVALUELIST_OFFSET))(this);
		}

		::System::Void set_CustomValueList(::Proto::MissionCustomValueSnapshotList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MissionCustomValueSnapshotList*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_SET_CUSTOMVALUELIST_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::MainMissionMcvSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::MainMissionMcvSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MainMissionMcvSnapshot*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_MAINMISSIONMCVSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
