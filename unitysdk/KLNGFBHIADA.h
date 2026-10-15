#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLNGFBHIADA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KLNGFBHIADA_ALHNMNOOHJO_OFFSET UNITYSDK_OFFSET(0x1E892730)
#define KLNGFBHIADA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E892AC0)
#define KLNGFBHIADA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E892CE0)
#define KLNGFBHIADA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8926B0)
#define KLNGFBHIADA_CPPDBEGDKIC_OFFSET UNITYSDK_OFFSET(0x1E892720)
#define KLNGFBHIADA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E892680)
#define KLNGFBHIADA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E892670)
#define KLNGFBHIADA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E892840)
#define KLNGFBHIADA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E892740)
#define KLNGFBHIADA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8929B0)
#define KLNGFBHIADA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E892600)
#define KLNGFBHIADA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E892B80)
#define KLNGFBHIADA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E892B50)
#define KLNGFBHIADA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E892660)
#define KLNGFBHIADA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8929E0)
#define KLNGFBHIADA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E892A40)

	class KLNGFBHIADA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KAIJDAAEEFJ; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KLNGFBHIADA")->GetStaticField(0x21900);
		}

		// static const ::System::Object PAPFLAJDAMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KLNGFBHIADA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNGFBHIADA*))((::PBYTE)hIl2Cpp + KLNGFBHIADA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLNGFBHIADA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KLNGFBHIADA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KLNGFBHIADA* Clone()
		{
			return ((::KLNGFBHIADA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPPDBEGDKIC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_CPPDBEGDKIC_OFFSET))(this);
		}

		::System::Void ALHNMNOOHJO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KLNGFBHIADA_ALHNMNOOHJO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KLNGFBHIADA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KLNGFBHIADA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLNGFBHIADA*))((::PBYTE)hIl2Cpp + KLNGFBHIADA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KLNGFBHIADA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KLNGFBHIADA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KLNGFBHIADA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KLNGFBHIADA*))((::PBYTE)hIl2Cpp + KLNGFBHIADA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KLNGFBHIADA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
