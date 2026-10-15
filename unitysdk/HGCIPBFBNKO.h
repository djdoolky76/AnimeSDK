#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGCIPBFBNKO_JMJMIGDBOJA.h"
#include "unitysdk/System/Object.h"
class HGCIPBFBNKO;
class JLIFGIMBMBD;
class JLPEICPFLMC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HGCIPBFBNKO_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E5742E0)
#define HGCIPBFBNKO_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E5742C0)
#define HGCIPBFBNKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E574890)
#define HGCIPBFBNKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E574E60)
#define HGCIPBFBNKO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E574290)
#define HGCIPBFBNKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5740B0)
#define HGCIPBFBNKO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5740A0)
#define HGCIPBFBNKO_ENPKFDHHNKN_OFFSET UNITYSDK_OFFSET(0x1E574270)
#define HGCIPBFBNKO_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E5742F0)
#define HGCIPBFBNKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E574370)
#define HGCIPBFBNKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E574340)
#define HGCIPBFBNKO_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E574310)
#define HGCIPBFBNKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E574590)
#define HGCIPBFBNKO_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E574300)
#define HGCIPBFBNKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E574060)
#define HGCIPBFBNKO_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E5742D0)
#define HGCIPBFBNKO_LJLFMIEDHMB_OFFSET UNITYSDK_OFFSET(0x1E574330)
#define HGCIPBFBNKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E574CA0)
#define HGCIPBFBNKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E574AC0)
#define HGCIPBFBNKO_MGNGIKHEFJH_OFFSET UNITYSDK_OFFSET(0x1E574210)
#define HGCIPBFBNKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E574090)
#define HGCIPBFBNKO_POFMEGHCAAI_OFFSET UNITYSDK_OFFSET(0x1E574320)
#define HGCIPBFBNKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E574660)
#define HGCIPBFBNKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5746C0)

inline static constexpr unsigned int HGCIPBFBNKO_TypeDefinitionIndex = 27037;

	class HGCIPBFBNKO : public ::System::Object
	{
	public:
		::JLPEICPFLMC* HDAIPLJBGAB; // 0x10
		::System::Object* PCBENBOFGEL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::HGCIPBFBNKO_JMJMIGDBOJA CFBILKNAFJE; // 0x28
		::System::UInt32 FOBLPJCIGJE; // 0x2C
		::System::UInt64 NPFBAFODCBI; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HGCIPBFBNKO")->GetStaticField(0x36800);
		}

		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object HBFPLEAJLJM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HGCIPBFBNKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIPBFBNKO*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HGCIPBFBNKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HGCIPBFBNKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HGCIPBFBNKO* Clone()
		{
			return ((::HGCIPBFBNKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::UInt64 ACOJNBBKMOE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::JLPEICPFLMC* IOIFPHAMFDF()
		{
			return ((::JLPEICPFLMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::JLPEICPFLMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLPEICPFLMC*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::JLIFGIMBMBD* MGNGIKHEFJH()
		{
			return ((::JLIFGIMBMBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_MGNGIKHEFJH_OFFSET))(this);
		}

		::System::Void ENPKFDHHNKN(::JLIFGIMBMBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLIFGIMBMBD*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_ENPKFDHHNKN_OFFSET))(this, a1);
		}

		::HGCIPBFBNKO_JMJMIGDBOJA POFMEGHCAAI()
		{
			return ((::HGCIPBFBNKO_JMJMIGDBOJA(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_POFMEGHCAAI_OFFSET))(this);
		}

		::System::Void LJLFMIEDHMB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_LJLFMIEDHMB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HGCIPBFBNKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HGCIPBFBNKO*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HGCIPBFBNKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIPBFBNKO*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HGCIPBFBNKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
