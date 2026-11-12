#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FOCOJIDPAGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FOCOJIDPAGO_ADONKDFHKBB_OFFSET UNITYSDK_OFFSET(0x1F6E3CE0)
#define FOCOJIDPAGO_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1F6E3CB0)
#define FOCOJIDPAGO_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1F6E3CA0)
#define FOCOJIDPAGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6E4150)
#define FOCOJIDPAGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6E4440)
#define FOCOJIDPAGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6E3C50)
#define FOCOJIDPAGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6E3BC0)
#define FOCOJIDPAGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6E3B70)
#define FOCOJIDPAGO_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1F6E3CD0)
#define FOCOJIDPAGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6E3D90)
#define FOCOJIDPAGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6E3CF0)
#define FOCOJIDPAGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6E3E90)
#define FOCOJIDPAGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6E3B00)
#define FOCOJIDPAGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6E4330)
#define FOCOJIDPAGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6E42D0)
#define FOCOJIDPAGO_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1F6E3CC0)
#define FOCOJIDPAGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6E3B60)
#define FOCOJIDPAGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6E3F90)
#define FOCOJIDPAGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6E3FF0)

inline static constexpr unsigned int FOCOJIDPAGO_TypeDefinitionIndex = 30206;

	class FOCOJIDPAGO : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FDJMHALCAMG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::FOCOJIDPAGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FOCOJIDPAGO*>**)UnitySDK::FromName("", "FOCOJIDPAGO")->GetStaticField(0x4FE80);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CIHLCECLEHB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "FOCOJIDPAGO")->GetStaticField(0x4FE88);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object MAKPBLFEMOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FOCOJIDPAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOCOJIDPAGO*))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOCOJIDPAGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FOCOJIDPAGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FOCOJIDPAGO*>*(*)())((::PBYTE)hIl2Cpp + FOCOJIDPAGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FOCOJIDPAGO* Clone()
		{
			return ((::FOCOJIDPAGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ADONKDFHKBB()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_ADONKDFHKBB_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FOCOJIDPAGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOCOJIDPAGO*))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FOCOJIDPAGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FOCOJIDPAGO*))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FOCOJIDPAGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
