#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ActiveMCVKeySnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_ACTIVEMCVKEYSNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFE5D90)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFE6070)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFE5870)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFE5830)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5820)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFE5A90)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFE5960)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFE5B90)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DFE58E0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x1DFE5900)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFE57B0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFE5EC0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFE5E70)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFE5810)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MAINMISSIONID_OFFSET UNITYSDK_OFFSET(0x1DFE58F0)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MCVKEY_OFFSET UNITYSDK_OFFSET(0x1DFE5910)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFE5C40)
#define PROTO_ACTIVEMCVKEYSNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFE5CA0)

namespace Proto
{
	inline static constexpr unsigned int ActiveMCVKeySnapshot_TypeDefinitionIndex = 25819;

	class ActiveMCVKeySnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::String* mcvKey_; // 0x18
		::System::UInt32 mainMissionId_; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "ActiveMCVKeySnapshot")->GetStaticField(0x43920);
		}

		// static const ::System::Object MainMissionIdFieldNumber; // 0x0
		// static const ::System::Object McvKeyFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::ActiveMCVKeySnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::ActiveMCVKeySnapshot* Clone()
		{
			return ((::Proto::ActiveMCVKeySnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_MainMissionId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MAINMISSIONID_OFFSET))(this);
		}

		::System::Void set_MainMissionId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MAINMISSIONID_OFFSET))(this, a1);
		}

		::System::String* get_McvKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GET_MCVKEY_OFFSET))(this);
		}

		::System::Void set_McvKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_SET_MCVKEY_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::ActiveMCVKeySnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::ActiveMCVKeySnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ActiveMCVKeySnapshot*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_ACTIVEMCVKEYSNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
