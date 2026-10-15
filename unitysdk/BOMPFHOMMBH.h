#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BOMPFHOMMBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BOMPFHOMMBH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E03D630)
#define BOMPFHOMMBH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E03D9B0)
#define BOMPFHOMMBH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E03D210)
#define BOMPFHOMMBH_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E03D280)
#define BOMPFHOMMBH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E03D1D0)
#define BOMPFHOMMBH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E03D1C0)
#define BOMPFHOMMBH_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0x1E03D2A0)
#define BOMPFHOMMBH_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0x1E03D2B0)
#define BOMPFHOMMBH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E03D3A0)
#define BOMPFHOMMBH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E03D2C0)
#define BOMPFHOMMBH_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E03D260)
#define BOMPFHOMMBH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E03D470)
#define BOMPFHOMMBH_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E03D290)
#define BOMPFHOMMBH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E03D180)
#define BOMPFHOMMBH_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E03D270)
#define BOMPFHOMMBH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E03D810)
#define BOMPFHOMMBH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E03D7C0)
#define BOMPFHOMMBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E03D1B0)
#define BOMPFHOMMBH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E03D4A0)
#define BOMPFHOMMBH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E03D500)

inline static constexpr unsigned int BOMPFHOMMBH_TypeDefinitionIndex = 26028;

	class BOMPFHOMMBH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PNPIJDDLCFJ; // 0x18
		::System::UInt32 BOHLIADLMJN; // 0x1C
		::System::UInt32 KJAENGKDFJD; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BOMPFHOMMBH")->GetStaticField(0x48D00);
		}

		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object HPADICLJPCP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BOMPFHOMMBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMPFHOMMBH*))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BOMPFHOMMBH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BOMPFHOMMBH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BOMPFHOMMBH* Clone()
		{
			return ((::BOMPFHOMMBH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_CLONE_OFFSET))(this);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 DJMOOLAIGEO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::Void EKMNONOLBPG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_EKMNONOLBPG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BOMPFHOMMBH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BOMPFHOMMBH*))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BOMPFHOMMBH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOMPFHOMMBH*))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BOMPFHOMMBH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
