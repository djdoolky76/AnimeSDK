#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HILCBNGIFKL;
class KJAFBEGOCHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJAFBEGOCHP_AFMCDJJPIIN_OFFSET UNITYSDK_OFFSET(0x1FDEDBD0)
#define KJAFBEGOCHP_AMGKHOILFCD_OFFSET UNITYSDK_OFFSET(0x1FDEDB40)
#define KJAFBEGOCHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDEE240)
#define KJAFBEGOCHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDEE740)
#define KJAFBEGOCHP_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDEDA40)
#define KJAFBEGOCHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDED990)
#define KJAFBEGOCHP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDED970)
#define KJAFBEGOCHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDEDC70)
#define KJAFBEGOCHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDEDC40)
#define KJAFBEGOCHP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FDEDB10)
#define KJAFBEGOCHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDEDDC0)
#define KJAFBEGOCHP_HCOIFBALCNA_OFFSET UNITYSDK_OFFSET(0x1FDEDBC0)
#define KJAFBEGOCHP_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1FDEDB60)
#define KJAFBEGOCHP_HNFHDNDFAGO_OFFSET UNITYSDK_OFFSET(0x1FDEDB20)
#define KJAFBEGOCHP_HOHJPLMNCJG_OFFSET UNITYSDK_OFFSET(0x1FDEDB50)
#define KJAFBEGOCHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDED930)
#define KJAFBEGOCHP_LKNKCOHFDOA_OFFSET UNITYSDK_OFFSET(0x1FDEDBE0)
#define KJAFBEGOCHP_MBOKLFNEOBI_OFFSET UNITYSDK_OFFSET(0x1FDEDBF0)
#define KJAFBEGOCHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDEE5E0)
#define KJAFBEGOCHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDEE4E0)
#define KJAFBEGOCHP_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1FDEDB70)
#define KJAFBEGOCHP_MMEHOEOJEOP_OFFSET UNITYSDK_OFFSET(0x1FDEDB30)
#define KJAFBEGOCHP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FDEDB00)
#define KJAFBEGOCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDED960)
#define KJAFBEGOCHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDEDF70)
#define KJAFBEGOCHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDEDFD0)

inline static constexpr unsigned int KJAFBEGOCHP_TypeDefinitionIndex = 32931;

	class KJAFBEGOCHP : public ::System::Object
	{
	public:
		::System::String* JDOJAMHCAJD; // 0x10
		::HILCBNGIFKL* BJAOKCEDLKI; // 0x18
		::System::String* NCFALPOHOLI; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 IBEBBFIHLLP; // 0x30
		::System::UInt32 NAEACGPKNNH; // 0x34
		::System::UInt64 EPOEDBLALOI; // 0x38
		static ::Google::Protobuf::MessageParser_1<::KJAFBEGOCHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJAFBEGOCHP*>**)UnitySDK::FromName("", "KJAFBEGOCHP")->GetStaticField(0x14B20);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NBGFNPCPJFL; // 0x0
		// static const ::System::Object EBLHHNJBIJK; // 0x0
		// static const ::System::Object DBKOHLFBPNI; // 0x0
		// static const ::System::Object AODKNNMBGAD; // 0x0
		// static const ::System::Object JKOGPMLPGJJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJAFBEGOCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAFBEGOCHP*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJAFBEGOCHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJAFBEGOCHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJAFBEGOCHP*>*(*)())((::PBYTE)hIl2Cpp + KJAFBEGOCHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJAFBEGOCHP* Clone()
		{
			return ((::KJAFBEGOCHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt64 HNFHDNDFAGO()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_HNFHDNDFAGO_OFFSET))(this);
		}

		::System::Void MMEHOEOJEOP(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_MMEHOEOJEOP_OFFSET))(this, a1);
		}

		::HILCBNGIFKL* AMGKHOILFCD()
		{
			return ((::HILCBNGIFKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_AMGKHOILFCD_OFFSET))(this);
		}

		::System::Void HOHJPLMNCJG(::HILCBNGIFKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HILCBNGIFKL*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_HOHJPLMNCJG_OFFSET))(this, a1);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::UInt32 HCOIFBALCNA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_HCOIFBALCNA_OFFSET))(this);
		}

		::System::Void AFMCDJJPIIN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_AFMCDJJPIIN_OFFSET))(this, a1);
		}

		::System::String* LKNKCOHFDOA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_LKNKCOHFDOA_OFFSET))(this);
		}

		::System::Void MBOKLFNEOBI(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_MBOKLFNEOBI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJAFBEGOCHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJAFBEGOCHP*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJAFBEGOCHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAFBEGOCHP*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJAFBEGOCHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
