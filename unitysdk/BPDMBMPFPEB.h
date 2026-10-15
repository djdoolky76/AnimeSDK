#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPDMBMPFPEB;
class LEJNBBLNNDM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPDMBMPFPEB_BEMEFIJPBKC_OFFSET UNITYSDK_OFFSET(0x1E041700)
#define BPDMBMPFPEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E041AF0)
#define BPDMBMPFPEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E041DF0)
#define BPDMBMPFPEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0416D0)
#define BPDMBMPFPEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E041620)
#define BPDMBMPFPEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0415D0)
#define BPDMBMPFPEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E041850)
#define BPDMBMPFPEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E041710)
#define BPDMBMPFPEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E041970)
#define BPDMBMPFPEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E041590)
#define BPDMBMPFPEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E041C30)
#define BPDMBMPFPEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E041B90)
#define BPDMBMPFPEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0415C0)
#define BPDMBMPFPEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0419E0)
#define BPDMBMPFPEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E041A40)

	class BPDMBMPFPEB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::LEJNBBLNNDM*>* BPJNCMFCKBJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BPDMBMPFPEB")->GetStaticField(0x55070);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JFCIBIJLOCN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BPDMBMPFPEB")->GetStaticField(0x55078);
		}

		// static const ::System::Object GNPGDFMNEDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPDMBMPFPEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPDMBMPFPEB*))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPDMBMPFPEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BPDMBMPFPEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPDMBMPFPEB* Clone()
		{
			return ((::BPDMBMPFPEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::LEJNBBLNNDM*>* BEMEFIJPBKC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::LEJNBBLNNDM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_BEMEFIJPBKC_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPDMBMPFPEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPDMBMPFPEB*))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPDMBMPFPEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPDMBMPFPEB*))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPDMBMPFPEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
