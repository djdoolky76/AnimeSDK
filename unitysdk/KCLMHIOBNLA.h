#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KCLMHIOBNLA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KCLMHIOBNLA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x203C2DB0)
#define KCLMHIOBNLA_CCTOR_OFFSET UNITYSDK_OFFSET(0x203C3070)
#define KCLMHIOBNLA_CLONE_OFFSET UNITYSDK_OFFSET(0x203C2930)
#define KCLMHIOBNLA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x203C28A0)
#define KCLMHIOBNLA_CTOR_OFFSET UNITYSDK_OFFSET(0x203C2850)
#define KCLMHIOBNLA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x203C2AB0)
#define KCLMHIOBNLA_EQUALS_OFFSET UNITYSDK_OFFSET(0x203C2990)
#define KCLMHIOBNLA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x203C2BA0)
#define KCLMHIOBNLA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x203C27E0)
#define KCLMHIOBNLA_MBIPHENOPKN_OFFSET UNITYSDK_OFFSET(0x203C2980)
#define KCLMHIOBNLA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203C2EA0)
#define KCLMHIOBNLA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203C2E50)
#define KCLMHIOBNLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x203C2840)
#define KCLMHIOBNLA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x203C2CA0)
#define KCLMHIOBNLA_WRITETO_OFFSET UNITYSDK_OFFSET(0x203C2D00)

inline static constexpr unsigned int KCLMHIOBNLA_TypeDefinitionIndex = 29963;

	class KCLMHIOBNLA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HLBGALBJJLF; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BADELBENDHJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KCLMHIOBNLA")->GetStaticField(0x6A9B0);
		}

		static ::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>**)UnitySDK::FromName("", "KCLMHIOBNLA")->GetStaticField(0x6A9B8);
		}

		// static const ::System::Object PFDHCKKFPOG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KCLMHIOBNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLMHIOBNLA*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KCLMHIOBNLA*>*(*)())((::PBYTE)hIl2Cpp + KCLMHIOBNLA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KCLMHIOBNLA* Clone()
		{
			return ((::KCLMHIOBNLA*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MBIPHENOPKN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_MBIPHENOPKN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KCLMHIOBNLA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KCLMHIOBNLA*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KCLMHIOBNLA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KCLMHIOBNLA*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KCLMHIOBNLA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
