#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GetTutorialGuideScRsp; }
namespace Proto { class TutorialGuide; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GETTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFFA020)
#define PROTO_GETTUTORIALGUIDESCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFFA390)
#define PROTO_GETTUTORIALGUIDESCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF9B70)
#define PROTO_GETTUTORIALGUIDESCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF9AE0)
#define PROTO_GETTUTORIALGUIDESCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF9AA0)
#define PROTO_GETTUTORIALGUIDESCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF9D20)
#define PROTO_GETTUTORIALGUIDESCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF9BD0)
#define PROTO_GETTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF9E50)
#define PROTO_GETTUTORIALGUIDESCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF9A60)
#define PROTO_GETTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF9BA0)
#define PROTO_GETTUTORIALGUIDESCRSP_GET_TUTORIALGUIDELIST_OFFSET UNITYSDK_OFFSET(0x1DFF9BC0)
#define PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFFA1D0)
#define PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFFA130)
#define PROTO_GETTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF9A90)
#define PROTO_GETTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF9BB0)
#define PROTO_GETTUTORIALGUIDESCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF9EC0)
#define PROTO_GETTUTORIALGUIDESCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF9F20)

namespace Proto
{
	class GetTutorialGuideScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::TutorialGuide*>* tutorialGuideList_; // 0x10
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x18
		::System::UInt32 retcode_; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "GetTutorialGuideScRsp")->GetStaticField(0x43C50);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_tutorialGuideList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetTutorialGuideScRsp")->GetStaticField(0x43C58);
		}

		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object TutorialGuideListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetTutorialGuideScRsp* Clone()
		{
			return ((::Proto::GetTutorialGuideScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::TutorialGuide*>* get_TutorialGuideList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::TutorialGuide*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GET_TUTORIALGUIDELIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetTutorialGuideScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetTutorialGuideScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetTutorialGuideScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETTUTORIALGUIDESCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
