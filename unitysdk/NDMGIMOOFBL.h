#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class NDMGIMOOFBL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define NDMGIMOOFBL_BEKKADKOEKC_OFFSET UNITYSDK_OFFSET(0x20302480)
#define NDMGIMOOFBL_BGKDMNHNGHH_OFFSET UNITYSDK_OFFSET(0x203024B0)
#define NDMGIMOOFBL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20302AB0)
#define NDMGIMOOFBL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20303050)
#define NDMGIMOOFBL_CLONE_OFFSET UNITYSDK_OFFSET(0x20302410)
#define NDMGIMOOFBL_CPCEGCCEMIM_OFFSET UNITYSDK_OFFSET(0x20302440)
#define NDMGIMOOFBL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203022A0)
#define NDMGIMOOFBL_CTOR_OFFSET UNITYSDK_OFFSET(0x20302220)
#define NDMGIMOOFBL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20302500)
#define NDMGIMOOFBL_EQUALS_OFFSET UNITYSDK_OFFSET(0x203024D0)
#define NDMGIMOOFBL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x203024A0)
#define NDMGIMOOFBL_FJOCHFMKIKP_OFFSET UNITYSDK_OFFSET(0x20302450)
#define NDMGIMOOFBL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203026B0)
#define NDMGIMOOFBL_HACNHKAODAN_OFFSET UNITYSDK_OFFSET(0x203024C0)
#define NDMGIMOOFBL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203021E0)
#define NDMGIMOOFBL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20302E80)
#define NDMGIMOOFBL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20302CC0)
#define NDMGIMOOFBL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x20302490)
#define NDMGIMOOFBL_OEPANEDJLKG_OFFSET UNITYSDK_OFFSET(0x20302460)
#define NDMGIMOOFBL_PAGHLNNPKBE_OFFSET UNITYSDK_OFFSET(0x20302470)
#define NDMGIMOOFBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20302210)
#define NDMGIMOOFBL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203027F0)
#define NDMGIMOOFBL_WRITETO_OFFSET UNITYSDK_OFFSET(0x20302850)

inline static constexpr unsigned int NDMGIMOOFBL_TypeDefinitionIndex = 30894;

	class NDMGIMOOFBL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BIILNICABJF; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* ADONNEFLOEE; // 0x18
		::Proto::ItemList* JDAFJANAEBG; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* JNGJCMLGGPK; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x38
		::System::Boolean IGICLDLCOBA; // 0x3C
		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_GNJBMGEBJEN()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "NDMGIMOOFBL")->GetStaticField(0x5DFA0);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_AAKLOCDPEHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "NDMGIMOOFBL")->GetStaticField(0x5DFA8);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_JCMEBOGHNOP()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "NDMGIMOOFBL")->GetStaticField(0x5DFB0);
		}

		static ::Google::Protobuf::MessageParser_1<::NDMGIMOOFBL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NDMGIMOOFBL*>**)UnitySDK::FromName("", "NDMGIMOOFBL")->GetStaticField(0x5DFB8);
		}

		// static const ::System::Object EBMIJAAKMMH; // 0x0
		// static const ::System::Object MIEOKHCABGP; // 0x0
		// static const ::System::Object FFBHAEDFGFL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HCPILBEGABH; // 0x0
		// static const ::System::Object OAPHHDDCCAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NDMGIMOOFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDMGIMOOFBL*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NDMGIMOOFBL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NDMGIMOOFBL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NDMGIMOOFBL*>*(*)())((::PBYTE)hIl2Cpp + NDMGIMOOFBL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NDMGIMOOFBL* Clone()
		{
			return ((::NDMGIMOOFBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* CPCEGCCEMIM()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_CPCEGCCEMIM_OFFSET))(this);
		}

		::System::Void FJOCHFMKIKP(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_FJOCHFMKIKP_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* OEPANEDJLKG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_OEPANEDJLKG_OFFSET))(this);
		}

		::System::Boolean PAGHLNNPKBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_PAGHLNNPKBE_OFFSET))(this);
		}

		::System::Void BEKKADKOEKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_BEKKADKOEKC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BGKDMNHNGHH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_BGKDMNHNGHH_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HACNHKAODAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_HACNHKAODAN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NDMGIMOOFBL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NDMGIMOOFBL*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NDMGIMOOFBL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NDMGIMOOFBL*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NDMGIMOOFBL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
