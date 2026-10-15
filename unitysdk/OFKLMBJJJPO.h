#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFKLMBJJJPO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFKLMBJJJPO_ADHDFEOFJNM_OFFSET UNITYSDK_OFFSET(0x1DE49150)
#define OFKLMBJJJPO_BIOOHPIHADO_OFFSET UNITYSDK_OFFSET(0x1DE491A0)
#define OFKLMBJJJPO_BKAGFOAHENE_OFFSET UNITYSDK_OFFSET(0x1DE49170)
#define OFKLMBJJJPO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE496E0)
#define OFKLMBJJJPO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE49AE0)
#define OFKLMBJJJPO_CLCNPIJOIBL_OFFSET UNITYSDK_OFFSET(0x1DE491B0)
#define OFKLMBJJJPO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE49100)
#define OFKLMBJJJPO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE49050)
#define OFKLMBJJJPO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE49000)
#define OFKLMBJJJPO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE49280)
#define OFKLMBJJJPO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE491E0)
#define OFKLMBJJJPO_FMMFNNOAAEK_OFFSET UNITYSDK_OFFSET(0x1DE49190)
#define OFKLMBJJJPO_FPJLEGMCENK_OFFSET UNITYSDK_OFFSET(0x1DE491C0)
#define OFKLMBJJJPO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE49310)
#define OFKLMBJJJPO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE48FC0)
#define OFKLMBJJJPO_KMGGNNGDLCO_OFFSET UNITYSDK_OFFSET(0x1DE49180)
#define OFKLMBJJJPO_LKGJAFJLNMM_OFFSET UNITYSDK_OFFSET(0x1DE49140)
#define OFKLMBJJJPO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE499C0)
#define OFKLMBJJJPO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE49940)
#define OFKLMBJJJPO_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1DE49130)
#define OFKLMBJJJPO_NMKKOBNKIDP_OFFSET UNITYSDK_OFFSET(0x1DE49160)
#define OFKLMBJJJPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE48FF0)
#define OFKLMBJJJPO_PMPGMADMADA_OFFSET UNITYSDK_OFFSET(0x1DE491D0)
#define OFKLMBJJJPO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE49410)
#define OFKLMBJJJPO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE49470)

	class OFKLMBJJJPO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CBFGBDBJHID; // 0x18
		::System::UInt32 EIMJCAPGIAC; // 0x20
		::System::UInt32 MGPCOLIAECE; // 0x24
		::System::UInt32 HKMEMBIPHAN; // 0x28
		::System::Boolean CCNIHPKICOK; // 0x2C
		::System::Byte _padding0[0x3];
		::System::UInt32 DBDCJHECJOO; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFKLMBJJJPO")->GetStaticField(0x17910);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OFKLMBJJJPO")->GetStaticField(0x17918);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		// static const ::System::Object BKCLJIHIJIJ; // 0x0
		// static const ::System::Object JGGMJFOBLCI; // 0x0
		// static const ::System::Object KOAPPFHOOEJ; // 0x0
		// static const ::System::Object BOGFCKKNGJB; // 0x0
		// static const ::System::Object HACFLGOPALO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFKLMBJJJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKLMBJJJPO*))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFKLMBJJJPO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFKLMBJJJPO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFKLMBJJJPO* Clone()
		{
			return ((::OFKLMBJJJPO*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_MJOEMBBMBON_OFFSET))(this);
		}

		::System::UInt32 LKGJAFJLNMM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_LKGJAFJLNMM_OFFSET))(this);
		}

		::System::Void ADHDFEOFJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_ADHDFEOFJNM_OFFSET))(this, a1);
		}

		::System::UInt32 NMKKOBNKIDP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_NMKKOBNKIDP_OFFSET))(this);
		}

		::System::Void BKAGFOAHENE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_BKAGFOAHENE_OFFSET))(this, a1);
		}

		::System::Boolean KMGGNNGDLCO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_KMGGNNGDLCO_OFFSET))(this);
		}

		::System::Void FMMFNNOAAEK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_FMMFNNOAAEK_OFFSET))(this, a1);
		}

		::System::UInt32 BIOOHPIHADO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_BIOOHPIHADO_OFFSET))(this);
		}

		::System::Void CLCNPIJOIBL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_CLCNPIJOIBL_OFFSET))(this, a1);
		}

		::System::UInt32 FPJLEGMCENK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_FPJLEGMCENK_OFFSET))(this);
		}

		::System::Void PMPGMADMADA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_PMPGMADMADA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFKLMBJJJPO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFKLMBJJJPO*))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFKLMBJJJPO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFKLMBJJJPO*))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFKLMBJJJPO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
