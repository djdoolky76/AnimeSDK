#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class INOEJKDIMKO;
class KLBPBDLHKBG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define INOEJKDIMKO_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E6C6B30)
#define INOEJKDIMKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6C6F20)
#define INOEJKDIMKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6C7220)
#define INOEJKDIMKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6C6B00)
#define INOEJKDIMKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6C6A50)
#define INOEJKDIMKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6C6A00)
#define INOEJKDIMKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6C6C80)
#define INOEJKDIMKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6C6B40)
#define INOEJKDIMKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6C6DA0)
#define INOEJKDIMKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6C69C0)
#define INOEJKDIMKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6C7060)
#define INOEJKDIMKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6C6FC0)
#define INOEJKDIMKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6C69F0)
#define INOEJKDIMKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6C6E10)
#define INOEJKDIMKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6C6E70)

	class INOEJKDIMKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KLBPBDLHKBG*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "INOEJKDIMKO")->GetStaticField(0x58AD0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "INOEJKDIMKO")->GetStaticField(0x58AD8);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::INOEJKDIMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INOEJKDIMKO*))((::PBYTE)hIl2Cpp + INOEJKDIMKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INOEJKDIMKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + INOEJKDIMKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::INOEJKDIMKO* Clone()
		{
			return ((::INOEJKDIMKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KLBPBDLHKBG*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KLBPBDLHKBG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + INOEJKDIMKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::INOEJKDIMKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INOEJKDIMKO*))((::PBYTE)hIl2Cpp + INOEJKDIMKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + INOEJKDIMKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + INOEJKDIMKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::INOEJKDIMKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::INOEJKDIMKO*))((::PBYTE)hIl2Cpp + INOEJKDIMKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + INOEJKDIMKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
