#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKIDDEEDII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIKIDDEEDII_AFKAPNLAEBJ_OFFSET UNITYSDK_OFFSET(0x1DF6B090)
#define PIKIDDEEDII_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF6B4C0)
#define PIKIDDEEDII_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF6B780)
#define PIKIDDEEDII_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF6B040)
#define PIKIDDEEDII_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF6AFB0)
#define PIKIDDEEDII_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF6AF60)
#define PIKIDDEEDII_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF6B1C0)
#define PIKIDDEEDII_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF6B0A0)
#define PIKIDDEEDII_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF6B2B0)
#define PIKIDDEEDII_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF6AEF0)
#define PIKIDDEEDII_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF6B5B0)
#define PIKIDDEEDII_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF6B560)
#define PIKIDDEEDII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF6AF50)
#define PIKIDDEEDII_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF6B3B0)
#define PIKIDDEEDII_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF6B410)

inline static constexpr unsigned int PIKIDDEEDII_TypeDefinitionIndex = 28319;

	class PIKIDDEEDII : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LGDNOEBJEEA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIKIDDEEDII*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIKIDDEEDII*>**)UnitySDK::FromName("", "PIKIDDEEDII")->GetStaticField(0x44370);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_LDCPEILKMHB()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PIKIDDEEDII")->GetStaticField(0x44378);
		}

		// static const ::System::Object FAIPIGEGFJA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIKIDDEEDII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKIDDEEDII*))((::PBYTE)hIl2Cpp + PIKIDDEEDII_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKIDDEEDII_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIKIDDEEDII*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIKIDDEEDII*>*(*)())((::PBYTE)hIl2Cpp + PIKIDDEEDII_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIKIDDEEDII* Clone()
		{
			return ((::PIKIDDEEDII*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AFKAPNLAEBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_AFKAPNLAEBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIKIDDEEDII_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIKIDDEEDII* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIKIDDEEDII*))((::PBYTE)hIl2Cpp + PIKIDDEEDII_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIKIDDEEDII_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKIDDEEDII_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIKIDDEEDII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKIDDEEDII*))((::PBYTE)hIl2Cpp + PIKIDDEEDII_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIKIDDEEDII_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
