#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAEGAJHHKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFAEGAJHHKH_AAEJIOFGPME_OFFSET UNITYSDK_OFFSET(0x1EA65CB0)
#define BFAEGAJHHKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA66030)
#define BFAEGAJHHKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA66270)
#define BFAEGAJHHKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA65C60)
#define BFAEGAJHHKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA65C30)
#define BFAEGAJHHKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA65C20)
#define BFAEGAJHHKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA65D90)
#define BFAEGAJHHKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA65CC0)
#define BFAEGAJHHKH_FCBGDBLFOID_OFFSET UNITYSDK_OFFSET(0x1EA65CA0)
#define BFAEGAJHHKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA65F00)
#define BFAEGAJHHKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA65BE0)
#define BFAEGAJHHKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA66110)
#define BFAEGAJHHKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA660E0)
#define BFAEGAJHHKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA65C10)
#define BFAEGAJHHKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA65F30)
#define BFAEGAJHHKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA65F90)

	class BFAEGAJHHKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 ADDHGJADLCG; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFAEGAJHHKH")->GetStaticField(0x411A0);
		}

		// static const ::System::Object JGOPKCJPHKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFAEGAJHHKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAEGAJHHKH*))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFAEGAJHHKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFAEGAJHHKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFAEGAJHHKH* Clone()
		{
			return ((::BFAEGAJHHKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_CLONE_OFFSET))(this);
		}

		::System::Int32 FCBGDBLFOID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_FCBGDBLFOID_OFFSET))(this);
		}

		::System::Void AAEJIOFGPME(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_AAEJIOFGPME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFAEGAJHHKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFAEGAJHHKH*))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFAEGAJHHKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFAEGAJHHKH*))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFAEGAJHHKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
