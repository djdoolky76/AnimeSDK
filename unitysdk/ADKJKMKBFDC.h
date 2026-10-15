#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ADKJKMKBFDC;
class JOCIBBFJPMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ADKJKMKBFDC_BLKAMFHHMGL_OFFSET UNITYSDK_OFFSET(0x1DDE3290)
#define ADKJKMKBFDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDE36F0)
#define ADKJKMKBFDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE3AB0)
#define ADKJKMKBFDC_CDIFOLHKCID_OFFSET UNITYSDK_OFFSET(0x1DDE3260)
#define ADKJKMKBFDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDE31F0)
#define ADKJKMKBFDC_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1DDE3240)
#define ADKJKMKBFDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDE3130)
#define ADKJKMKBFDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE30E0)
#define ADKJKMKBFDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDE3310)
#define ADKJKMKBFDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDE32B0)
#define ADKJKMKBFDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDE3450)
#define ADKJKMKBFDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDE3070)
#define ADKJKMKBFDC_KOIMBAMCMJC_OFFSET UNITYSDK_OFFSET(0x1DDE3280)
#define ADKJKMKBFDC_LCKKGPFEKHM_OFFSET UNITYSDK_OFFSET(0x1DDE32A0)
#define ADKJKMKBFDC_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1DDE3250)
#define ADKJKMKBFDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDE39B0)
#define ADKJKMKBFDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDE38F0)
#define ADKJKMKBFDC_OANLBBLIKLE_OFFSET UNITYSDK_OFFSET(0x1DDE3270)
#define ADKJKMKBFDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDE30D0)
#define ADKJKMKBFDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDE34D0)
#define ADKJKMKBFDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDE3530)

inline static constexpr unsigned int ADKJKMKBFDC_TypeDefinitionIndex = 26839;

	class ADKJKMKBFDC : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* MDELKGNPIOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DJKHJOFLHJE; // 0x20
		::System::UInt32 HFIMENELLNP; // 0x24
		::System::UInt32 DNKADAFBILN; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_GAINFCCDPFB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "ADKJKMKBFDC")->GetStaticField(0x2BA00);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ADKJKMKBFDC")->GetStaticField(0x2BA08);
		}

		// static const ::System::Object AOEBNCAILPJ; // 0x0
		// static const ::System::Object PKMGCNOEIKD; // 0x0
		// static const ::System::Object DEANCDOBDDG; // 0x0
		// static const ::System::Object EFEMONKDOCM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ADKJKMKBFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADKJKMKBFDC*))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ADKJKMKBFDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ADKJKMKBFDC* Clone()
		{
			return ((::ADKJKMKBFDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CLONE_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::UInt32 CDIFOLHKCID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CDIFOLHKCID_OFFSET))(this);
		}

		::System::Void OANLBBLIKLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_OANLBBLIKLE_OFFSET))(this, a1);
		}

		::System::UInt32 KOIMBAMCMJC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_KOIMBAMCMJC_OFFSET))(this);
		}

		::System::Void BLKAMFHHMGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_BLKAMFHHMGL_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>* LCKKGPFEKHM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JOCIBBFJPMP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_LCKKGPFEKHM_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ADKJKMKBFDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ADKJKMKBFDC*))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ADKJKMKBFDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ADKJKMKBFDC*))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ADKJKMKBFDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
