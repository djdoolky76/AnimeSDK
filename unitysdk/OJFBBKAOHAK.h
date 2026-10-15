#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OJFBBKAOHAK_JOGOHPFNDAJ.h"
#include "unitysdk/System/Object.h"
class FMKMEFMOJGJ;
class NDPJHJOAOJE;
class NGHCOJCMJOK;
class OJFBBKAOHAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJFBBKAOHAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE80B10)
#define OJFBBKAOHAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE813C0)
#define OJFBBKAOHAK_CJKPDLFADHM_OFFSET UNITYSDK_OFFSET(0x1DE80330)
#define OJFBBKAOHAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE80350)
#define OJFBBKAOHAK_COGNLAIFAHA_OFFSET UNITYSDK_OFFSET(0x1DE80390)
#define OJFBBKAOHAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE80030)
#define OJFBBKAOHAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE7FFE0)
#define OJFBBKAOHAK_DDEGOJEDLIH_OFFSET UNITYSDK_OFFSET(0x1DE803D0)
#define OJFBBKAOHAK_DKNJAIOEHIL_OFFSET UNITYSDK_OFFSET(0x1DE802D0)
#define OJFBBKAOHAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE80420)
#define OJFBBKAOHAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE803F0)
#define OJFBBKAOHAK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE803C0)
#define OJFBBKAOHAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE806F0)
#define OJFBBKAOHAK_ICGCCADKALH_OFFSET UNITYSDK_OFFSET(0x1DE802B0)
#define OJFBBKAOHAK_ILNPBJFBNHF_OFFSET UNITYSDK_OFFSET(0x1DE80380)
#define OJFBBKAOHAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE7FFA0)
#define OJFBBKAOHAK_KPADBJOJOLI_OFFSET UNITYSDK_OFFSET(0x1DE80250)
#define OJFBBKAOHAK_LKIBNGNDOFF_OFFSET UNITYSDK_OFFSET(0x1DE803A0)
#define OJFBBKAOHAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE81130)
#define OJFBBKAOHAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE80DD0)
#define OJFBBKAOHAK_MIBMHCBNBJE_OFFSET UNITYSDK_OFFSET(0x1DE803E0)
#define OJFBBKAOHAK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE803B0)
#define OJFBBKAOHAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE7FFD0)
#define OJFBBKAOHAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE80820)
#define OJFBBKAOHAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE80880)

inline static constexpr unsigned int OJFBBKAOHAK_TypeDefinitionIndex = 31848;

	class OJFBBKAOHAK : public ::System::Object
	{
	public:
		::System::Object* KCLJDCMCFBN; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* LCLHCEADPFF; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::OJFBBKAOHAK_JOGOHPFNDAJ CPOCIIDPIML; // 0x2C
		::System::UInt32 BGHAMFEEKBI; // 0x30
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OJFBBKAOHAK")->GetStaticField(0x1EC30);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GNALBGAFJOK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "OJFBBKAOHAK")->GetStaticField(0x1EC38);
		}

		// static const ::System::Object EGPFONJJNCO; // 0x0
		// static const ::System::Object DCMCFDFHLLD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HJCJAAEMANM; // 0x0
		// static const ::System::Object KFAMIIOBFJP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJFBBKAOHAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJFBBKAOHAK*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJFBBKAOHAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OJFBBKAOHAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJFBBKAOHAK* Clone()
		{
			return ((::OJFBBKAOHAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>* ILNPBJFBNHF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FMKMEFMOJGJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_ILNPBJFBNHF_OFFSET))(this);
		}

		::System::UInt32 COGNLAIFAHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_COGNLAIFAHA_OFFSET))(this);
		}

		::System::Void LKIBNGNDOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_LKIBNGNDOFF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::NGHCOJCMJOK* KPADBJOJOLI()
		{
			return ((::NGHCOJCMJOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_KPADBJOJOLI_OFFSET))(this);
		}

		::System::Void ICGCCADKALH(::NGHCOJCMJOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHCOJCMJOK*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_ICGCCADKALH_OFFSET))(this, a1);
		}

		::NDPJHJOAOJE* DKNJAIOEHIL()
		{
			return ((::NDPJHJOAOJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_DKNJAIOEHIL_OFFSET))(this);
		}

		::System::Void CJKPDLFADHM(::NDPJHJOAOJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDPJHJOAOJE*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_CJKPDLFADHM_OFFSET))(this, a1);
		}

		::OJFBBKAOHAK_JOGOHPFNDAJ DDEGOJEDLIH()
		{
			return ((::OJFBBKAOHAK_JOGOHPFNDAJ(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_DDEGOJEDLIH_OFFSET))(this);
		}

		::System::Void MIBMHCBNBJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_MIBMHCBNBJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJFBBKAOHAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJFBBKAOHAK*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJFBBKAOHAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJFBBKAOHAK*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJFBBKAOHAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
