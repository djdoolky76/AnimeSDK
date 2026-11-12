#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPGOPLALEJG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IPGOPLALEJG_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1F9EB7E0)
#define IPGOPLALEJG_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1F9EB7D0)
#define IPGOPLALEJG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F9EBD20)
#define IPGOPLALEJG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9EC0A0)
#define IPGOPLALEJG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F9EB780)
#define IPGOPLALEJG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F9EB6E0)
#define IPGOPLALEJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9EB690)
#define IPGOPLALEJG_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1F9EB810)
#define IPGOPLALEJG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F9EB8F0)
#define IPGOPLALEJG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F9EB840)
#define IPGOPLALEJG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F9EBA00)
#define IPGOPLALEJG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F9EB620)
#define IPGOPLALEJG_KBMJEFBPOBA_OFFSET UNITYSDK_OFFSET(0x1F9EB820)
#define IPGOPLALEJG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F9EBF80)
#define IPGOPLALEJG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F9EBF20)
#define IPGOPLALEJG_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1F9EB800)
#define IPGOPLALEJG_MOOAEFMHGBJ_OFFSET UNITYSDK_OFFSET(0x1F9EB830)
#define IPGOPLALEJG_OEFPAKAEBFK_OFFSET UNITYSDK_OFFSET(0x1F9EB7F0)
#define IPGOPLALEJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F9EB680)
#define IPGOPLALEJG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F9EBB00)
#define IPGOPLALEJG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F9EBB60)

inline static constexpr unsigned int IPGOPLALEJG_TypeDefinitionIndex = 30238;

	class IPGOPLALEJG : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ILCJCOLPGAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 GCLLNHNCIAF; // 0x24
		::System::UInt32 ODCKBAEKGJG; // 0x28
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BFJFFFPIGAK()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "IPGOPLALEJG")->GetStaticField(0x59450);
		}

		static ::Google::Protobuf::MessageParser_1<::IPGOPLALEJG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IPGOPLALEJG*>**)UnitySDK::FromName("", "IPGOPLALEJG")->GetStaticField(0x59458);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object OCNHOAACJHA; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object BIBNMLJONNJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IPGOPLALEJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGOPLALEJG*))((::PBYTE)hIl2Cpp + IPGOPLALEJG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPGOPLALEJG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IPGOPLALEJG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IPGOPLALEJG*>*(*)())((::PBYTE)hIl2Cpp + IPGOPLALEJG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IPGOPLALEJG* Clone()
		{
			return ((::IPGOPLALEJG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPGOPLALEJG_AFJGHICACON_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OEFPAKAEBFK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_OEFPAKAEBFK_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPGOPLALEJG_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::UInt32 KBMJEFBPOBA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_KBMJEFBPOBA_OFFSET))(this);
		}

		::System::Void MOOAEFMHGBJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IPGOPLALEJG_MOOAEFMHGBJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IPGOPLALEJG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IPGOPLALEJG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IPGOPLALEJG*))((::PBYTE)hIl2Cpp + IPGOPLALEJG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IPGOPLALEJG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPGOPLALEJG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IPGOPLALEJG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IPGOPLALEJG*))((::PBYTE)hIl2Cpp + IPGOPLALEJG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IPGOPLALEJG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
