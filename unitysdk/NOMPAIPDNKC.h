#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOMPAIPDNKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOMPAIPDNKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB8FA10)
#define NOMPAIPDNKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8FDC0)
#define NOMPAIPDNKC_CGNBAPGHKPI_OFFSET UNITYSDK_OFFSET(0x1EB8F4F0)
#define NOMPAIPDNKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB8F490)
#define NOMPAIPDNKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB8F390)
#define NOMPAIPDNKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8F300)
#define NOMPAIPDNKC_EOAFBECOBGA_OFFSET UNITYSDK_OFFSET(0x1EB8F4D0)
#define NOMPAIPDNKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB8F550)
#define NOMPAIPDNKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB8F520)
#define NOMPAIPDNKC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB8F510)
#define NOMPAIPDNKC_FHOECAMJHJD_OFFSET UNITYSDK_OFFSET(0x1EB8F4E0)
#define NOMPAIPDNKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB8F670)
#define NOMPAIPDNKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB8F2C0)
#define NOMPAIPDNKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB8FC90)
#define NOMPAIPDNKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB8FC20)
#define NOMPAIPDNKC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB8F500)
#define NOMPAIPDNKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB8F2F0)
#define NOMPAIPDNKC_PJJNPNAOIIE_OFFSET UNITYSDK_OFFSET(0x1EB8F4C0)
#define NOMPAIPDNKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB8F850)
#define NOMPAIPDNKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB8F8B0)

	class NOMPAIPDNKC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FMNFHIAGFPN; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JFJLJAACKLG; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Int64 KLFJAFCJFNF; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_KJACEJGLEIO()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NOMPAIPDNKC")->GetStaticField(0xCFA0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CFHKLGOEKIG()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NOMPAIPDNKC")->GetStaticField(0xCFA8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NOMPAIPDNKC")->GetStaticField(0xCFB0);
		}

		// static const ::System::Object EFKKFDOKHEB; // 0x0
		// static const ::System::Object MDLBBHCINAF; // 0x0
		// static const ::System::Object OOECODJPKHE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOMPAIPDNKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOMPAIPDNKC*))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMPAIPDNKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NOMPAIPDNKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOMPAIPDNKC* Clone()
		{
			return ((::NOMPAIPDNKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PJJNPNAOIIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_PJJNPNAOIIE_OFFSET))(this);
		}

		::System::Int64 EOAFBECOBGA()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_EOAFBECOBGA_OFFSET))(this);
		}

		::System::Void FHOECAMJHJD(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_FHOECAMJHJD_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CGNBAPGHKPI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_CGNBAPGHKPI_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOMPAIPDNKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOMPAIPDNKC*))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOMPAIPDNKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOMPAIPDNKC*))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOMPAIPDNKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
