#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDDJBPIOCMC;
class HFEOGNAMHCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HDDJBPIOCMC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E548CA0)
#define HDDJBPIOCMC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5490D0)
#define HDDJBPIOCMC_CDHEPOFDMPP_OFFSET UNITYSDK_OFFSET(0x1E5486A0)
#define HDDJBPIOCMC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E548630)
#define HDDJBPIOCMC_CPJGHGBBIMJ_OFFSET UNITYSDK_OFFSET(0x1E548670)
#define HDDJBPIOCMC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E548560)
#define HDDJBPIOCMC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E548510)
#define HDDJBPIOCMC_DEKGFFNILPD_OFFSET UNITYSDK_OFFSET(0x1E548660)
#define HDDJBPIOCMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E548790)
#define HDDJBPIOCMC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5486F0)
#define HDDJBPIOCMC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5486E0)
#define HDDJBPIOCMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5488C0)
#define HDDJBPIOCMC_JHBKBFPJGPB_OFFSET UNITYSDK_OFFSET(0x1E548690)
#define HDDJBPIOCMC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5484D0)
#define HDDJBPIOCMC_LENALGDKNHI_OFFSET UNITYSDK_OFFSET(0x1E5486B0)
#define HDDJBPIOCMC_LNJLADABAKO_OFFSET UNITYSDK_OFFSET(0x1E548680)
#define HDDJBPIOCMC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E548F70)
#define HDDJBPIOCMC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E548EB0)
#define HDDJBPIOCMC_NFHFHNAOJGE_OFFSET UNITYSDK_OFFSET(0x1E5486C0)
#define HDDJBPIOCMC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5486D0)
#define HDDJBPIOCMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E548500)
#define HDDJBPIOCMC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E548A50)
#define HDDJBPIOCMC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E548AB0)

inline static constexpr unsigned int HDDJBPIOCMC_TypeDefinitionIndex = 33286;

	class HDDJBPIOCMC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HGJNCCMFDPJ; // 0x10
		::HFEOGNAMHCG* EHHMFEIHICL; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 GLFLHLCNOOH; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt32 OGCMNCBOEJG; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_AKCFPCGIMAK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HDDJBPIOCMC")->GetStaticField(0x310B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HDDJBPIOCMC")->GetStaticField(0x310B8);
		}

		// static const ::System::Object OPJGBPJDMKH; // 0x0
		// static const ::System::Object ENKJBNIDJGF; // 0x0
		// static const ::System::Object HDGKLMKGNND; // 0x0
		// static const ::System::Object GAKIJKHIANM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HDDJBPIOCMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDJBPIOCMC*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HDDJBPIOCMC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HDDJBPIOCMC* Clone()
		{
			return ((::HDDJBPIOCMC*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CLONE_OFFSET))(this);
		}

		::System::UInt32 DEKGFFNILPD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_DEKGFFNILPD_OFFSET))(this);
		}

		::System::Void CPJGHGBBIMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CPJGHGBBIMJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LNJLADABAKO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_LNJLADABAKO_OFFSET))(this);
		}

		::System::UInt32 JHBKBFPJGPB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_JHBKBFPJGPB_OFFSET))(this);
		}

		::System::Void CDHEPOFDMPP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CDHEPOFDMPP_OFFSET))(this, a1);
		}

		::HFEOGNAMHCG* LENALGDKNHI()
		{
			return ((::HFEOGNAMHCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_LENALGDKNHI_OFFSET))(this);
		}

		::System::Void NFHFHNAOJGE(::HFEOGNAMHCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFEOGNAMHCG*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_NFHFHNAOJGE_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HDDJBPIOCMC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HDDJBPIOCMC*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HDDJBPIOCMC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDDJBPIOCMC*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HDDJBPIOCMC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
