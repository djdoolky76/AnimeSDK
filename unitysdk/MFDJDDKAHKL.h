#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MFDJDDKAHKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MFDJDDKAHKL_AIFLNGGOLIK_OFFSET UNITYSDK_OFFSET(0x1FD62300)
#define MFDJDDKAHKL_BNJAOBOAKKJ_OFFSET UNITYSDK_OFFSET(0x1FD62330)
#define MFDJDDKAHKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD62860)
#define MFDJDDKAHKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD62C70)
#define MFDJDDKAHKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD622B0)
#define MFDJDDKAHKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD621B0)
#define MFDJDDKAHKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD62130)
#define MFDJDDKAHKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD62370)
#define MFDJDDKAHKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD62340)
#define MFDJDDKAHKL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1FD622F0)
#define MFDJDDKAHKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD624D0)
#define MFDJDDKAHKL_INAJJPBHMAN_OFFSET UNITYSDK_OFFSET(0x1FD62310)
#define MFDJDDKAHKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD620F0)
#define MFDJDDKAHKL_LAIJONECJHE_OFFSET UNITYSDK_OFFSET(0x1FD62320)
#define MFDJDDKAHKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD62B40)
#define MFDJDDKAHKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD62A70)
#define MFDJDDKAHKL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1FD622E0)
#define MFDJDDKAHKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD62120)
#define MFDJDDKAHKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD62640)
#define MFDJDDKAHKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD626A0)

inline static constexpr unsigned int MFDJDDKAHKL_TypeDefinitionIndex = 28788;

	class MFDJDDKAHKL : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* BAKMJFEAFLM; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LABKAMOFEIP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		::System::Byte _padding0[0x4];
		::System::Int64 JNBFEPBPFBP; // 0x30
		static ::Google::Protobuf::MessageParser_1<::MFDJDDKAHKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MFDJDDKAHKL*>**)UnitySDK::FromName("", "MFDJDDKAHKL")->GetStaticField(0x52DF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BDKALIMIDLD()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MFDJDDKAHKL")->GetStaticField(0x52DF8);
		}

		static ::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>** StaticGet_NFDGIKACNAN()
		{
			return (::Google::Protobuf::FieldCodec_1<::Proto::ItemList*>**)UnitySDK::FromName("", "MFDJDDKAHKL")->GetStaticField(0x52E00);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CEPJFBBCEPP; // 0x0
		// static const ::System::Object GGLPDNADOJM; // 0x0
		// static const ::System::Object PEBHOADGIJJ; // 0x0
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

		static ::Google::Protobuf::MessageParser_1<::MFDJDDKAHKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MFDJDDKAHKL*>*(*)())((::PBYTE)hIl2Cpp + MFDJDDKAHKL_JJGHOBBFNJD_OFFSET))();
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

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>* AIFLNGGOLIK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::ItemList*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDJDDKAHKL_AIFLNGGOLIK_OFFSET))(this);
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
