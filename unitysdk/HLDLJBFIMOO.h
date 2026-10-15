#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLDLJBFIMOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HLDLJBFIMOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5BB0D0)
#define HLDLJBFIMOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5BB2F0)
#define HLDLJBFIMOO_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E5BAD40)
#define HLDLJBFIMOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5BACC0)
#define HLDLJBFIMOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5BAC90)
#define HLDLJBFIMOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5BAC80)
#define HLDLJBFIMOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5BAE50)
#define HLDLJBFIMOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5BAD50)
#define HLDLJBFIMOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5BAFC0)
#define HLDLJBFIMOO_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E5BAD30)
#define HLDLJBFIMOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5BAC10)
#define HLDLJBFIMOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5BB190)
#define HLDLJBFIMOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5BB160)
#define HLDLJBFIMOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5BAC70)
#define HLDLJBFIMOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5BAFF0)
#define HLDLJBFIMOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5BB050)

	class HLDLJBFIMOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 OGCMNCBOEJG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HLDLJBFIMOO")->GetStaticField(0x47800);
		}

		// static const ::System::Object HDGKLMKGNND; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HLDLJBFIMOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLDLJBFIMOO*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HLDLJBFIMOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HLDLJBFIMOO* Clone()
		{
			return ((::HLDLJBFIMOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CLONE_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HLDLJBFIMOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HLDLJBFIMOO*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HLDLJBFIMOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLDLJBFIMOO*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HLDLJBFIMOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
