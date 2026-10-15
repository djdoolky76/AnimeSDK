#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMJPAPIDKKM;
class GIIJKONEENG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GIIJKONEENG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E49AA70)
#define GIIJKONEENG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E49AD50)
#define GIIJKONEENG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E49A650)
#define GIIJKONEENG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E49A5C0)
#define GIIJKONEENG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E49A580)
#define GIIJKONEENG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E49A7D0)
#define GIIJKONEENG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E49A690)
#define GIIJKONEENG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E49A8F0)
#define GIIJKONEENG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E49A540)
#define GIIJKONEENG_LCHHOMMPFCN_OFFSET UNITYSDK_OFFSET(0x1E49A680)
#define GIIJKONEENG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E49ABB0)
#define GIIJKONEENG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E49AB10)
#define GIIJKONEENG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E49A570)
#define GIIJKONEENG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E49A960)
#define GIIJKONEENG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E49A9C0)

	class GIIJKONEENG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>* GKENPDNNAKC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec** StaticGet_ECFIHCFFJED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "GIIJKONEENG")->GetStaticField(0x19CF0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GIIJKONEENG")->GetStaticField(0x19CF8);
		}

		// static const ::System::Object HEKNKDNFIME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GIIJKONEENG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIIJKONEENG*))((::PBYTE)hIl2Cpp + GIIJKONEENG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GIIJKONEENG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GIIJKONEENG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GIIJKONEENG* Clone()
		{
			return ((::GIIJKONEENG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>* LCHHOMMPFCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BMJPAPIDKKM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_LCHHOMMPFCN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GIIJKONEENG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GIIJKONEENG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GIIJKONEENG*))((::PBYTE)hIl2Cpp + GIIJKONEENG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GIIJKONEENG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GIIJKONEENG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GIIJKONEENG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIIJKONEENG*))((::PBYTE)hIl2Cpp + GIIJKONEENG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GIIJKONEENG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
