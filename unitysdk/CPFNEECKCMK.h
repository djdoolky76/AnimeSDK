#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APAMFCKFHLL;
class BCIMOPDDKHH;
class CPFNEECKCMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPFNEECKCMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E13CE10)
#define CPFNEECKCMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E13D320)
#define CPFNEECKCMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E13C970)
#define CPFNEECKCMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E13C8A0)
#define CPFNEECKCMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E13C800)
#define CPFNEECKCMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E13CA40)
#define CPFNEECKCMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E13CA10)
#define CPFNEECKCMK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E13CA00)
#define CPFNEECKCMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E13CB30)
#define CPFNEECKCMK_GFJDMEPNGFB_OFFSET UNITYSDK_OFFSET(0x1E13C9A0)
#define CPFNEECKCMK_HCLHAFDEFLG_OFFSET UNITYSDK_OFFSET(0x1E13C9B0)
#define CPFNEECKCMK_HJLBGPJKINB_OFFSET UNITYSDK_OFFSET(0x1E13C9E0)
#define CPFNEECKCMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E13C7C0)
#define CPFNEECKCMK_MBDMNCDJPDB_OFFSET UNITYSDK_OFFSET(0x1E13C9C0)
#define CPFNEECKCMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E13D1A0)
#define CPFNEECKCMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E13D040)
#define CPFNEECKCMK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E13C9F0)
#define CPFNEECKCMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E13C7F0)
#define CPFNEECKCMK_PCJOGIAJHMF_OFFSET UNITYSDK_OFFSET(0x1E13C9D0)
#define CPFNEECKCMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E13CBE0)
#define CPFNEECKCMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E13CC40)

inline static constexpr unsigned int CPFNEECKCMK_TypeDefinitionIndex = 30045;

	class CPFNEECKCMK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* AKIPNODIFLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::BCIMOPDDKHH*>* KBOHBONDMBK; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* BPLDOOODONJ; // 0x28
		::System::UInt32 MPFELJLKAFH; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		static ::Google::Protobuf::MessageParser_1<::CPFNEECKCMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CPFNEECKCMK*>**)UnitySDK::FromName("", "CPFNEECKCMK")->GetStaticField(0x222E0);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_LEKLGKDDFMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "CPFNEECKCMK")->GetStaticField(0x222E8);
		}

		static ::Google::Protobuf::FieldCodec_1<::BCIMOPDDKHH*>** StaticGet_IPPKEMNJLHL()
		{
			return (::Google::Protobuf::FieldCodec_1<::BCIMOPDDKHH*>**)UnitySDK::FromName("", "CPFNEECKCMK")->GetStaticField(0x222F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>** StaticGet_LANJFHKLDDA()
		{
			return (::Google::Protobuf::FieldCodec_1<::APAMFCKFHLL*>**)UnitySDK::FromName("", "CPFNEECKCMK")->GetStaticField(0x222F8);
		}

		// static const ::System::Object CEKIBAHNILO; // 0x0
		// static const ::System::Object OHCPOGIAMMG; // 0x0
		// static const ::System::Object CODFBJPPBGL; // 0x0
		// static const ::System::Object EOFIGIPMOJE; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPFNEECKCMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPFNEECKCMK*))((::PBYTE)hIl2Cpp + CPFNEECKCMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPFNEECKCMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CPFNEECKCMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CPFNEECKCMK*>*(*)())((::PBYTE)hIl2Cpp + CPFNEECKCMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPFNEECKCMK* Clone()
		{
			return ((::CPFNEECKCMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* GFJDMEPNGFB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_GFJDMEPNGFB_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>* HCLHAFDEFLG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::APAMFCKFHLL*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_HCLHAFDEFLG_OFFSET))(this);
		}

		::System::UInt32 MBDMNCDJPDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_MBDMNCDJPDB_OFFSET))(this);
		}

		::System::Void PCJOGIAJHMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPFNEECKCMK_PCJOGIAJHMF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::BCIMOPDDKHH*>* HJLBGPJKINB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::BCIMOPDDKHH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_HJLBGPJKINB_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPFNEECKCMK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPFNEECKCMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPFNEECKCMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPFNEECKCMK*))((::PBYTE)hIl2Cpp + CPFNEECKCMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPFNEECKCMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPFNEECKCMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPFNEECKCMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPFNEECKCMK*))((::PBYTE)hIl2Cpp + CPFNEECKCMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPFNEECKCMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
