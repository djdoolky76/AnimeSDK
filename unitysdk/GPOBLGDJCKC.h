#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPOBLGDJCKC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GPOBLGDJCKC_AOFBBABEJCB_OFFSET UNITYSDK_OFFSET(0x1E4FB210)
#define GPOBLGDJCKC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4FB710)
#define GPOBLGDJCKC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4FBBE0)
#define GPOBLGDJCKC_CGMBGIJNGEJ_OFFSET UNITYSDK_OFFSET(0x1E4FB170)
#define GPOBLGDJCKC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4FB0C0)
#define GPOBLGDJCKC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4FB070)
#define GPOBLGDJCKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB060)
#define GPOBLGDJCKC_DCNMCEHAPHN_OFFSET UNITYSDK_OFFSET(0x1E4FB1F0)
#define GPOBLGDJCKC_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E4FB140)
#define GPOBLGDJCKC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4FB2C0)
#define GPOBLGDJCKC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4FB220)
#define GPOBLGDJCKC_FNBFMKADPEH_OFFSET UNITYSDK_OFFSET(0x1E4FB1C0)
#define GPOBLGDJCKC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4FB350)
#define GPOBLGDJCKC_GPAFPIFJEAF_OFFSET UNITYSDK_OFFSET(0x1E4FB130)
#define GPOBLGDJCKC_HLACEGGLEGF_OFFSET UNITYSDK_OFFSET(0x1E4FB120)
#define GPOBLGDJCKC_HPMICBAKODC_OFFSET UNITYSDK_OFFSET(0x1E4FB1D0)
#define GPOBLGDJCKC_IBMKFPKPJED_OFFSET UNITYSDK_OFFSET(0x1E4FB160)
#define GPOBLGDJCKC_JDIDFIPKGAB_OFFSET UNITYSDK_OFFSET(0x1E4FB1E0)
#define GPOBLGDJCKC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4FB020)
#define GPOBLGDJCKC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4FBAE0)
#define GPOBLGDJCKC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4FBA60)
#define GPOBLGDJCKC_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E4FB150)
#define GPOBLGDJCKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4FB050)
#define GPOBLGDJCKC_PPBHLLMLNLH_OFFSET UNITYSDK_OFFSET(0x1E4FB200)
#define GPOBLGDJCKC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4FB430)
#define GPOBLGDJCKC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4FB490)

inline static constexpr unsigned int GPOBLGDJCKC_TypeDefinitionIndex = 34141;

	class GPOBLGDJCKC : public ::System::Object
	{
	public:
		::System::String* FFMAAIAOIDK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt64 JEHBHEOHGLN; // 0x20
		::System::UInt32 DNCBIIBLFOO; // 0x28
		::System::UInt32 FLBKCMIIFFP; // 0x2C
		::System::Int32 PGMDMELPBIA; // 0x30
		::System::UInt32 DKLCPIAINIK; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GPOBLGDJCKC")->GetStaticField(0x2BC30);
		}

		// static const ::System::Object GEMDHFJFBHD; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object IGLAFOLEPGB; // 0x0
		// static const ::System::Object NBCBOBPECPD; // 0x0
		// static const ::System::Object MJGHGEHCLEB; // 0x0
		// static const ::System::Object JFFKLDOPFOJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GPOBLGDJCKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPOBLGDJCKC*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPOBLGDJCKC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GPOBLGDJCKC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GPOBLGDJCKC* Clone()
		{
			return ((::GPOBLGDJCKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_CLONE_OFFSET))(this);
		}

		::System::UInt64 HLACEGGLEGF()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_HLACEGGLEGF_OFFSET))(this);
		}

		::System::Void GPAFPIFJEAF(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_GPAFPIFJEAF_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::String* IBMKFPKPJED()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_IBMKFPKPJED_OFFSET))(this);
		}

		::System::Void CGMBGIJNGEJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_CGMBGIJNGEJ_OFFSET))(this, a1);
		}

		::System::UInt32 FNBFMKADPEH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_FNBFMKADPEH_OFFSET))(this);
		}

		::System::Void HPMICBAKODC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_HPMICBAKODC_OFFSET))(this, a1);
		}

		::System::Int32 JDIDFIPKGAB()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_JDIDFIPKGAB_OFFSET))(this);
		}

		::System::Void DCNMCEHAPHN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_DCNMCEHAPHN_OFFSET))(this, a1);
		}

		::System::UInt32 PPBHLLMLNLH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_PPBHLLMLNLH_OFFSET))(this);
		}

		::System::Void AOFBBABEJCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_AOFBBABEJCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GPOBLGDJCKC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GPOBLGDJCKC*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GPOBLGDJCKC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GPOBLGDJCKC*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GPOBLGDJCKC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
