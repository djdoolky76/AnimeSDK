#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BAHMABONKBP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BAHMABONKBP_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1E7B6E20)
#define BAHMABONKBP_BOOBGJNKHMD_OFFSET UNITYSDK_OFFSET(0x1E7B6EB0)
#define BAHMABONKBP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B7330)
#define BAHMABONKBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B78D0)
#define BAHMABONKBP_CECMCADBMDE_OFFSET UNITYSDK_OFFSET(0x1E7B6E00)
#define BAHMABONKBP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B6D80)
#define BAHMABONKBP_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E7B6DE0)
#define BAHMABONKBP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B6D30)
#define BAHMABONKBP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B6D20)
#define BAHMABONKBP_DNLJAKCFMHC_OFFSET UNITYSDK_OFFSET(0x1E7B6E60)
#define BAHMABONKBP_EELAOFKGLFP_OFFSET UNITYSDK_OFFSET(0x1E7B6EA0)
#define BAHMABONKBP_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1E7B6E30)
#define BAHMABONKBP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B6F30)
#define BAHMABONKBP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B6EC0)
#define BAHMABONKBP_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1E7B6E90)
#define BAHMABONKBP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B6F90)
#define BAHMABONKBP_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E7B6DF0)
#define BAHMABONKBP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B6CE0)
#define BAHMABONKBP_KDPHIFKHODE_OFFSET UNITYSDK_OFFSET(0x1E7B6E70)
#define BAHMABONKBP_KGMOPHKIKCJ_OFFSET UNITYSDK_OFFSET(0x1E7B6E10)
#define BAHMABONKBP_MCECIKDKLCJ_OFFSET UNITYSDK_OFFSET(0x1E7B6E50)
#define BAHMABONKBP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B77D0)
#define BAHMABONKBP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B7760)
#define BAHMABONKBP_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1E7B6E80)
#define BAHMABONKBP_NLGBICNFFFC_OFFSET UNITYSDK_OFFSET(0x1E7B6E40)
#define BAHMABONKBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B6D10)
#define BAHMABONKBP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B6FE0)
#define BAHMABONKBP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B7040)

	class BAHMABONKBP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 HNPOOPPIOGG; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		::System::UInt64 NPFBAFODCBI; // 0x20
		::System::UInt32 HJCGJEFICAK; // 0x28
		::System::Int32 KELMLAIBEGO; // 0x2C
		::System::UInt32 KPMKCGAOCEM; // 0x30
		::System::UInt32 LAAGBFNNOKM; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BAHMABONKBP")->GetStaticField(0x45770);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object NCECIHBDDNP; // 0x0
		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object NNCCOKPHFNG; // 0x0
		// static const ::System::Object FAFGJGNLDNE; // 0x0
		// static const ::System::Object BAOPMJAPINI; // 0x0
		// static const ::System::Object IDMMJOIFHGM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BAHMABONKBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMABONKBP*))((::PBYTE)hIl2Cpp + BAHMABONKBP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BAHMABONKBP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BAHMABONKBP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BAHMABONKBP* Clone()
		{
			return ((::BAHMABONKBP*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAHMABONKBP_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 CECMCADBMDE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_CECMCADBMDE_OFFSET))(this);
		}

		::System::Void KGMOPHKIKCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAHMABONKBP_KGMOPHKIKCJ_OFFSET))(this, a1);
		}

		::System::UInt64 ACOJNBBKMOE()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + BAHMABONKBP_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::Int32 NLGBICNFFFC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_NLGBICNFFFC_OFFSET))(this);
		}

		::System::Void MCECIKDKLCJ(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAHMABONKBP_MCECIKDKLCJ_OFFSET))(this, a1);
		}

		::System::UInt32 DNLJAKCFMHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_DNLJAKCFMHC_OFFSET))(this);
		}

		::System::Void KDPHIFKHODE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAHMABONKBP_KDPHIFKHODE_OFFSET))(this, a1);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BAHMABONKBP_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::System::Int32 EELAOFKGLFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_EELAOFKGLFP_OFFSET))(this);
		}

		::System::Void BOOBGJNKHMD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BAHMABONKBP_BOOBGJNKHMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BAHMABONKBP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BAHMABONKBP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BAHMABONKBP*))((::PBYTE)hIl2Cpp + BAHMABONKBP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BAHMABONKBP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BAHMABONKBP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BAHMABONKBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BAHMABONKBP*))((::PBYTE)hIl2Cpp + BAHMABONKBP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BAHMABONKBP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
