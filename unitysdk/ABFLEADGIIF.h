#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLEADGIIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ABFLEADGIIF_BHAGPDKHKEO_OFFSET UNITYSDK_OFFSET(0x1DDC9AA0)
#define ABFLEADGIIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDC9E70)
#define ABFLEADGIIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDCA0D0)
#define ABFLEADGIIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDC9A70)
#define ABFLEADGIIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDC99E0)
#define ABFLEADGIIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9990)
#define ABFLEADGIIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDC9BA0)
#define ABFLEADGIIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDC9AB0)
#define ABFLEADGIIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDC9C90)
#define ABFLEADGIIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDC9950)
#define ABFLEADGIIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDC9F30)
#define ABFLEADGIIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDC9EE0)
#define ABFLEADGIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDC9980)
#define ABFLEADGIIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDC9D90)
#define ABFLEADGIIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDC9DF0)

	class ABFLEADGIIF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EPBBBBBKOMB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_BMCFHBLKBIM()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ABFLEADGIIF")->GetStaticField(0x38E00);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ABFLEADGIIF")->GetStaticField(0x38E08);
		}

		// static const ::System::Object MENDOAPHGON; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ABFLEADGIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFLEADGIIF*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABFLEADGIIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ABFLEADGIIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ABFLEADGIIF* Clone()
		{
			return ((::ABFLEADGIIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BHAGPDKHKEO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_BHAGPDKHKEO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ABFLEADGIIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABFLEADGIIF*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFLEADGIIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ABFLEADGIIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABFLEADGIIF*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ABFLEADGIIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
