#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class OptionalReward; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_OPTIONALREWARD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2D8BE0)
#define PROTO_OPTIONALREWARD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2D8EB0)
#define PROTO_OPTIONALREWARD_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2D87E0)
#define PROTO_OPTIONALREWARD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2D87B0)
#define PROTO_OPTIONALREWARD_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2D87A0)
#define PROTO_OPTIONALREWARD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2D89A0)
#define PROTO_OPTIONALREWARD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2D8890)
#define PROTO_OPTIONALREWARD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2D8A70)
#define PROTO_OPTIONALREWARD_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F2D8870)
#define PROTO_OPTIONALREWARD_GET_OPTIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x1F2D8850)
#define PROTO_OPTIONALREWARD_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F2D8730)
#define PROTO_OPTIONALREWARD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2D8D30)
#define PROTO_OPTIONALREWARD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2D8CF0)
#define PROTO_OPTIONALREWARD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2D8790)
#define PROTO_OPTIONALREWARD_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1F2D8880)
#define PROTO_OPTIONALREWARD_SET_OPTIONALREWARDID_OFFSET UNITYSDK_OFFSET(0x1F2D8860)
#define PROTO_OPTIONALREWARD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2D8AA0)
#define PROTO_OPTIONALREWARD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2D8B00)

namespace Proto
{
	inline static constexpr unsigned int OptionalReward_TypeDefinitionIndex = 27084;

	class OptionalReward : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::System::UInt32 level_; // 0x18
		::System::UInt32 optionalRewardId_; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::Proto::OptionalReward*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::OptionalReward*>**)UnitySDK::FromName("Proto", "OptionalReward")->GetStaticField(0x290F0);
		}

		// static const ::System::Object OptionalRewardIdFieldNumber; // 0x0
		// static const ::System::Object LevelFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::OptionalReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::OptionalReward*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::OptionalReward*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::OptionalReward*>*(*)())((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::OptionalReward* Clone()
		{
			return ((::Proto::OptionalReward*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_OptionalRewardId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GET_OPTIONALREWARDID_OFFSET))(this);
		}

		::System::Void set_OptionalRewardId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_SET_OPTIONALREWARDID_OFFSET))(this, a1);
		}

		::System::UInt32 get_Level()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::OptionalReward* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::OptionalReward*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::OptionalReward* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::OptionalReward*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_OPTIONALREWARD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
