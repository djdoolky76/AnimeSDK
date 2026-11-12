#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class ByteString; }
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class MotionInfoSnapshot; }
namespace Proto { class SwitchHandDataNodeSnapshot; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_SWITCHHANDDATANODESNAPSHOT_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F2E6540)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F2E69C0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_CLONE_OFFSET UNITYSDK_OFFSET(0x1F2E5E30)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2E5D40)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E5CF0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2E5FC0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2E5F60)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2E6100)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1F2E5E80)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1F2E5F40)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDPARAM_OFFSET UNITYSDK_OFFSET(0x1F2E5EE0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDSTATE_OFFSET UNITYSDK_OFFSET(0x1F2E5EC0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F2E5EA0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1F2E5C80)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F2E6890)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2E67C0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2E5CE0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_CONFIGID_OFFSET UNITYSDK_OFFSET(0x1F2E5E90)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_GETCOINCOUNT_OFFSET UNITYSDK_OFFSET(0x1F2E5F50)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDPARAM_OFFSET UNITYSDK_OFFSET(0x1F2E5EF0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDSTATE_OFFSET UNITYSDK_OFFSET(0x1F2E5ED0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1F2E5EB0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2E62B0)
#define PROTO_SWITCHHANDDATANODESNAPSHOT_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F2E6310)

namespace Proto
{
	inline static constexpr unsigned int SwitchHandDataNodeSnapshot_TypeDefinitionIndex = 26349;

	class SwitchHandDataNodeSnapshot : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x10
		::Proto::MotionInfoSnapshot* handTransform_; // 0x18
		::Google::Protobuf::ByteString* handParam_; // 0x20
		::System::UInt32 handState_; // 0x28
		::System::UInt32 configId_; // 0x2C
		::System::UInt32 getCoinCount_; // 0x30
		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>**)UnitySDK::FromName("Proto", "SwitchHandDataNodeSnapshot")->GetStaticField(0x52820);
		}

		// static const ::System::Object ConfigIdFieldNumber; // 0x0
		// static const ::System::Object HandTransformFieldNumber; // 0x0
		// static const ::System::Object HandStateFieldNumber; // 0x0
		// static const ::System::Object HandParamFieldNumber; // 0x0
		// static const ::System::Object GetCoinCountFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::SwitchHandDataNodeSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser_1<::Proto::SwitchHandDataNodeSnapshot*>*(*)())((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::SwitchHandDataNodeSnapshot* Clone()
		{
			return ((::Proto::SwitchHandDataNodeSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_ConfigId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_CONFIGID_OFFSET))(this);
		}

		::System::Void set_ConfigId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_CONFIGID_OFFSET))(this, a1);
		}

		::Proto::MotionInfoSnapshot* get_HandTransform()
		{
			return ((::Proto::MotionInfoSnapshot*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDTRANSFORM_OFFSET))(this);
		}

		::System::Void set_HandTransform(::Proto::MotionInfoSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::MotionInfoSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDTRANSFORM_OFFSET))(this, a1);
		}

		::System::UInt32 get_HandState()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDSTATE_OFFSET))(this);
		}

		::System::Void set_HandState(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDSTATE_OFFSET))(this, a1);
		}

		::Google::Protobuf::ByteString* get_HandParam()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_HANDPARAM_OFFSET))(this);
		}

		::System::Void set_HandParam(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_HANDPARAM_OFFSET))(this, a1);
		}

		::System::UInt32 get_GetCoinCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GET_GETCOINCOUNT_OFFSET))(this);
		}

		::System::Void set_GetCoinCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_SET_GETCOINCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::SwitchHandDataNodeSnapshot* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::SwitchHandDataNodeSnapshot* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::SwitchHandDataNodeSnapshot*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_SWITCHHANDDATANODESNAPSHOT_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
