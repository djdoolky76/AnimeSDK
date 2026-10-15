#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class NMEMDFOCMFO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMEMDFOCMFO_BGKDMNHNGHH_OFFSET UNITYSDK_OFFSET(0x1EB73390)
#define NMEMDFOCMFO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB737F0)
#define NMEMDFOCMFO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB73CE0)
#define NMEMDFOCMFO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB73320)
#define NMEMDFOCMFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB73200)
#define NMEMDFOCMFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB73180)
#define NMEMDFOCMFO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB733F0)
#define NMEMDFOCMFO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB733C0)
#define NMEMDFOCMFO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB73380)
#define NMEMDFOCMFO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB734E0)
#define NMEMDFOCMFO_HACNHKAODAN_OFFSET UNITYSDK_OFFSET(0x1EB73350)
#define NMEMDFOCMFO_JGIBLBEMEOA_OFFSET UNITYSDK_OFFSET(0x1EB733B0)
#define NMEMDFOCMFO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB73140)
#define NMEMDFOCMFO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB73B80)
#define NMEMDFOCMFO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB73A20)
#define NMEMDFOCMFO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB73370)
#define NMEMDFOCMFO_OEPANEDJLKG_OFFSET UNITYSDK_OFFSET(0x1EB73360)
#define NMEMDFOCMFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB73170)
#define NMEMDFOCMFO_PHJEIEMLKMJ_OFFSET UNITYSDK_OFFSET(0x1EB733A0)
#define NMEMDFOCMFO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB73590)
#define NMEMDFOCMFO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB735F0)

inline static constexpr unsigned int NMEMDFOCMFO_TypeDefinitionIndex = 30000;

	class NMEMDFOCMFO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* JNGJCMLGGPK; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* ADONNEFLOEE; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BIILNICABJF; // 0x28
		::System::UInt32 LLAAKEBDCKJ; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		static ::Google::Protobuf::FieldCodec** StaticGet_JCMEBOGHNOP()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NMEMDFOCMFO")->GetStaticField(0x6C210);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_AAKLOCDPEHC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NMEMDFOCMFO")->GetStaticField(0x6C218);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GNJBMGEBJEN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NMEMDFOCMFO")->GetStaticField(0x6C220);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMEMDFOCMFO")->GetStaticField(0x6C228);
		}

		// static const ::System::Object OAPHHDDCCAD; // 0x0
		// static const ::System::Object MIEOKHCABGP; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HCPILBEGABH; // 0x0
		// static const ::System::Object EBEJMDEOJAI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMEMDFOCMFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMEMDFOCMFO*))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMEMDFOCMFO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMEMDFOCMFO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMEMDFOCMFO* Clone()
		{
			return ((::NMEMDFOCMFO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HACNHKAODAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_HACNHKAODAN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* OEPANEDJLKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_OEPANEDJLKG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BGKDMNHNGHH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_BGKDMNHNGHH_OFFSET))(this);
		}

		::System::UInt32 PHJEIEMLKMJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_PHJEIEMLKMJ_OFFSET))(this);
		}

		::System::Void JGIBLBEMEOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_JGIBLBEMEOA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMEMDFOCMFO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMEMDFOCMFO*))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMEMDFOCMFO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMEMDFOCMFO*))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMEMDFOCMFO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
