#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFDJNEOHCLB;
class JLPEICPFLMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFDJNEOHCLB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E115340)
#define AFDJNEOHCLB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1156F0)
#define AFDJNEOHCLB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E114D50)
#define AFDJNEOHCLB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E114CD0)
#define AFDJNEOHCLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E114CC0)
#define AFDJNEOHCLB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E114FD0)
#define AFDJNEOHCLB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E114E40)
#define AFDJNEOHCLB_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E114E30)
#define AFDJNEOHCLB_FJNIJBIIFGO_OFFSET UNITYSDK_OFFSET(0x1E114DE0)
#define AFDJNEOHCLB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E115160)
#define AFDJNEOHCLB_HOIGNMNJJIB_OFFSET UNITYSDK_OFFSET(0x1E114E10)
#define AFDJNEOHCLB_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E114E20)
#define AFDJNEOHCLB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E114C80)
#define AFDJNEOHCLB_LNALLDAHJFD_OFFSET UNITYSDK_OFFSET(0x1E114E00)
#define AFDJNEOHCLB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E115520)
#define AFDJNEOHCLB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E115480)
#define AFDJNEOHCLB_NGCIBAOKDNB_OFFSET UNITYSDK_OFFSET(0x1E114DF0)
#define AFDJNEOHCLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E114CB0)
#define AFDJNEOHCLB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1151A0)
#define AFDJNEOHCLB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E115200)

	class AFDJNEOHCLB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JLPEICPFLMC* HDAIPLJBGAB; // 0x18
		::System::UInt32 LDKJICDMLIN; // 0x20
		::System::UInt32 NDFIDCNNGMJ; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AFDJNEOHCLB")->GetStaticField(0x2E210);
		}

		// static const ::System::Object KLJANMLJHEF; // 0x0
		// static const ::System::Object APAOJFFMJKD; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFDJNEOHCLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFDJNEOHCLB*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFDJNEOHCLB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AFDJNEOHCLB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFDJNEOHCLB* Clone()
		{
			return ((::AFDJNEOHCLB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FJNIJBIIFGO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_FJNIJBIIFGO_OFFSET))(this);
		}

		::System::Void NGCIBAOKDNB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_NGCIBAOKDNB_OFFSET))(this, a1);
		}

		::System::UInt32 LNALLDAHJFD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_LNALLDAHJFD_OFFSET))(this);
		}

		::System::Void HOIGNMNJJIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_HOIGNMNJJIB_OFFSET))(this, a1);
		}

		::JLPEICPFLMC* IOIFPHAMFDF()
		{
			return ((::JLPEICPFLMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::JLPEICPFLMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFDJNEOHCLB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFDJNEOHCLB*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFDJNEOHCLB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFDJNEOHCLB*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFDJNEOHCLB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
