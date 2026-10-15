#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GEIBJKJDOHO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GEIBJKJDOHO_AFJGHICACON_OFFSET UNITYSDK_OFFSET(0x1E42BD10)
#define GEIBJKJDOHO_BODJOHPCDJO_OFFSET UNITYSDK_OFFSET(0x1E42BD00)
#define GEIBJKJDOHO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E42C1C0)
#define GEIBJKJDOHO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E42C480)
#define GEIBJKJDOHO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E42BCB0)
#define GEIBJKJDOHO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E42BC20)
#define GEIBJKJDOHO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E42BBD0)
#define GEIBJKJDOHO_DGDKKNEHAIJ_OFFSET UNITYSDK_OFFSET(0x1E42BD40)
#define GEIBJKJDOHO_EMNEFBFCKDJ_OFFSET UNITYSDK_OFFSET(0x1E42BD30)
#define GEIBJKJDOHO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E42BDF0)
#define GEIBJKJDOHO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E42BD50)
#define GEIBJKJDOHO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E42BEF0)
#define GEIBJKJDOHO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E42BB60)
#define GEIBJKJDOHO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E42C3A0)
#define GEIBJKJDOHO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E42C340)
#define GEIBJKJDOHO_MNBHLAJGKOH_OFFSET UNITYSDK_OFFSET(0x1E42BD20)
#define GEIBJKJDOHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E42BBC0)
#define GEIBJKJDOHO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E42BFF0)
#define GEIBJKJDOHO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E42C050)

inline static constexpr unsigned int GEIBJKJDOHO_TypeDefinitionIndex = 29492;

	class GEIBJKJDOHO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LEPJNFLCIHP; // 0x18
		::System::UInt32 MJIMFDKFGDE; // 0x20
		::System::UInt32 ODCKBAEKGJG; // 0x24
		static ::Google::Protobuf::MessageParser_1<::GEIBJKJDOHO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GEIBJKJDOHO*>**)UnitySDK::FromName("", "GEIBJKJDOHO")->GetStaticField(0x11D20);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_AJCOHOOLCKE()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GEIBJKJDOHO")->GetStaticField(0x11D28);
		}

		// static const ::System::Object BDHJLOLMAKK; // 0x0
		// static const ::System::Object MJJGNBCFCOH; // 0x0
		// static const ::System::Object ILMIAONPGHC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GEIBJKJDOHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEIBJKJDOHO*))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GEIBJKJDOHO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GEIBJKJDOHO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GEIBJKJDOHO*>*(*)())((::PBYTE)hIl2Cpp + GEIBJKJDOHO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GEIBJKJDOHO* Clone()
		{
			return ((::GEIBJKJDOHO*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BODJOHPCDJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_BODJOHPCDJO_OFFSET))(this);
		}

		::System::Void AFJGHICACON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_AFJGHICACON_OFFSET))(this, a1);
		}

		::System::UInt32 MNBHLAJGKOH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_MNBHLAJGKOH_OFFSET))(this);
		}

		::System::Void EMNEFBFCKDJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_EMNEFBFCKDJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DGDKKNEHAIJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_DGDKKNEHAIJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GEIBJKJDOHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GEIBJKJDOHO*))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GEIBJKJDOHO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEIBJKJDOHO*))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GEIBJKJDOHO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
