#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DMGDLEHEDFB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DMGDLEHEDFB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1ED1B0)
#define DMGDLEHEDFB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1ED530)
#define DMGDLEHEDFB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1ECD90)
#define DMGDLEHEDFB_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E1ECE20)
#define DMGDLEHEDFB_CPMJDMDPFHO_OFFSET UNITYSDK_OFFSET(0x1E1ECDF0)
#define DMGDLEHEDFB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1ECD50)
#define DMGDLEHEDFB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1ECD40)
#define DMGDLEHEDFB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1ECF20)
#define DMGDLEHEDFB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1ECE40)
#define DMGDLEHEDFB_GEIDADIACKB_OFFSET UNITYSDK_OFFSET(0x1E1ECE00)
#define DMGDLEHEDFB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1ECFF0)
#define DMGDLEHEDFB_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E1ECE30)
#define DMGDLEHEDFB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1ECD00)
#define DMGDLEHEDFB_MDBKBBMLMNI_OFFSET UNITYSDK_OFFSET(0x1E1ECE10)
#define DMGDLEHEDFB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1ED390)
#define DMGDLEHEDFB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1ED340)
#define DMGDLEHEDFB_OFHACMMAGAP_OFFSET UNITYSDK_OFFSET(0x1E1ECDE0)
#define DMGDLEHEDFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1ECD30)
#define DMGDLEHEDFB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1ED020)
#define DMGDLEHEDFB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1ED080)

	class DMGDLEHEDFB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BOHLIADLMJN; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		::System::UInt32 PPIPLFDBIDH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DMGDLEHEDFB")->GetStaticField(0x17980);
		}

		// static const ::System::Object AFEMIMJEJEH; // 0x0
		// static const ::System::Object EAEDBOGGHCC; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DMGDLEHEDFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGDLEHEDFB*))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DMGDLEHEDFB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DMGDLEHEDFB* Clone()
		{
			return ((::DMGDLEHEDFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OFHACMMAGAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_OFHACMMAGAP_OFFSET))(this);
		}

		::System::Void CPMJDMDPFHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CPMJDMDPFHO_OFFSET))(this, a1);
		}

		::System::UInt32 GEIDADIACKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_GEIDADIACKB_OFFSET))(this);
		}

		::System::Void MDBKBBMLMNI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_MDBKBBMLMNI_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DMGDLEHEDFB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DMGDLEHEDFB*))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DMGDLEHEDFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMGDLEHEDFB*))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DMGDLEHEDFB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
