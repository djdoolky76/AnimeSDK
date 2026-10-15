#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLAIJDHDEBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FLAIJDHDEBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3B4750)
#define FLAIJDHDEBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3B4AF0)
#define FLAIJDHDEBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3B4330)
#define FLAIJDHDEBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3B42F0)
#define FLAIJDHDEBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3B42E0)
#define FLAIJDHDEBI_EPKBJLAPPJO_OFFSET UNITYSDK_OFFSET(0x1E3B43A0)
#define FLAIJDHDEBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3B44C0)
#define FLAIJDHDEBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3B43E0)
#define FLAIJDHDEBI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3B43D0)
#define FLAIJDHDEBI_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E3B4380)
#define FLAIJDHDEBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3B4590)
#define FLAIJDHDEBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3B42A0)
#define FLAIJDHDEBI_KPNLALAHHGF_OFFSET UNITYSDK_OFFSET(0x1E3B43B0)
#define FLAIJDHDEBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3B4930)
#define FLAIJDHDEBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3B48E0)
#define FLAIJDHDEBI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3B43C0)
#define FLAIJDHDEBI_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E3B4390)
#define FLAIJDHDEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3B42D0)
#define FLAIJDHDEBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3B45C0)
#define FLAIJDHDEBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3B4620)

	class FLAIJDHDEBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 MBPJCGEFHPJ; // 0x1C
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FLAIJDHDEBI")->GetStaticField(0x63FF0);
		}

		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object HOIIALLCKAA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FLAIJDHDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLAIJDHDEBI*))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLAIJDHDEBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FLAIJDHDEBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FLAIJDHDEBI* Clone()
		{
			return ((::FLAIJDHDEBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 EPKBJLAPPJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_EPKBJLAPPJO_OFFSET))(this);
		}

		::System::Void KPNLALAHHGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_KPNLALAHHGF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FLAIJDHDEBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FLAIJDHDEBI*))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FLAIJDHDEBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLAIJDHDEBI*))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FLAIJDHDEBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
