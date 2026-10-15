#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PGFLOJNIFLF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PGFLOJNIFLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF2E7B0)
#define PGFLOJNIFLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF2EA60)
#define PGFLOJNIFLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF2E380)
#define PGFLOJNIFLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF2E2B0)
#define PGFLOJNIFLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2E240)
#define PGFLOJNIFLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF2E420)
#define PGFLOJNIFLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF2E3F0)
#define PGFLOJNIFLF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF2E3C0)
#define PGFLOJNIFLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF2E540)
#define PGFLOJNIFLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF2E200)
#define PGFLOJNIFLF_KIDDKJNHCGP_OFFSET UNITYSDK_OFFSET(0x1DF2E3E0)
#define PGFLOJNIFLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF2E930)
#define PGFLOJNIFLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF2E8C0)
#define PGFLOJNIFLF_MMBIKAJCKEI_OFFSET UNITYSDK_OFFSET(0x1DF2E3D0)
#define PGFLOJNIFLF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF2E3B0)
#define PGFLOJNIFLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF2E230)
#define PGFLOJNIFLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF2E650)
#define PGFLOJNIFLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF2E6B0)

inline static constexpr unsigned int PGFLOJNIFLF_TypeDefinitionIndex = 30791;

	class PGFLOJNIFLF : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* ABMBOCHMHBA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NEPNNABNKED; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::MessageParser_1<::PGFLOJNIFLF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PGFLOJNIFLF*>**)UnitySDK::FromName("", "PGFLOJNIFLF")->GetStaticField(0x3D370);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IKDNPMKDIOI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PGFLOJNIFLF")->GetStaticField(0x3D378);
		}

		static ::System::Object** StaticGet_FAOGOCHAKAC()
		{
			return (::System::Object**)UnitySDK::FromName("", "PGFLOJNIFLF")->GetStaticField(0x3D380);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNIPIODEBNN; // 0x0
		// static const ::System::Object LEEFDOOEDBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PGFLOJNIFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGFLOJNIFLF*))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PGFLOJNIFLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PGFLOJNIFLF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PGFLOJNIFLF*>*(*)())((::PBYTE)hIl2Cpp + PGFLOJNIFLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PGFLOJNIFLF* Clone()
		{
			return ((::PGFLOJNIFLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MMBIKAJCKEI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_MMBIKAJCKEI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>* KIDDKJNHCGP()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_KIDDKJNHCGP_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PGFLOJNIFLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PGFLOJNIFLF*))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PGFLOJNIFLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PGFLOJNIFLF*))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PGFLOJNIFLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
