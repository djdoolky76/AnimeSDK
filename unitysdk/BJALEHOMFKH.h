#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJALEHOMFKH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BJALEHOMFKH_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1DDD8770)
#define BJALEHOMFKH_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1DDD8760)
#define BJALEHOMFKH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DDD8BE0)
#define BJALEHOMFKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDD8ED0)
#define BJALEHOMFKH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DDD86E0)
#define BJALEHOMFKH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DDD8650)
#define BJALEHOMFKH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDD8600)
#define BJALEHOMFKH_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1DDD8750)
#define BJALEHOMFKH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DDD8820)
#define BJALEHOMFKH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DDD8780)
#define BJALEHOMFKH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DDD8920)
#define BJALEHOMFKH_HDLCCJJBGAO_OFFSET UNITYSDK_OFFSET(0x1DDD8730)
#define BJALEHOMFKH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DDD8590)
#define BJALEHOMFKH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DDD8DE0)
#define BJALEHOMFKH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DDD8D80)
#define BJALEHOMFKH_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1DDD8740)
#define BJALEHOMFKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DDD85F0)
#define BJALEHOMFKH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DDD8A20)
#define BJALEHOMFKH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DDD8A80)

inline static constexpr unsigned int BJALEHOMFKH_TypeDefinitionIndex = 29494;

	class BJALEHOMFKH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JEOKCOLONMO; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_MJJMBOJKJDE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "BJALEHOMFKH")->GetStaticField(0x57C00);
		}

		static ::Google::Protobuf::MessageParser_1<::BJALEHOMFKH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BJALEHOMFKH*>**)UnitySDK::FromName("", "BJALEHOMFKH")->GetStaticField(0x57C08);
		}

		// static const ::System::Object IHAFPOIEINF; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object BDHJLOLMAKK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BJALEHOMFKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJALEHOMFKH*))((::PBYTE)hIl2Cpp + BJALEHOMFKH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJALEHOMFKH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BJALEHOMFKH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BJALEHOMFKH*>*(*)())((::PBYTE)hIl2Cpp + BJALEHOMFKH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BJALEHOMFKH* Clone()
		{
			return ((::BJALEHOMFKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HDLCCJJBGAO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_HDLCCJJBGAO_OFFSET))(this);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJALEHOMFKH_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BJALEHOMFKH_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BJALEHOMFKH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BJALEHOMFKH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BJALEHOMFKH*))((::PBYTE)hIl2Cpp + BJALEHOMFKH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BJALEHOMFKH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BJALEHOMFKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BJALEHOMFKH*))((::PBYTE)hIl2Cpp + BJALEHOMFKH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BJALEHOMFKH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
