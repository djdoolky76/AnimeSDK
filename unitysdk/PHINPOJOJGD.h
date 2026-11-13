#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHINPOJOJGD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHINPOJOJGD_AMGKEJCHELJ_OFFSET UNITYSDK_OFFSET(0x2025EC50)
#define PHINPOJOJGD_BDANNCKEKGO_OFFSET UNITYSDK_OFFSET(0x2025EC20)
#define PHINPOJOJGD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2025F270)
#define PHINPOJOJGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x2025F7C0)
#define PHINPOJOJGD_CLONE_OFFSET UNITYSDK_OFFSET(0x2025EB70)
#define PHINPOJOJGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2025EAC0)
#define PHINPOJOJGD_CTOR_OFFSET UNITYSDK_OFFSET(0x2025EA70)
#define PHINPOJOJGD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2025ECF0)
#define PHINPOJOJGD_EQUALS_OFFSET UNITYSDK_OFFSET(0x2025EC90)
#define PHINPOJOJGD_FGGBMGCGCKF_OFFSET UNITYSDK_OFFSET(0x2025EC40)
#define PHINPOJOJGD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2025EDA0)
#define PHINPOJOJGD_HHALMCFOEBH_OFFSET UNITYSDK_OFFSET(0x2025EC70)
#define PHINPOJOJGD_JAOPBIKPOMI_OFFSET UNITYSDK_OFFSET(0x2025EC30)
#define PHINPOJOJGD_JDMEMIODNPO_OFFSET UNITYSDK_OFFSET(0x2025EC00)
#define PHINPOJOJGD_JGKKFKKMJFL_OFFSET UNITYSDK_OFFSET(0x2025EBC0)
#define PHINPOJOJGD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2025EA00)
#define PHINPOJOJGD_JKKFGGKKMAJ_OFFSET UNITYSDK_OFFSET(0x2025EBF0)
#define PHINPOJOJGD_JMEFENCFHMA_OFFSET UNITYSDK_OFFSET(0x2025EC80)
#define PHINPOJOJGD_KOPCACDFAKH_OFFSET UNITYSDK_OFFSET(0x2025EBD0)
#define PHINPOJOJGD_LLOKHEPDGDN_OFFSET UNITYSDK_OFFSET(0x2025EC10)
#define PHINPOJOJGD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2025F630)
#define PHINPOJOJGD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2025F5A0)
#define PHINPOJOJGD_OKGGLIBPMCB_OFFSET UNITYSDK_OFFSET(0x2025EC60)
#define PHINPOJOJGD_ONIEHGFJBAG_OFFSET UNITYSDK_OFFSET(0x2025EBE0)
#define PHINPOJOJGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2025EA60)
#define PHINPOJOJGD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2025EEE0)
#define PHINPOJOJGD_WRITETO_OFFSET UNITYSDK_OFFSET(0x2025EF40)

inline static constexpr unsigned int PHINPOJOJGD_TypeDefinitionIndex = 33603;

	class PHINPOJOJGD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PEJMOAPFHKD; // 0x18
		::System::UInt32 AENFHPAGFOI; // 0x20
		::System::Boolean AFCNCAEFHKG; // 0x24
		::System::Boolean DBJAJODGNMJ; // 0x25
		::System::Byte _padding0[0x2];
		::System::Int64 IIMDGJHJKOE; // 0x28
		::System::Int64 ELDCPCLAFJK; // 0x30
		::System::UInt32 GLEDGKPBFNA; // 0x38
		static ::Google::Protobuf::MessageParser_1<::PHINPOJOJGD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHINPOJOJGD*>**)UnitySDK::FromName("", "PHINPOJOJGD")->GetStaticField(0x3AA50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BJPHAPELEGE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PHINPOJOJGD")->GetStaticField(0x3AA58);
		}

		// static const ::System::Object LGBLODFLGIA; // 0x0
		// static const ::System::Object PFBFCKJLJEC; // 0x0
		// static const ::System::Object LHJAECKCBLJ; // 0x0
		// static const ::System::Object EEICFIOGADE; // 0x0
		// static const ::System::Object HLGEDBNIHII; // 0x0
		// static const ::System::Object LLPGCAMHCMO; // 0x0
		// static const ::System::Object BJGEIINFMNB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHINPOJOJGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHINPOJOJGD*))((::PBYTE)hIl2Cpp + PHINPOJOJGD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHINPOJOJGD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHINPOJOJGD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHINPOJOJGD*>*(*)())((::PBYTE)hIl2Cpp + PHINPOJOJGD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHINPOJOJGD* Clone()
		{
			return ((::PHINPOJOJGD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_CLONE_OFFSET))(this);
		}

		::System::Boolean JGKKFKKMJFL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_JGKKFKKMJFL_OFFSET))(this);
		}

		::System::Void KOPCACDFAKH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHINPOJOJGD_KOPCACDFAKH_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ONIEHGFJBAG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_ONIEHGFJBAG_OFFSET))(this);
		}

		::System::Boolean JKKFGGKKMAJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_JKKFGGKKMAJ_OFFSET))(this);
		}

		::System::Void JDMEMIODNPO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PHINPOJOJGD_JDMEMIODNPO_OFFSET))(this, a1);
		}

		::System::Int64 LLOKHEPDGDN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_LLOKHEPDGDN_OFFSET))(this);
		}

		::System::Void BDANNCKEKGO(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PHINPOJOJGD_BDANNCKEKGO_OFFSET))(this, a1);
		}

		::System::UInt32 JAOPBIKPOMI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_JAOPBIKPOMI_OFFSET))(this);
		}

		::System::Void FGGBMGCGCKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHINPOJOJGD_FGGBMGCGCKF_OFFSET))(this, a1);
		}

		::System::Int64 AMGKEJCHELJ()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_AMGKEJCHELJ_OFFSET))(this);
		}

		::System::Void OKGGLIBPMCB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PHINPOJOJGD_OKGGLIBPMCB_OFFSET))(this, a1);
		}

		::System::UInt32 HHALMCFOEBH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_HHALMCFOEBH_OFFSET))(this);
		}

		::System::Void JMEFENCFHMA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHINPOJOJGD_JMEFENCFHMA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHINPOJOJGD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHINPOJOJGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHINPOJOJGD*))((::PBYTE)hIl2Cpp + PHINPOJOJGD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHINPOJOJGD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHINPOJOJGD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHINPOJOJGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHINPOJOJGD*))((::PBYTE)hIl2Cpp + PHINPOJOJGD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHINPOJOJGD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
