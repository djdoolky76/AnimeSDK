#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FBNGHMHHHLL;
class MGBHKCMHDOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FBNGHMHHHLL_BGJEAMKPJBH_OFFSET UNITYSDK_OFFSET(0x1E33B340)
#define FBNGHMHHHLL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E33B8D0)
#define FBNGHMHHHLL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E33BE30)
#define FBNGHMHHHLL_CEOPAIKKEKK_OFFSET UNITYSDK_OFFSET(0x1E33B330)
#define FBNGHMHHHLL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E33B2A0)
#define FBNGHMHHHLL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E33B160)
#define FBNGHMHHHLL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E33B0D0)
#define FBNGHMHHHLL_EGKLFHBCGCB_OFFSET UNITYSDK_OFFSET(0x1E33B350)
#define FBNGHMHHHLL_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E33B380)
#define FBNGHMHHHLL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E33B3F0)
#define FBNGHMHHHLL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E33B390)
#define FBNGHMHHHLL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E33B4D0)
#define FBNGHMHHHLL_HDLCCJJBGAO_OFFSET UNITYSDK_OFFSET(0x1E33B310)
#define FBNGHMHHHLL_JIONJNOOEMD_OFFSET UNITYSDK_OFFSET(0x1E33B2F0)
#define FBNGHMHHHLL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E33B060)
#define FBNGHMHHHLL_JJJILECABMG_OFFSET UNITYSDK_OFFSET(0x1E33B320)
#define FBNGHMHHHLL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E33BC90)
#define FBNGHMHHHLL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E33BBA0)
#define FBNGHMHHHLL_MMFNJHMEMLG_OFFSET UNITYSDK_OFFSET(0x1E33B300)
#define FBNGHMHHHLL_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E33B370)
#define FBNGHMHHHLL_ODCGOFNBLDI_OFFSET UNITYSDK_OFFSET(0x1E33B360)
#define FBNGHMHHHLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E33B0C0)
#define FBNGHMHHHLL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E33B620)
#define FBNGHMHHHLL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E33B680)

inline static constexpr unsigned int FBNGHMHHHLL_TypeDefinitionIndex = 29158;

	class FBNGHMHHHLL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JEOKCOLONMO; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::MGBHKCMHDOK*>* ANPJINECOKO; // 0x20
		::System::UInt32 LMJICIBPDOH; // 0x28
		::System::UInt32 MJIMFDKFGDE; // 0x2C
		::System::UInt32 IAAJPEFEGPI; // 0x30
		::System::UInt32 HOKFPGEEKED; // 0x34
		static ::Google::Protobuf::FieldCodec_1<::MGBHKCMHDOK*>** StaticGet_HCAMKCJDIIL()
		{
			return (::Google::Protobuf::FieldCodec_1<::MGBHKCMHDOK*>**)UnitySDK::FromName("", "FBNGHMHHHLL")->GetStaticField(0x15410);
		}

		static ::Google::Protobuf::MessageParser_1<::FBNGHMHHHLL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FBNGHMHHHLL*>**)UnitySDK::FromName("", "FBNGHMHHHLL")->GetStaticField(0x15418);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MJJMBOJKJDE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FBNGHMHHHLL")->GetStaticField(0x15420);
		}

		// static const ::System::Object FMBEAMEALGF; // 0x0
		// static const ::System::Object IHAFPOIEINF; // 0x0
		// static const ::System::Object FHNEHGCHGDO; // 0x0
		// static const ::System::Object FAFEHOBBCHF; // 0x0
		// static const ::System::Object OIFLIDHFDOF; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FBNGHMHHHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBNGHMHHHLL*))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FBNGHMHHHLL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FBNGHMHHHLL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FBNGHMHHHLL*>*(*)())((::PBYTE)hIl2Cpp + FBNGHMHHHLL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FBNGHMHHHLL* Clone()
		{
			return ((::FBNGHMHHHLL*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIONJNOOEMD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_JIONJNOOEMD_OFFSET))(this);
		}

		::System::Void MMFNJHMEMLG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_MMFNJHMEMLG_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HDLCCJJBGAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_HDLCCJJBGAO_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MGBHKCMHDOK*>* JJJILECABMG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MGBHKCMHDOK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_JJJILECABMG_OFFSET))(this);
		}

		::System::UInt32 CEOPAIKKEKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_CEOPAIKKEKK_OFFSET))(this);
		}

		::System::Void BGJEAMKPJBH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_BGJEAMKPJBH_OFFSET))(this, a1);
		}

		::System::UInt32 EGKLFHBCGCB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_EGKLFHBCGCB_OFFSET))(this);
		}

		::System::Void ODCGOFNBLDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_ODCGOFNBLDI_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FBNGHMHHHLL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FBNGHMHHHLL*))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FBNGHMHHHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FBNGHMHHHLL*))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FBNGHMHHHLL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
