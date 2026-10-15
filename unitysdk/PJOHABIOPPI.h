#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFEDHCKDDFA;
class PJOHABIOPPI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PJOHABIOPPI_BHKLKCPBNMM_OFFSET UNITYSDK_OFFSET(0x1DF82010)
#define PJOHABIOPPI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF826C0)
#define PJOHABIOPPI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF82C70)
#define PJOHABIOPPI_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF81FA0)
#define PJOHABIOPPI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF81E00)
#define PJOHABIOPPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF81D70)
#define PJOHABIOPPI_EKCIEMPHFBK_OFFSET UNITYSDK_OFFSET(0x1DF82030)
#define PJOHABIOPPI_ENLIKFMGBCM_OFFSET UNITYSDK_OFFSET(0x1DF82070)
#define PJOHABIOPPI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF820F0)
#define PJOHABIOPPI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF82090)
#define PJOHABIOPPI_FEIPGFBNMDK_OFFSET UNITYSDK_OFFSET(0x1DF81FF0)
#define PJOHABIOPPI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF82270)
#define PJOHABIOPPI_HLIKGLDOADH_OFFSET UNITYSDK_OFFSET(0x1DF82060)
#define PJOHABIOPPI_HLJPGIAMGBD_OFFSET UNITYSDK_OFFSET(0x1DF82020)
#define PJOHABIOPPI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF81D00)
#define PJOHABIOPPI_JKOMEEPFFOJ_OFFSET UNITYSDK_OFFSET(0x1DF82040)
#define PJOHABIOPPI_KGIGBJKNAKA_OFFSET UNITYSDK_OFFSET(0x1DF82080)
#define PJOHABIOPPI_KJMEPFEOPIG_OFFSET UNITYSDK_OFFSET(0x1DF82000)
#define PJOHABIOPPI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF82AB0)
#define PJOHABIOPPI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF82950)
#define PJOHABIOPPI_OCDMGAHCPHJ_OFFSET UNITYSDK_OFFSET(0x1DF82050)
#define PJOHABIOPPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF81D60)
#define PJOHABIOPPI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF823F0)
#define PJOHABIOPPI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF82450)

	class PJOHABIOPPI : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LEPICKGEHKF; // 0x10
		::AFEDHCKDDFA* GCKADBCJBEH; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::AFEDHCKDDFA*>* GKEOPFNABME; // 0x20
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x28
		::System::UInt32 OGJLDCKHEFJ; // 0x30
		::System::UInt32 NALHANJNHLG; // 0x34
		::System::UInt32 CIJLCEFCLGO; // 0x38
		static ::Google::Protobuf::FieldCodec** StaticGet_FNHJCKOIEON()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PJOHABIOPPI")->GetStaticField(0x47370);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_POBBAEMEHNI()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PJOHABIOPPI")->GetStaticField(0x47378);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PJOHABIOPPI")->GetStaticField(0x47380);
		}

		// static const ::System::Object GHOBDPABBNG; // 0x0
		// static const ::System::Object DCFCEGFBJNC; // 0x0
		// static const ::System::Object NIEBGNHGDIH; // 0x0
		// static const ::System::Object BNBOEGLOCAI; // 0x0
		// static const ::System::Object LAPPNINOPAC; // 0x0
		// static const ::System::Object JAFCACOPOJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PJOHABIOPPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJOHABIOPPI*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PJOHABIOPPI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PJOHABIOPPI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PJOHABIOPPI* Clone()
		{
			return ((::PJOHABIOPPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEIPGFBNMDK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_FEIPGFBNMDK_OFFSET))(this);
		}

		::System::Void KJMEPFEOPIG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJOHABIOPPI_KJMEPFEOPIG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BHKLKCPBNMM()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_BHKLKCPBNMM_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AFEDHCKDDFA*>* HLJPGIAMGBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AFEDHCKDDFA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_HLJPGIAMGBD_OFFSET))(this);
		}

		::System::UInt32 EKCIEMPHFBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_EKCIEMPHFBK_OFFSET))(this);
		}

		::System::Void JKOMEEPFFOJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJOHABIOPPI_JKOMEEPFFOJ_OFFSET))(this, a1);
		}

		::AFEDHCKDDFA* OCDMGAHCPHJ()
		{
			return ((::AFEDHCKDDFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_OCDMGAHCPHJ_OFFSET))(this);
		}

		::System::Void HLIKGLDOADH(::AFEDHCKDDFA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFEDHCKDDFA*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_HLIKGLDOADH_OFFSET))(this, a1);
		}

		::System::UInt32 ENLIKFMGBCM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_ENLIKFMGBCM_OFFSET))(this);
		}

		::System::Void KGIGBJKNAKA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJOHABIOPPI_KGIGBJKNAKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PJOHABIOPPI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJOHABIOPPI*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJOHABIOPPI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PJOHABIOPPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJOHABIOPPI*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PJOHABIOPPI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
