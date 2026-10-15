#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFDJDDKAHKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MFDJDDKAHKL_AIFLNGGOLIK_OFFSET UNITYSDK_OFFSET(0x1EA176C0)
#define MFDJDDKAHKL_BNJAOBOAKKJ_OFFSET UNITYSDK_OFFSET(0x1EA176B0)
#define MFDJDDKAHKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA17BE0)
#define MFDJDDKAHKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA18010)
#define MFDJDDKAHKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA17640)
#define MFDJDDKAHKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA17540)
#define MFDJDDKAHKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA174C0)
#define MFDJDDKAHKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA17700)
#define MFDJDDKAHKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA176D0)
#define MFDJDDKAHKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA17680)
#define MFDJDDKAHKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA17860)
#define MFDJDDKAHKL_INAJJPBHMAN_OFFSET UNITYSDK_OFFSET(0x1EA17690)
#define MFDJDDKAHKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA17480)
#define MFDJDDKAHKL_LAIJONECJHE_OFFSET UNITYSDK_OFFSET(0x1EA176A0)
#define MFDJDDKAHKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA17ED0)
#define MFDJDDKAHKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA17E00)
#define MFDJDDKAHKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA17670)
#define MFDJDDKAHKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA174B0)
#define MFDJDDKAHKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA179C0)
#define MFDJDDKAHKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA17A20)

	class MFDJDDKAHKL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LABKAMOFEIP; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* BAKMJFEAFLM; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 JNBFEPBPFBP; // 0x30
		static ::Google::Protobuf::FieldCodec** StaticGet_NFDGIKACNAN()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MFDJDDKAHKL")->GetStaticField(0x4C250);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_BDKALIMIDLD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MFDJDDKAHKL")->GetStaticField(0x4C258);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MFDJDDKAHKL")->GetStaticField(0x4C260);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GGLPDNADOJM; // 0x0
		// static const ::System::Object PEBHOADGIJJ; // 0x0
		// static const ::System::Object CEPJFBBCEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MFDJDDKAHKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDJDDKAHKL*))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MFDJDDKAHKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MFDJDDKAHKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MFDJDDKAHKL* Clone()
		{
			return ((::MFDJDDKAHKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* INAJJPBHMAN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_INAJJPBHMAN_OFFSET))(this);
		}

		::System::Int64 LAIJONECJHE()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_LAIJONECJHE_OFFSET))(this);
		}

		::System::Void BNJAOBOAKKJ(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_BNJAOBOAKKJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* AIFLNGGOLIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_AIFLNGGOLIK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MFDJDDKAHKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MFDJDDKAHKL*))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MFDJDDKAHKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFDJDDKAHKL*))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
