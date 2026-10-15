#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOHAFICJPIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOHAFICJPIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FBA30)
#define EOHAFICJPIP_CBIMNNCPIJO_OFFSET UNITYSDK_OFFSET(0x1E2FB630)
#define EOHAFICJPIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBD30)
#define EOHAFICJPIP_CDPBEJOKJCH_OFFSET UNITYSDK_OFFSET(0x1E2FB680)
#define EOHAFICJPIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FB5A0)
#define EOHAFICJPIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FB570)
#define EOHAFICJPIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB560)
#define EOHAFICJPIP_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E2FB610)
#define EOHAFICJPIP_EMIJDCPPBAI_OFFSET UNITYSDK_OFFSET(0x1E2FB650)
#define EOHAFICJPIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FB720)
#define EOHAFICJPIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FB690)
#define EOHAFICJPIP_FLOPPMNAMNH_OFFSET UNITYSDK_OFFSET(0x1E2FB640)
#define EOHAFICJPIP_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E2FB620)
#define EOHAFICJPIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FB800)
#define EOHAFICJPIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FB4F0)
#define EOHAFICJPIP_KMBPPELOJNM_OFFSET UNITYSDK_OFFSET(0x1E2FB660)
#define EOHAFICJPIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FBC90)
#define EOHAFICJPIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FBC40)
#define EOHAFICJPIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB550)
#define EOHAFICJPIP_PNLLLGEBKAL_OFFSET UNITYSDK_OFFSET(0x1E2FB670)
#define EOHAFICJPIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FB840)
#define EOHAFICJPIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FB8A0)

	class EOHAFICJPIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CJDCPGBIKLD; // 0x18
		::System::UInt32 PGNJHPCEKPO; // 0x1C
		::System::UInt32 GEMFJILOPLL; // 0x20
		::System::UInt32 GOLNPJJCKGP; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOHAFICJPIP")->GetStaticField(0xDD90);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object LLCIHFMGEKN; // 0x0
		// static const ::System::Object OOKNIPJJFHB; // 0x0
		// static const ::System::Object FJBJKBKJNDN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOHAFICJPIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOHAFICJPIP*))((::PBYTE)hIl2Cpp + EOHAFICJPIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOHAFICJPIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOHAFICJPIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOHAFICJPIP* Clone()
		{
			return ((::EOHAFICJPIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOHAFICJPIP_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::UInt32 CBIMNNCPIJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_CBIMNNCPIJO_OFFSET))(this);
		}

		::System::Void FLOPPMNAMNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOHAFICJPIP_FLOPPMNAMNH_OFFSET))(this, a1);
		}

		::System::UInt32 EMIJDCPPBAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_EMIJDCPPBAI_OFFSET))(this);
		}

		::System::Void KMBPPELOJNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOHAFICJPIP_KMBPPELOJNM_OFFSET))(this, a1);
		}

		::System::UInt32 PNLLLGEBKAL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_PNLLLGEBKAL_OFFSET))(this);
		}

		::System::Void CDPBEJOKJCH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EOHAFICJPIP_CDPBEJOKJCH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOHAFICJPIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOHAFICJPIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOHAFICJPIP*))((::PBYTE)hIl2Cpp + EOHAFICJPIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOHAFICJPIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOHAFICJPIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOHAFICJPIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOHAFICJPIP*))((::PBYTE)hIl2Cpp + EOHAFICJPIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOHAFICJPIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
