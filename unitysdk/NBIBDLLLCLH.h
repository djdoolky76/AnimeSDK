#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICOCIJEBKKD;
class NBIBDLLLCLH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBIBDLLLCLH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2015BA50)
#define NBIBDLLLCLH_CCTOR_OFFSET UNITYSDK_OFFSET(0x2015BE50)
#define NBIBDLLLCLH_CLONE_OFFSET UNITYSDK_OFFSET(0x2015B4E0)
#define NBIBDLLLCLH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2015B3B0)
#define NBIBDLLLCLH_CTOR_OFFSET UNITYSDK_OFFSET(0x2015B320)
#define NBIBDLLLCLH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2015B5A0)
#define NBIBDLLLCLH_EQUALS_OFFSET UNITYSDK_OFFSET(0x2015B570)
#define NBIBDLLLCLH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2015B540)
#define NBIBDLLLCLH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2015B700)
#define NBIBDLLLCLH_INNFFKDDBMJ_OFFSET UNITYSDK_OFFSET(0x2015B520)
#define NBIBDLLLCLH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2015B2E0)
#define NBIBDLLLCLH_KFIDJDCNAOI_OFFSET UNITYSDK_OFFSET(0x2015B510)
#define NBIBDLLLCLH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2015BCF0)
#define NBIBDLLLCLH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2015BC20)
#define NBIBDLLLCLH_NOOFNADIEEB_OFFSET UNITYSDK_OFFSET(0x2015B560)
#define NBIBDLLLCLH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2015B530)
#define NBIBDLLLCLH_OCPPLNHOBHP_OFFSET UNITYSDK_OFFSET(0x2015B550)
#define NBIBDLLLCLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2015B310)
#define NBIBDLLLCLH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2015B840)
#define NBIBDLLLCLH_WRITETO_OFFSET UNITYSDK_OFFSET(0x2015B8A0)

inline static constexpr unsigned int NBIBDLLLCLH_TypeDefinitionIndex = 28339;

	class NBIBDLLLCLH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>* OAEDOFHAIGJ; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DODBNKHAFMM; // 0x20
		::System::UInt32 NFKHJFOAKNJ; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x2C
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LEIKKCEOABO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NBIBDLLLCLH")->GetStaticField(0x58BB0);
		}

		static ::Google::Protobuf::MessageParser_1<::NBIBDLLLCLH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBIBDLLLCLH*>**)UnitySDK::FromName("", "NBIBDLLLCLH")->GetStaticField(0x58BB8);
		}

		static ::Google::Protobuf::FieldCodec_1<::ICOCIJEBKKD*>** StaticGet_KCFLBGNBDBC()
		{
			return (::Google::Protobuf::FieldCodec_1<::ICOCIJEBKKD*>**)UnitySDK::FromName("", "NBIBDLLLCLH")->GetStaticField(0x58BC0);
		}

		// static const ::System::Object IOPOFMCIOML; // 0x0
		// static const ::System::Object PGMFIENKIAC; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KEOPDAGCDCG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBIBDLLLCLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBDLLLCLH*))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBIBDLLLCLH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBIBDLLLCLH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBIBDLLLCLH*>*(*)())((::PBYTE)hIl2Cpp + NBIBDLLLCLH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBIBDLLLCLH* Clone()
		{
			return ((::NBIBDLLLCLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KFIDJDCNAOI()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_KFIDJDCNAOI_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>* INNFFKDDBMJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::ICOCIJEBKKD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_INNFFKDDBMJ_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 OCPPLNHOBHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_OCPPLNHOBHP_OFFSET))(this);
		}

		::System::Void NOOFNADIEEB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_NOOFNADIEEB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBIBDLLLCLH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBIBDLLLCLH*))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBIBDLLLCLH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBIBDLLLCLH*))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBIBDLLLCLH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
