#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HONBPDEJDCC;
class NGJLHMAHIDD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGJLHMAHIDD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20404260)
#define NGJLHMAHIDD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20404680)
#define NGJLHMAHIDD_CLONE_OFFSET UNITYSDK_OFFSET(0x20403D40)
#define NGJLHMAHIDD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20403C70)
#define NGJLHMAHIDD_CTOR_OFFSET UNITYSDK_OFFSET(0x20403C20)
#define NGJLHMAHIDD_DCMFNNMMMCG_OFFSET UNITYSDK_OFFSET(0x20403DF0)
#define NGJLHMAHIDD_DIMAJMPPHCP_OFFSET UNITYSDK_OFFSET(0x20403D90)
#define NGJLHMAHIDD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20403E60)
#define NGJLHMAHIDD_EQUALS_OFFSET UNITYSDK_OFFSET(0x20403E00)
#define NGJLHMAHIDD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20403FA0)
#define NGJLHMAHIDD_GKODEGMKOHN_OFFSET UNITYSDK_OFFSET(0x20403DB0)
#define NGJLHMAHIDD_HBHDCFJDMKO_OFFSET UNITYSDK_OFFSET(0x20403DC0)
#define NGJLHMAHIDD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20403BB0)
#define NGJLHMAHIDD_KEKMFJEFNKK_OFFSET UNITYSDK_OFFSET(0x20403DE0)
#define NGJLHMAHIDD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20404580)
#define NGJLHMAHIDD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204044C0)
#define NGJLHMAHIDD_MNAFNPNGHAC_OFFSET UNITYSDK_OFFSET(0x20403DA0)
#define NGJLHMAHIDD_OIHBCJCCKCD_OFFSET UNITYSDK_OFFSET(0x20403DD0)
#define NGJLHMAHIDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20403C10)
#define NGJLHMAHIDD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20404030)
#define NGJLHMAHIDD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20404090)

inline static constexpr unsigned int NGJLHMAHIDD_TypeDefinitionIndex = 29156;

	class NGJLHMAHIDD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::HONBPDEJDCC*>* GMPPPGHEAKB; // 0x18
		::System::UInt64 FAOCKCHOFDN; // 0x20
		::System::UInt32 PFCFDMBEDKE; // 0x28
		::System::UInt32 NGFEHEFGPDN; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::HONBPDEJDCC*>** StaticGet_MPNBNANMKDL()
		{
			return (::Google::Protobuf::FieldCodec_1<::HONBPDEJDCC*>**)UnitySDK::FromName("", "NGJLHMAHIDD")->GetStaticField(0x604E0);
		}

		static ::Google::Protobuf::MessageParser_1<::NGJLHMAHIDD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGJLHMAHIDD*>**)UnitySDK::FromName("", "NGJLHMAHIDD")->GetStaticField(0x604E8);
		}

		// static const ::System::Object PKOKKEBAPLH; // 0x0
		// static const ::System::Object HLLHEHOJPKO; // 0x0
		// static const ::System::Object NAAAENIEPHO; // 0x0
		// static const ::System::Object NPGLJMOAGLN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGJLHMAHIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGJLHMAHIDD*))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGJLHMAHIDD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGJLHMAHIDD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGJLHMAHIDD*>*(*)())((::PBYTE)hIl2Cpp + NGJLHMAHIDD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGJLHMAHIDD* Clone()
		{
			return ((::NGJLHMAHIDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_CLONE_OFFSET))(this);
		}

		::System::UInt32 DIMAJMPPHCP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_DIMAJMPPHCP_OFFSET))(this);
		}

		::System::Void MNAFNPNGHAC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_MNAFNPNGHAC_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::HONBPDEJDCC*>* GKODEGMKOHN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::HONBPDEJDCC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_GKODEGMKOHN_OFFSET))(this);
		}

		::System::UInt32 HBHDCFJDMKO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_HBHDCFJDMKO_OFFSET))(this);
		}

		::System::Void OIHBCJCCKCD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_OIHBCJCCKCD_OFFSET))(this, a1);
		}

		::System::UInt64 KEKMFJEFNKK()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_KEKMFJEFNKK_OFFSET))(this);
		}

		::System::Void DCMFNNMMMCG(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_DCMFNNMMMCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGJLHMAHIDD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGJLHMAHIDD*))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGJLHMAHIDD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGJLHMAHIDD*))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGJLHMAHIDD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
