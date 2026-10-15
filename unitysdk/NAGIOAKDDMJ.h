#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGIOAKDDMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAGIOAKDDMJ_AJILOHMCHIM_OFFSET UNITYSDK_OFFSET(0x1EAC21D0)
#define NAGIOAKDDMJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC2750)
#define NAGIOAKDDMJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2C10)
#define NAGIOAKDDMJ_CKIAMHOIHMO_OFFSET UNITYSDK_OFFSET(0x1EAC21A0)
#define NAGIOAKDDMJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC20F0)
#define NAGIOAKDDMJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC2050)
#define NAGIOAKDDMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC2000)
#define NAGIOAKDDMJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC22B0)
#define NAGIOAKDDMJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC21F0)
#define NAGIOAKDDMJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC2340)
#define NAGIOAKDDMJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC1F90)
#define NAGIOAKDDMJ_KAIAAEIBIOA_OFFSET UNITYSDK_OFFSET(0x1EAC2170)
#define NAGIOAKDDMJ_KAKICHLIJNJ_OFFSET UNITYSDK_OFFSET(0x1EAC2180)
#define NAGIOAKDDMJ_LEJJBLNFCPF_OFFSET UNITYSDK_OFFSET(0x1EAC2160)
#define NAGIOAKDDMJ_LFFOMLOABMM_OFFSET UNITYSDK_OFFSET(0x1EAC2190)
#define NAGIOAKDDMJ_LOMNJLHOGDO_OFFSET UNITYSDK_OFFSET(0x1EAC21C0)
#define NAGIOAKDDMJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC2AC0)
#define NAGIOAKDDMJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC2A40)
#define NAGIOAKDDMJ_MKPCJENPBJN_OFFSET UNITYSDK_OFFSET(0x1EAC21E0)
#define NAGIOAKDDMJ_OCNIMJOLHFC_OFFSET UNITYSDK_OFFSET(0x1EAC21B0)
#define NAGIOAKDDMJ_PBBBCFCOJFN_OFFSET UNITYSDK_OFFSET(0x1EAC2150)
#define NAGIOAKDDMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC1FF0)
#define NAGIOAKDDMJ_PNCKKMFFIAN_OFFSET UNITYSDK_OFFSET(0x1EAC2140)
#define NAGIOAKDDMJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC2460)
#define NAGIOAKDDMJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC24C0)

inline static constexpr unsigned int NAGIOAKDDMJ_TypeDefinitionIndex = 25118;

	class NAGIOAKDDMJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PLLAEOCEDML; // 0x18
		::System::UInt32 KKMBEBBLHEL; // 0x20
		::System::UInt32 PMBCOODBDOL; // 0x24
		::System::UInt32 IINJKLMMBLJ; // 0x28
		::System::UInt32 JJCAKGCNINI; // 0x2C
		::System::Int32 MLFLEEGBFJP; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_EHFDAHIEHIN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NAGIOAKDDMJ")->GetStaticField(0x20DE0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NAGIOAKDDMJ")->GetStaticField(0x20DE8);
		}

		// static const ::System::Object AHHJCDPEOPD; // 0x0
		// static const ::System::Object MNPBLKFFANP; // 0x0
		// static const ::System::Object JHPHPDPGLLF; // 0x0
		// static const ::System::Object DOIBBNNHOCD; // 0x0
		// static const ::System::Object BOLCCOCFKFL; // 0x0
		// static const ::System::Object AJEKOJPPGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAGIOAKDDMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGIOAKDDMJ*))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAGIOAKDDMJ* Clone()
		{
			return ((::NAGIOAKDDMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 PNCKKMFFIAN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_PNCKKMFFIAN_OFFSET))(this);
		}

		::System::Void PBBBCFCOJFN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_PBBBCFCOJFN_OFFSET))(this, a1);
		}

		::System::UInt32 LEJJBLNFCPF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_LEJJBLNFCPF_OFFSET))(this);
		}

		::System::Void KAIAAEIBIOA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_KAIAAEIBIOA_OFFSET))(this, a1);
		}

		::System::Int32 KAKICHLIJNJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_KAKICHLIJNJ_OFFSET))(this);
		}

		::System::Void LFFOMLOABMM(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_LFFOMLOABMM_OFFSET))(this, a1);
		}

		::System::UInt32 CKIAMHOIHMO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_CKIAMHOIHMO_OFFSET))(this);
		}

		::System::Void OCNIMJOLHFC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_OCNIMJOLHFC_OFFSET))(this, a1);
		}

		::System::UInt32 LOMNJLHOGDO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_LOMNJLHOGDO_OFFSET))(this);
		}

		::System::Void AJILOHMCHIM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_AJILOHMCHIM_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MKPCJENPBJN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_MKPCJENPBJN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAGIOAKDDMJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAGIOAKDDMJ*))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAGIOAKDDMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAGIOAKDDMJ*))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAGIOAKDDMJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
