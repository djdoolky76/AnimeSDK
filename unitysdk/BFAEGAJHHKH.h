#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFAEGAJHHKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFAEGAJHHKH_AAEJIOFGPME_OFFSET UNITYSDK_OFFSET(0x1EA385E0)
#define BFAEGAJHHKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA38960)
#define BFAEGAJHHKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA38BA0)
#define BFAEGAJHHKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA38590)
#define BFAEGAJHHKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA38560)
#define BFAEGAJHHKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA38550)
#define BFAEGAJHHKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA386C0)
#define BFAEGAJHHKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA385F0)
#define BFAEGAJHHKH_FCBGDBLFOID_OFFSET UNITYSDK_OFFSET(0x1EA385D0)
#define BFAEGAJHHKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA38830)
#define BFAEGAJHHKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA38510)
#define BFAEGAJHHKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA38A40)
#define BFAEGAJHHKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA38A10)
#define BFAEGAJHHKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA38540)
#define BFAEGAJHHKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA38860)
#define BFAEGAJHHKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA388C0)

inline static constexpr unsigned int BFAEGAJHHKH_TypeDefinitionIndex = 27439;

	class BFAEGAJHHKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 ADDHGJADLCG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BFAEGAJHHKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BFAEGAJHHKH*>**)UnitySDK::FromName("", "BFAEGAJHHKH")->GetStaticField(0x53740);
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

		static ::Google::Protobuf::MessageParser_1<::BFAEGAJHHKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BFAEGAJHHKH*>*(*)())((::PBYTE)hIl2Cpp + BFAEGAJHHKH_JJGHOBBFNJD_OFFSET))();
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
