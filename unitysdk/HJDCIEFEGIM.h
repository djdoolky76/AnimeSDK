#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HJDCIEFEGIM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HJDCIEFEGIM_APMIGLEIMMO_OFFSET UNITYSDK_OFFSET(0x1E5A4A50)
#define HJDCIEFEGIM_BNFOGOCGGNO_OFFSET UNITYSDK_OFFSET(0x1E5A49B0)
#define HJDCIEFEGIM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5A4F90)
#define HJDCIEFEGIM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A5350)
#define HJDCIEFEGIM_CFCNJAHLJNM_OFFSET UNITYSDK_OFFSET(0x1E5A49E0)
#define HJDCIEFEGIM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5A4910)
#define HJDCIEFEGIM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5A48B0)
#define HJDCIEFEGIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4890)
#define HJDCIEFEGIM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5A4B20)
#define HJDCIEFEGIM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5A4AA0)
#define HJDCIEFEGIM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5A49D0)
#define HJDCIEFEGIM_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5A4980)
#define HJDCIEFEGIM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5A4BD0)
#define HJDCIEFEGIM_GJJHBNAINKN_OFFSET UNITYSDK_OFFSET(0x1E5A49A0)
#define HJDCIEFEGIM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5A4850)
#define HJDCIEFEGIM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5A5230)
#define HJDCIEFEGIM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5A51B0)
#define HJDCIEFEGIM_MHFELCPBJHL_OFFSET UNITYSDK_OFFSET(0x1E5A49F0)
#define HJDCIEFEGIM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5A49C0)
#define HJDCIEFEGIM_OEEAMGALALP_OFFSET UNITYSDK_OFFSET(0x1E5A4A40)
#define HJDCIEFEGIM_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5A4990)
#define HJDCIEFEGIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5A4880)
#define HJDCIEFEGIM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5A4D20)
#define HJDCIEFEGIM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5A4D80)

	class HJDCIEFEGIM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* JDLNFGKFCJG; // 0x18
		::System::String* LKGNNEIDBII; // 0x20
		::System::UInt32 OPPNMFMNMGC; // 0x28
		::System::UInt32 DGKJJMLNHPD; // 0x2C
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HJDCIEFEGIM")->GetStaticField(0x3F2F0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object BPHBBEIFAOI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object PBCNPNGPLDC; // 0x0
		// static const ::System::Object EPNLPKGNFCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HJDCIEFEGIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDCIEFEGIM*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HJDCIEFEGIM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HJDCIEFEGIM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HJDCIEFEGIM* Clone()
		{
			return ((::HJDCIEFEGIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 GJJHBNAINKN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_GJJHBNAINKN_OFFSET))(this);
		}

		::System::Void BNFOGOCGGNO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_BNFOGOCGGNO_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* CFCNJAHLJNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_CFCNJAHLJNM_OFFSET))(this);
		}

		::System::Void MHFELCPBJHL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_MHFELCPBJHL_OFFSET))(this, a1);
		}

		::System::String* OEEAMGALALP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_OEEAMGALALP_OFFSET))(this);
		}

		::System::Void APMIGLEIMMO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_APMIGLEIMMO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HJDCIEFEGIM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HJDCIEFEGIM*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HJDCIEFEGIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HJDCIEFEGIM*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HJDCIEFEGIM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
