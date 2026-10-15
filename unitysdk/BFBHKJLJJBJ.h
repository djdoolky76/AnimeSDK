#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJPMJPEKLJL.h"
#include "unitysdk/System/Object.h"
class BFBHKJLJJBJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFBHKJLJJBJ_ANFLJMLCDNI_OFFSET UNITYSDK_OFFSET(0x1EA6B990)
#define BFBHKJLJJBJ_AOOHEDBEBFM_OFFSET UNITYSDK_OFFSET(0x1EA6B970)
#define BFBHKJLJJBJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6BD20)
#define BFBHKJLJJBJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6C080)
#define BFBHKJLJJBJ_CLALCKGPLEE_OFFSET UNITYSDK_OFFSET(0x1EA6B9A0)
#define BFBHKJLJJBJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6B8F0)
#define BFBHKJLJJBJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6B8B0)
#define BFBHKJLJJBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6B8A0)
#define BFBHKJLJJBJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6BAC0)
#define BFBHKJLJJBJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6B9B0)
#define BFBHKJLJJBJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6BB90)
#define BFBHKJLJJBJ_ILAALMHGPPD_OFFSET UNITYSDK_OFFSET(0x1EA6B980)
#define BFBHKJLJJBJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6B830)
#define BFBHKJLJJBJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6BF00)
#define BFBHKJLJJBJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6BEC0)
#define BFBHKJLJJBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6B890)
#define BFBHKJLJJBJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6BBD0)
#define BFBHKJLJJBJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6BC30)

	class BFBHKJLJJBJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 ECAANHKPOHG; // 0x18
		::FJPMJPEKLJL FECLODDNKPG; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFBHKJLJJBJ")->GetStaticField(0x42100);
		}

		// static const ::System::Object ACEMJLBCIPJ; // 0x0
		// static const ::System::Object FDDCJNNJNOD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFBHKJLJJBJ* Clone()
		{
			return ((::BFBHKJLJJBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_CLONE_OFFSET))(this);
		}

		::System::UInt64 AOOHEDBEBFM()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_AOOHEDBEBFM_OFFSET))(this);
		}

		::System::Void ILAALMHGPPD(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_ILAALMHGPPD_OFFSET))(this, a1);
		}

		::FJPMJPEKLJL ANFLJMLCDNI()
		{
			return ((::FJPMJPEKLJL(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_ANFLJMLCDNI_OFFSET))(this);
		}

		::System::Void CLALCKGPLEE(::FJPMJPEKLJL a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJPMJPEKLJL))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_CLALCKGPLEE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFBHKJLJJBJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFBHKJLJJBJ*))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFBHKJLJJBJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
