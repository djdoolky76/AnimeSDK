#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEPHKJFAJPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MEPHKJFAJPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA13770)
#define MEPHKJFAJPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA13CF0)
#define MEPHKJFAJPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA12AD0)
#define MEPHKJFAJPP_COFFKLNINBE_OFFSET UNITYSDK_OFFSET(0x1EA12C70)
#define MEPHKJFAJPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA12A30)
#define MEPHKJFAJPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA129E0)
#define MEPHKJFAJPP_DHDOGHFFPJK_OFFSET UNITYSDK_OFFSET(0x1EA12C80)
#define MEPHKJFAJPP_DLKMBPHJFJJ_OFFSET UNITYSDK_OFFSET(0x1EA12C20)
#define MEPHKJFAJPP_EAMLCJHFGNM_OFFSET UNITYSDK_OFFSET(0x1EA12DF0)
#define MEPHKJFAJPP_ECFNKMBNHEG_OFFSET UNITYSDK_OFFSET(0x1EA12CD0)
#define MEPHKJFAJPP_EGIONFKGDAJ_OFFSET UNITYSDK_OFFSET(0x1EA12BB0)
#define MEPHKJFAJPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA12EB0)
#define MEPHKJFAJPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA12E50)
#define MEPHKJFAJPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA13010)
#define MEPHKJFAJPP_HGEPBIGNJAI_OFFSET UNITYSDK_OFFSET(0x1EA12E00)
#define MEPHKJFAJPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA12970)
#define MEPHKJFAJPP_LDAAFEDIIDN_OFFSET UNITYSDK_OFFSET(0x1EA12DA0)
#define MEPHKJFAJPP_LFLBJIEGCFH_OFFSET UNITYSDK_OFFSET(0x1EA12D30)
#define MEPHKJFAJPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA13A60)
#define MEPHKJFAJPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA13980)
#define MEPHKJFAJPP_MNJGKKNANIA_OFFSET UNITYSDK_OFFSET(0x1EA12C10)
#define MEPHKJFAJPP_NBBCDEJPJHM_OFFSET UNITYSDK_OFFSET(0x1EA12CE0)
#define MEPHKJFAJPP_NMIBLIMFOKH_OFFSET UNITYSDK_OFFSET(0x1EA12D40)
#define MEPHKJFAJPP_OMKEDADHKAG_OFFSET UNITYSDK_OFFSET(0x1EA12D90)
#define MEPHKJFAJPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA129D0)
#define MEPHKJFAJPP_PJMAABCFOJL_OFFSET UNITYSDK_OFFSET(0x1EA12BC0)
#define MEPHKJFAJPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA133E0)
#define MEPHKJFAJPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA13440)

	class MEPHKJFAJPP : public ::System::Object
	{
	public:
		::System::String* EHJPNDHJKEA; // 0x10
		::System::String* INAPODBLEMG; // 0x18
		::System::String* MHJMNOLIDNO; // 0x20
		::System::String* FKOJHHJILFG; // 0x28
		::System::String* DNBBMAEJAKJ; // 0x30
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x38
		::System::String* LFMCMGNAEHM; // 0x40
		::System::String* IGLDAPFJKJD; // 0x48
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MEPHKJFAJPP")->GetStaticField(0x4B5E0);
		}

		// static const ::System::Object COLHHKAFIAM; // 0x0
		// static const ::System::Object GBGJFHGNCFE; // 0x0
		// static const ::System::Object HHKHIPGEDFK; // 0x0
		// static const ::System::Object GJIMCPKDILF; // 0x0
		// static const ::System::Object HNOPFHEECPA; // 0x0
		// static const ::System::Object IPPMMOPLBDF; // 0x0
		// static const ::System::Object GBACOAIGAHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MEPHKJFAJPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEPHKJFAJPP*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEPHKJFAJPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MEPHKJFAJPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MEPHKJFAJPP* Clone()
		{
			return ((::MEPHKJFAJPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_CLONE_OFFSET))(this);
		}

		::System::String* EGIONFKGDAJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_EGIONFKGDAJ_OFFSET))(this);
		}

		::System::Void PJMAABCFOJL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_PJMAABCFOJL_OFFSET))(this, a1);
		}

		::System::String* MNJGKKNANIA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_MNJGKKNANIA_OFFSET))(this);
		}

		::System::Void DLKMBPHJFJJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_DLKMBPHJFJJ_OFFSET))(this, a1);
		}

		::System::String* COFFKLNINBE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_COFFKLNINBE_OFFSET))(this);
		}

		::System::Void DHDOGHFFPJK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_DHDOGHFFPJK_OFFSET))(this, a1);
		}

		::System::String* ECFNKMBNHEG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_ECFNKMBNHEG_OFFSET))(this);
		}

		::System::Void NBBCDEJPJHM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_NBBCDEJPJHM_OFFSET))(this, a1);
		}

		::System::String* LFLBJIEGCFH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_LFLBJIEGCFH_OFFSET))(this);
		}

		::System::Void NMIBLIMFOKH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_NMIBLIMFOKH_OFFSET))(this, a1);
		}

		::System::String* OMKEDADHKAG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_OMKEDADHKAG_OFFSET))(this);
		}

		::System::Void LDAAFEDIIDN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_LDAAFEDIIDN_OFFSET))(this, a1);
		}

		::System::String* EAMLCJHFGNM()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_EAMLCJHFGNM_OFFSET))(this);
		}

		::System::Void HGEPBIGNJAI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_HGEPBIGNJAI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MEPHKJFAJPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEPHKJFAJPP*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MEPHKJFAJPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MEPHKJFAJPP*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MEPHKJFAJPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
