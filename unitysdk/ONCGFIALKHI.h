#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONCGFIALKHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONCGFIALKHI_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1DEC2650)
#define ONCGFIALKHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEC2C40)
#define ONCGFIALKHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEC30E0)
#define ONCGFIALKHI_CJNPMPBNAKL_OFFSET UNITYSDK_OFFSET(0x1DEC2670)
#define ONCGFIALKHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEC2620)
#define ONCGFIALKHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEC2570)
#define ONCGFIALKHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2520)
#define ONCGFIALKHI_DBMEJEFLNAE_OFFSET UNITYSDK_OFFSET(0x1DEC2680)
#define ONCGFIALKHI_ENCJICIHGAK_OFFSET UNITYSDK_OFFSET(0x1DEC26E0)
#define ONCGFIALKHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEC27A0)
#define ONCGFIALKHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEC2700)
#define ONCGFIALKHI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEC26D0)
#define ONCGFIALKHI_GCMNKFNNBNK_OFFSET UNITYSDK_OFFSET(0x1DEC26F0)
#define ONCGFIALKHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEC2830)
#define ONCGFIALKHI_GIIPBMIDGMG_OFFSET UNITYSDK_OFFSET(0x1DEC2690)
#define ONCGFIALKHI_IGDNFGBHJJB_OFFSET UNITYSDK_OFFSET(0x1DEC26B0)
#define ONCGFIALKHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEC24E0)
#define ONCGFIALKHI_MBAAHOOCPAN_OFFSET UNITYSDK_OFFSET(0x1DEC26A0)
#define ONCGFIALKHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEC2F90)
#define ONCGFIALKHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEC2F10)
#define ONCGFIALKHI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEC26C0)
#define ONCGFIALKHI_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1DEC2660)
#define ONCGFIALKHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEC2510)
#define ONCGFIALKHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEC2960)
#define ONCGFIALKHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEC29C0)

	class ONCGFIALKHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ELMCGNEAAHF; // 0x18
		::System::Int64 AONFEONDPDL; // 0x20
		::System::Boolean PPEJJFLFPLM; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x2C
		::System::UInt32 BGMLGHECGBM; // 0x30
		::System::UInt32 IEFKLOKPHIM; // 0x34
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONCGFIALKHI")->GetStaticField(0x2BF90);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_LAFIEPLAPED()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ONCGFIALKHI")->GetStaticField(0x2BF98);
		}

		// static const ::System::Object LANLJAPHOCL; // 0x0
		// static const ::System::Object ODLGJOLIOKD; // 0x0
		// static const ::System::Object KEBONEOKEPI; // 0x0
		// static const ::System::Object DDAGONOHDFN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object MDCMPEMFAFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONCGFIALKHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONCGFIALKHI*))((::PBYTE)hIl2Cpp + ONCGFIALKHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONCGFIALKHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONCGFIALKHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONCGFIALKHI* Clone()
		{
			return ((::ONCGFIALKHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONCGFIALKHI_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CJNPMPBNAKL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_CJNPMPBNAKL_OFFSET))(this);
		}

		::System::UInt32 DBMEJEFLNAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_DBMEJEFLNAE_OFFSET))(this);
		}

		::System::Void GIIPBMIDGMG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONCGFIALKHI_GIIPBMIDGMG_OFFSET))(this, a1);
		}

		::System::Boolean MBAAHOOCPAN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_MBAAHOOCPAN_OFFSET))(this);
		}

		::System::Void IGDNFGBHJJB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ONCGFIALKHI_IGDNFGBHJJB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONCGFIALKHI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Int64 ENCJICIHGAK()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_ENCJICIHGAK_OFFSET))(this);
		}

		::System::Void GCMNKFNNBNK(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + ONCGFIALKHI_GCMNKFNNBNK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONCGFIALKHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONCGFIALKHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONCGFIALKHI*))((::PBYTE)hIl2Cpp + ONCGFIALKHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONCGFIALKHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONCGFIALKHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONCGFIALKHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONCGFIALKHI*))((::PBYTE)hIl2Cpp + ONCGFIALKHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONCGFIALKHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
