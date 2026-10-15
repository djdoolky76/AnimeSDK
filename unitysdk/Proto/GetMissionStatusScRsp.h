#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DGDHPPIHNMA;
class FJEFBKAKNAH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class GetMissionStatusScRsp; }
namespace System { class Object; }
namespace System { class String; }

#define PROTO_GETMISSIONSTATUSSCRSP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFF75A0)
#define PROTO_GETMISSIONSTATUSSCRSP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFF7BD0)
#define PROTO_GETMISSIONSTATUSSCRSP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFF6D00)
#define PROTO_GETMISSIONSTATUSSCRSP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFF6BE0)
#define PROTO_GETMISSIONSTATUSSCRSP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6A70)
#define PROTO_GETMISSIONSTATUSSCRSP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFF6DE0)
#define PROTO_GETMISSIONSTATUSSCRSP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFF6DB0)
#define PROTO_GETMISSIONSTATUSSCRSP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFF6F40)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_CURVERSIONFINISHEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFF6D80)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_DISABLEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFF6D60)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_FINISHEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFF6D50)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_MAINMISSIONMCVLIST_OFFSET UNITYSDK_OFFSET(0x1DFF6D70)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_PARSER_OFFSET UNITYSDK_OFFSET(0x1DFF6A30)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF6D30)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_SUBMISSIONSTATUSLIST_OFFSET UNITYSDK_OFFSET(0x1DFF6D90)
#define PROTO_GETMISSIONSTATUSSCRSP_GET_UNFINISHEDMAINMISSIONIDLIST_OFFSET UNITYSDK_OFFSET(0x1DFF6DA0)
#define PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFF7910)
#define PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFF77A0)
#define PROTO_GETMISSIONSTATUSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFF6A60)
#define PROTO_GETMISSIONSTATUSSCRSP_SET_RETCODE_OFFSET UNITYSDK_OFFSET(0x1DFF6D40)
#define PROTO_GETMISSIONSTATUSSCRSP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFF7320)
#define PROTO_GETMISSIONSTATUSSCRSP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFF7380)

namespace Proto
{
	inline static constexpr unsigned int GetMissionStatusScRsp_TypeDefinitionIndex = 30960;

	class GetMissionStatusScRsp : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* unfinishedMainMissionIdList_; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FJEFBKAKNAH*>* mainMissionMcvList_; // 0x18
		::Google::Protobuf::UnknownFieldSet* _unknownFields; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* finishedMainMissionIdList_; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* disabledMainMissionIdList_; // 0x30
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* curversionFinishedMainMissionIdList_; // 0x38
		::Google::Protobuf::Collections::RepeatedField_1<::DGDHPPIHNMA*>* subMissionStatusList_; // 0x40
		::System::UInt32 retcode_; // 0x48
		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_unfinishedMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BC0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet__parser()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BC8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_curversionFinishedMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BD0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_subMissionStatusList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BD8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_disabledMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BE0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_mainMissionMcvList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BE8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet__repeated_finishedMainMissionIdList_codec()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("Proto", "GetMissionStatusScRsp")->GetStaticField(0x43BF0);
		}

		// static const ::System::Object RetcodeFieldNumber; // 0x0
		// static const ::System::Object FinishedMainMissionIdListFieldNumber; // 0x0
		// static const ::System::Object DisabledMainMissionIdListFieldNumber; // 0x0
		// static const ::System::Object MainMissionMcvListFieldNumber; // 0x0
		// static const ::System::Object CurversionFinishedMainMissionIdListFieldNumber; // 0x0
		// static const ::System::Object SubMissionStatusListFieldNumber; // 0x0
		// static const ::System::Object UnfinishedMainMissionIdListFieldNumber; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Proto::GetMissionStatusScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMissionStatusScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* get_Parser()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_PARSER_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::Proto::GetMissionStatusScRsp* Clone()
		{
			return ((::Proto::GetMissionStatusScRsp*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CLONE_OFFSET))(this);
		}

		::System::UInt32 get_Retcode()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_RETCODE_OFFSET))(this);
		}

		::System::Void set_Retcode(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_SET_RETCODE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_FinishedMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_FINISHEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_DisabledMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_DISABLEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FJEFBKAKNAH*>* get_MainMissionMcvList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FJEFBKAKNAH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_MAINMISSIONMCVLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_CurversionFinishedMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_CURVERSIONFINISHEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DGDHPPIHNMA*>* get_SubMissionStatusList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DGDHPPIHNMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_SUBMISSIONSTATUSLIST_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* get_UnfinishedMainMissionIdList()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GET_UNFINISHEDMAINMISSIONIDLIST_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::Proto::GetMissionStatusScRsp* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Proto::GetMissionStatusScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::Proto::GetMissionStatusScRsp* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::GetMissionStatusScRsp*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PROTO_GETMISSIONSTATUSSCRSP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
}
