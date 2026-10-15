#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMBFOGJJONO.h"
#include "unitysdk/System/Object.h"
class NMHHIBMCJHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMHHIBMCJHI_BGAOOPDDIGJ_OFFSET UNITYSDK_OFFSET(0x1EB76310)
#define NMHHIBMCJHI_BMHFHIALIHD_OFFSET UNITYSDK_OFFSET(0x1EB76390)
#define NMHHIBMCJHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB76890)
#define NMHHIBMCJHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB76D50)
#define NMHHIBMCJHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB762C0)
#define NMHHIBMCJHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB76220)
#define NMHHIBMCJHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB761D0)
#define NMHHIBMCJHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB76430)
#define NMHHIBMCJHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB763A0)
#define NMHHIBMCJHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB764C0)
#define NMHHIBMCJHI_GFENJJFLOAL_OFFSET UNITYSDK_OFFSET(0x1EB76360)
#define NMHHIBMCJHI_GGPDJCKAMPI_OFFSET UNITYSDK_OFFSET(0x1EB76370)
#define NMHHIBMCJHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB76190)
#define NMHHIBMCJHI_LNGEKHMJCHJ_OFFSET UNITYSDK_OFFSET(0x1EB76350)
#define NMHHIBMCJHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB76C20)
#define NMHHIBMCJHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB76BA0)
#define NMHHIBMCJHI_MJHJFJHHDHH_OFFSET UNITYSDK_OFFSET(0x1EB762F0)
#define NMHHIBMCJHI_MPFIANNNNGA_OFFSET UNITYSDK_OFFSET(0x1EB76300)
#define NMHHIBMCJHI_NCBLPDPCKBI_OFFSET UNITYSDK_OFFSET(0x1EB76340)
#define NMHHIBMCJHI_NFBJCECCCAC_OFFSET UNITYSDK_OFFSET(0x1EB76330)
#define NMHHIBMCJHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB761C0)
#define NMHHIBMCJHI_PFNOFDOHJCM_OFFSET UNITYSDK_OFFSET(0x1EB76380)
#define NMHHIBMCJHI_PIJGHCPBGOI_OFFSET UNITYSDK_OFFSET(0x1EB76320)
#define NMHHIBMCJHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB765D0)
#define NMHHIBMCJHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB76630)

	class NMHHIBMCJHI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* PKBOMMOMKGJ; // 0x18
		::System::UInt32 EBNCEJCMLAC; // 0x20
		::System::UInt32 APLLLHDMLCP; // 0x24
		::System::UInt32 IDKAAEKCFOG; // 0x28
		::System::UInt32 ACBPIOJPFPK; // 0x2C
		::EMBFOGJJONO MJFELPMNGOC; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_PCDGCBMPNCJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "NMHHIBMCJHI")->GetStaticField(0x3DFA0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NMHHIBMCJHI")->GetStaticField(0x3DFA8);
		}

		// static const ::System::Object CMJKMODCDPD; // 0x0
		// static const ::System::Object AEEJDNHJOFN; // 0x0
		// static const ::System::Object KPLHMECIPGJ; // 0x0
		// static const ::System::Object PMEIEMBGLCB; // 0x0
		// static const ::System::Object MJMNFPHGIJC; // 0x0
		// static const ::System::Object BHMNMBLPMOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMHHIBMCJHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NMHHIBMCJHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMHHIBMCJHI* Clone()
		{
			return ((::NMHHIBMCJHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MJHJFJHHDHH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_MJHJFJHHDHH_OFFSET))(this);
		}

		::System::Void MPFIANNNNGA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_MPFIANNNNGA_OFFSET))(this, a1);
		}

		::System::UInt32 BGAOOPDDIGJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_BGAOOPDDIGJ_OFFSET))(this);
		}

		::System::Void PIJGHCPBGOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_PIJGHCPBGOI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* NFBJCECCCAC()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_NFBJCECCCAC_OFFSET))(this);
		}

		::System::UInt32 NCBLPDPCKBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_NCBLPDPCKBI_OFFSET))(this);
		}

		::System::Void LNGEKHMJCHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_LNGEKHMJCHJ_OFFSET))(this, a1);
		}

		::EMBFOGJJONO GFENJJFLOAL()
		{
			return ((::EMBFOGJJONO(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_GFENJJFLOAL_OFFSET))(this);
		}

		::System::Void GGPDJCKAMPI(::EMBFOGJJONO a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMBFOGJJONO))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_GGPDJCKAMPI_OFFSET))(this, a1);
		}

		::System::UInt32 PFNOFDOHJCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_PFNOFDOHJCM_OFFSET))(this);
		}

		::System::Void BMHFHIALIHD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_BMHFHIALIHD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMHHIBMCJHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMHHIBMCJHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMHHIBMCJHI*))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMHHIBMCJHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
