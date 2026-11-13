#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPMOEFOEJEE;
class HMBLPJDFEGJ;
class NHGJGMAEBCI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHGJGMAEBCI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2040C6E0)
#define NHGJGMAEBCI_CCTOR_OFFSET UNITYSDK_OFFSET(0x2040CB80)
#define NHGJGMAEBCI_CLONE_OFFSET UNITYSDK_OFFSET(0x2040BF30)
#define NHGJGMAEBCI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2040BDE0)
#define NHGJGMAEBCI_CTOR_OFFSET UNITYSDK_OFFSET(0x2040BD60)
#define NHGJGMAEBCI_ECDJPMCGMBM_OFFSET UNITYSDK_OFFSET(0x2040BF60)
#define NHGJGMAEBCI_EEGMCBFBMNE_OFFSET UNITYSDK_OFFSET(0x2040BFF0)
#define NHGJGMAEBCI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2040C050)
#define NHGJGMAEBCI_EQUALS_OFFSET UNITYSDK_OFFSET(0x2040C020)
#define NHGJGMAEBCI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2040C210)
#define NHGJGMAEBCI_GNBGLDCCLAG_OFFSET UNITYSDK_OFFSET(0x2040BF70)
#define NHGJGMAEBCI_JCPCNNHDFFF_OFFSET UNITYSDK_OFFSET(0x2040BF80)
#define NHGJGMAEBCI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2040BD20)
#define NHGJGMAEBCI_KJJPFLLLNKE_OFFSET UNITYSDK_OFFSET(0x2040C010)
#define NHGJGMAEBCI_LGIFCDCIBMF_OFFSET UNITYSDK_OFFSET(0x2040BF90)
#define NHGJGMAEBCI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2040C9C0)
#define NHGJGMAEBCI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2040C870)
#define NHGJGMAEBCI_OPIJFBPNMEI_OFFSET UNITYSDK_OFFSET(0x2040C000)
#define NHGJGMAEBCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2040BD50)
#define NHGJGMAEBCI_PHPHAAAKHLI_OFFSET UNITYSDK_OFFSET(0x2040BFE0)
#define NHGJGMAEBCI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2040C420)
#define NHGJGMAEBCI_WRITETO_OFFSET UNITYSDK_OFFSET(0x2040C480)

inline static constexpr unsigned int NHGJGMAEBCI_TypeDefinitionIndex = 35430;

	class NHGJGMAEBCI : public ::System::Object
	{
	public:
		::System::String* DDINDNFEBKH; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GPEAHOJAJDN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::FPMOEFOEJEE*>* HJBPPBFNHHG; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::HMBLPJDFEGJ* MCNFMGPGBFK; // 0x30
		::System::Boolean GHIFFIGNGOH; // 0x38
		static ::Google::Protobuf::FieldCodec_1<::FPMOEFOEJEE*>** StaticGet_HKLEMLFBPGD()
		{
			return (::Google::Protobuf::FieldCodec_1<::FPMOEFOEJEE*>**)UnitySDK::FromName("", "NHGJGMAEBCI")->GetStaticField(0x60780);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OIGJCGIDBCN()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NHGJGMAEBCI")->GetStaticField(0x60788);
		}

		static ::Google::Protobuf::MessageParser_1<::NHGJGMAEBCI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NHGJGMAEBCI*>**)UnitySDK::FromName("", "NHGJGMAEBCI")->GetStaticField(0x60790);
		}

		// static const ::System::Object OBDFDELGKGL; // 0x0
		// static const ::System::Object HICAGFIFOCH; // 0x0
		// static const ::System::Object FGGKNNJDBOB; // 0x0
		// static const ::System::Object DKIGADCHMLK; // 0x0
		// static const ::System::Object HELCMPPOHKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHGJGMAEBCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJGMAEBCI*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHGJGMAEBCI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NHGJGMAEBCI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NHGJGMAEBCI*>*(*)())((::PBYTE)hIl2Cpp + NHGJGMAEBCI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHGJGMAEBCI* Clone()
		{
			return ((::NHGJGMAEBCI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_CLONE_OFFSET))(this);
		}

		::HMBLPJDFEGJ* ECDJPMCGMBM()
		{
			return ((::HMBLPJDFEGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_ECDJPMCGMBM_OFFSET))(this);
		}

		::System::Void GNBGLDCCLAG(::HMBLPJDFEGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HMBLPJDFEGJ*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_GNBGLDCCLAG_OFFSET))(this, a1);
		}

		::System::String* JCPCNNHDFFF()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_JCPCNNHDFFF_OFFSET))(this);
		}

		::System::Void LGIFCDCIBMF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_LGIFCDCIBMF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PHPHAAAKHLI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_PHPHAAAKHLI_OFFSET))(this);
		}

		::System::Boolean EEGMCBFBMNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_EEGMCBFBMNE_OFFSET))(this);
		}

		::System::Void OPIJFBPNMEI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_OPIJFBPNMEI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FPMOEFOEJEE*>* KJJPFLLLNKE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FPMOEFOEJEE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_KJJPFLLLNKE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHGJGMAEBCI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHGJGMAEBCI*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHGJGMAEBCI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHGJGMAEBCI*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHGJGMAEBCI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
