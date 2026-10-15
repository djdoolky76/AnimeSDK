#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NGNKIIOHBAI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NGNKIIOHBAI_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1EB15F10)
#define NGNKIIOHBAI_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1EB15F00)
#define NGNKIIOHBAI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB16380)
#define NGNKIIOHBAI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB16680)
#define NGNKIIOHBAI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB15E80)
#define NGNKIIOHBAI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB15DE0)
#define NGNKIIOHBAI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB15D90)
#define NGNKIIOHBAI_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1EB15EE0)
#define NGNKIIOHBAI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB15FC0)
#define NGNKIIOHBAI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB15F20)
#define NGNKIIOHBAI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB160C0)
#define NGNKIIOHBAI_HDLCCJJBGAO_OFFSET UNITYSDK_OFFSET(0x1EB15EF0)
#define NGNKIIOHBAI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB15D20)
#define NGNKIIOHBAI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB16570)
#define NGNKIIOHBAI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB16510)
#define NGNKIIOHBAI_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1EB15ED0)
#define NGNKIIOHBAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB15D80)
#define NGNKIIOHBAI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB161C0)
#define NGNKIIOHBAI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB16220)

inline static constexpr unsigned int NGNKIIOHBAI_TypeDefinitionIndex = 29472;

	class NGNKIIOHBAI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JEOKCOLONMO; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::NGNKIIOHBAI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NGNKIIOHBAI*>**)UnitySDK::FromName("", "NGNKIIOHBAI")->GetStaticField(0x5FD00);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MJJMBOJKJDE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "NGNKIIOHBAI")->GetStaticField(0x5FD08);
		}

		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object IHAFPOIEINF; // 0x0
		// static const ::System::Object BDHJLOLMAKK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NGNKIIOHBAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGNKIIOHBAI*))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NGNKIIOHBAI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NGNKIIOHBAI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NGNKIIOHBAI*>*(*)())((::PBYTE)hIl2Cpp + NGNKIIOHBAI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NGNKIIOHBAI* Clone()
		{
			return ((::NGNKIIOHBAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_CLONE_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HDLCCJJBGAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_HDLCCJJBGAO_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NGNKIIOHBAI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NGNKIIOHBAI*))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NGNKIIOHBAI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGNKIIOHBAI*))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NGNKIIOHBAI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
