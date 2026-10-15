#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIOAOEGEIKH;
class PEGJIHHIFOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIOAOEGEIKH_BAPCFHFCCLI_OFFSET UNITYSDK_OFFSET(0x1E0D6B00)
#define CIOAOEGEIKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0D6F30)
#define CIOAOEGEIKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D7230)
#define CIOAOEGEIKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0D6AB0)
#define CIOAOEGEIKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0D6A00)
#define CIOAOEGEIKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D69B0)
#define CIOAOEGEIKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0D6C90)
#define CIOAOEGEIKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0D6B10)
#define CIOAOEGEIKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0D6DB0)
#define CIOAOEGEIKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0D6940)
#define CIOAOEGEIKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0D7070)
#define CIOAOEGEIKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0D6FD0)
#define CIOAOEGEIKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0D69A0)
#define CIOAOEGEIKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0D6E20)
#define CIOAOEGEIKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0D6E80)

	class CIOAOEGEIKH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::PEGJIHHIFOP*>* KIPCOCNFOPC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_LAHAPCNNBBG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "CIOAOEGEIKH")->GetStaticField(0x18870);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CIOAOEGEIKH")->GetStaticField(0x18878);
		}

		// static const ::System::Object HCHIEHGHBEB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIOAOEGEIKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOAOEGEIKH*))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIOAOEGEIKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CIOAOEGEIKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIOAOEGEIKH* Clone()
		{
			return ((::CIOAOEGEIKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::PEGJIHHIFOP*>* BAPCFHFCCLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::PEGJIHHIFOP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_BAPCFHFCCLI_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIOAOEGEIKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIOAOEGEIKH*))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIOAOEGEIKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIOAOEGEIKH*))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIOAOEGEIKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
