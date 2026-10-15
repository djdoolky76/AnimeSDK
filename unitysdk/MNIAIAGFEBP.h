#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNIAIAGFEBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNIAIAGFEBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA9A030)
#define MNIAIAGFEBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA9A2A0)
#define MNIAIAGFEBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA99A60)
#define MNIAIAGFEBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA99970)
#define MNIAIAGFEBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA998E0)
#define MNIAIAGFEBP_EKFOBGFBHGP_OFFSET UNITYSDK_OFFSET(0x1EA99AB0)
#define MNIAIAGFEBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA99C20)
#define MNIAIAGFEBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA99AD0)
#define MNIAIAGFEBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA99D30)
#define MNIAIAGFEBP_IEMKLKCJCEK_OFFSET UNITYSDK_OFFSET(0x1EA99AC0)
#define MNIAIAGFEBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA99870)
#define MNIAIAGFEBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA9A160)
#define MNIAIAGFEBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA9A100)
#define MNIAIAGFEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA998D0)
#define MNIAIAGFEBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA99EF0)
#define MNIAIAGFEBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA99F50)

	class MNIAIAGFEBP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EDDPICFEDDB; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EGONJHMIAAL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_EIAHOCECCNK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MNIAIAGFEBP")->GetStaticField(0x59F90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_HAIKNOLDMMF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MNIAIAGFEBP")->GetStaticField(0x59F98);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MNIAIAGFEBP")->GetStaticField(0x59FA0);
		}

		// static const ::System::Object CJCIBNGNGNC; // 0x0
		// static const ::System::Object CHOCGECCOAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNIAIAGFEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNIAIAGFEBP*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MNIAIAGFEBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNIAIAGFEBP* Clone()
		{
			return ((::MNIAIAGFEBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKFOBGFBHGP()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_EKFOBGFBHGP_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEMKLKCJCEK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_IEMKLKCJCEK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNIAIAGFEBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNIAIAGFEBP*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNIAIAGFEBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNIAIAGFEBP*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNIAIAGFEBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
