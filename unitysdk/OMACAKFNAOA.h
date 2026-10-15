#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class OMACAKFNAOA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMACAKFNAOA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEAE720)
#define OMACAKFNAOA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEAEA00)
#define OMACAKFNAOA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEAE300)
#define OMACAKFNAOA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEAE270)
#define OMACAKFNAOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE230)
#define OMACAKFNAOA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEAE480)
#define OMACAKFNAOA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEAE340)
#define OMACAKFNAOA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEAE5A0)
#define OMACAKFNAOA_HBADGGKHNFD_OFFSET UNITYSDK_OFFSET(0x1DEAE330)
#define OMACAKFNAOA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEAE1F0)
#define OMACAKFNAOA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEAE860)
#define OMACAKFNAOA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEAE7C0)
#define OMACAKFNAOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEAE220)
#define OMACAKFNAOA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEAE610)
#define OMACAKFNAOA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEAE670)

	class OMACAKFNAOA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* LHDMDIJJCGD; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OMACAKFNAOA")->GetStaticField(0x24560);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BDBKHALJCJA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OMACAKFNAOA")->GetStaticField(0x24568);
		}

		// static const ::System::Object AEHCKJFCPGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMACAKFNAOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMACAKFNAOA*))((::PBYTE)hIl2Cpp + OMACAKFNAOA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMACAKFNAOA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OMACAKFNAOA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMACAKFNAOA* Clone()
		{
			return ((::OMACAKFNAOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HBADGGKHNFD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_HBADGGKHNFD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMACAKFNAOA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMACAKFNAOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMACAKFNAOA*))((::PBYTE)hIl2Cpp + OMACAKFNAOA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMACAKFNAOA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMACAKFNAOA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMACAKFNAOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMACAKFNAOA*))((::PBYTE)hIl2Cpp + OMACAKFNAOA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMACAKFNAOA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
