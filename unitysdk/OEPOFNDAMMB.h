#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEPOFNDAMMB_FHFHOLJCOCL.h"
#include "unitysdk/System/Object.h"
class OEPOFNDAMMB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OEPOFNDAMMB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1F6ED0)
#define OEPOFNDAMMB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F7330)
#define OEPOFNDAMMB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1F6710)
#define OEPOFNDAMMB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1F6440)
#define OEPOFNDAMMB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F6430)
#define OEPOFNDAMMB_DOFJGIMGDCK_OFFSET UNITYSDK_OFFSET(0x1F1F6770)
#define OEPOFNDAMMB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1F67E0)
#define OEPOFNDAMMB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1F6780)
#define OEPOFNDAMMB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1F6B30)
#define OEPOFNDAMMB_JCFLOMCAAAA_OFFSET UNITYSDK_OFFSET(0x1F1F6620)
#define OEPOFNDAMMB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1F63C0)
#define OEPOFNDAMMB_JLNPMMCFDLP_OFFSET UNITYSDK_OFFSET(0x1F1F66E0)
#define OEPOFNDAMMB_LODKJOJJLEH_OFFSET UNITYSDK_OFFSET(0x1F1F6760)
#define OEPOFNDAMMB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1F7160)
#define OEPOFNDAMMB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1F7000)
#define OEPOFNDAMMB_ONKKJFCILPP_OFFSET UNITYSDK_OFFSET(0x1F1F6650)
#define OEPOFNDAMMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1F6420)
#define OEPOFNDAMMB_PEILKLFBGIM_OFFSET UNITYSDK_OFFSET(0x1F1F65A0)
#define OEPOFNDAMMB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1F6C50)
#define OEPOFNDAMMB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1F6CB0)

inline static constexpr unsigned int OEPOFNDAMMB_TypeDefinitionIndex = 30383;

	class OEPOFNDAMMB : public ::System::Object
	{
	public:
		::System::Object* EBHOHHBEMDA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::OEPOFNDAMMB_FHFHOLJCOCL MKFJGPAMOCF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OEPOFNDAMMB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OEPOFNDAMMB*>**)UnitySDK::FromName("", "OEPOFNDAMMB")->GetStaticField(0x11400);
		}

		// static const ::System::Object KMKMLMNJGHF; // 0x0
		// static const ::System::Object GEPDCKJFLPA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OEPOFNDAMMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEPOFNDAMMB*))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEPOFNDAMMB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OEPOFNDAMMB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OEPOFNDAMMB*>*(*)())((::PBYTE)hIl2Cpp + OEPOFNDAMMB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OEPOFNDAMMB* Clone()
		{
			return ((::OEPOFNDAMMB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_CLONE_OFFSET))(this);
		}

		::System::UInt32 PEILKLFBGIM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_PEILKLFBGIM_OFFSET))(this);
		}

		::System::Void JCFLOMCAAAA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_JCFLOMCAAAA_OFFSET))(this, a1);
		}

		::System::Boolean ONKKJFCILPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_ONKKJFCILPP_OFFSET))(this);
		}

		::System::Void JLNPMMCFDLP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_JLNPMMCFDLP_OFFSET))(this, a1);
		}

		::OEPOFNDAMMB_FHFHOLJCOCL LODKJOJJLEH()
		{
			return ((::OEPOFNDAMMB_FHFHOLJCOCL(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_LODKJOJJLEH_OFFSET))(this);
		}

		::System::Void DOFJGIMGDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_DOFJGIMGDCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OEPOFNDAMMB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OEPOFNDAMMB*))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OEPOFNDAMMB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OEPOFNDAMMB*))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OEPOFNDAMMB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
