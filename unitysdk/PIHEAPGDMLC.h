#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HLOADNFIOOO;
class PIHEAPGDMLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIHEAPGDMLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF46250)
#define PIHEAPGDMLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF46600)
#define PIHEAPGDMLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF45C10)
#define PIHEAPGDMLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF45BA0)
#define PIHEAPGDMLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF45B90)
#define PIHEAPGDMLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF45E50)
#define PIHEAPGDMLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF45CD0)
#define PIHEAPGDMLC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF45CC0)
#define PIHEAPGDMLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF45FD0)
#define PIHEAPGDMLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF45B50)
#define PIHEAPGDMLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF46420)
#define PIHEAPGDMLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF46320)
#define PIHEAPGDMLC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF45CB0)
#define PIHEAPGDMLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF45B80)
#define PIHEAPGDMLC_PCKAPCNKKLA_OFFSET UNITYSDK_OFFSET(0x1DF45CA0)
#define PIHEAPGDMLC_POBDDCDJLOF_OFFSET UNITYSDK_OFFSET(0x1DF45C90)
#define PIHEAPGDMLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF46110)
#define PIHEAPGDMLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF46170)

	class PIHEAPGDMLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HLOADNFIOOO* NIBAIAPAFFD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIHEAPGDMLC")->GetStaticField(0x40FC0);
		}

		// static const ::System::Object PKNCPCMMIIC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIHEAPGDMLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHEAPGDMLC*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHEAPGDMLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIHEAPGDMLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIHEAPGDMLC* Clone()
		{
			return ((::PIHEAPGDMLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_CLONE_OFFSET))(this);
		}

		::HLOADNFIOOO* POBDDCDJLOF()
		{
			return ((::HLOADNFIOOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_POBDDCDJLOF_OFFSET))(this);
		}

		::System::Void PCKAPCNKKLA(::HLOADNFIOOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HLOADNFIOOO*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_PCKAPCNKKLA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIHEAPGDMLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIHEAPGDMLC*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIHEAPGDMLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHEAPGDMLC*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIHEAPGDMLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
