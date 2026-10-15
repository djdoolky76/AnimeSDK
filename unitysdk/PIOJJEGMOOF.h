#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIOJJEGMOOF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIOJJEGMOOF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF72760)
#define PIOJJEGMOOF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF72A20)
#define PIOJJEGMOOF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF722E0)
#define PIOJJEGMOOF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF72250)
#define PIOJJEGMOOF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF72200)
#define PIOJJEGMOOF_EJFDOABKDLA_OFFSET UNITYSDK_OFFSET(0x1DF72330)
#define PIOJJEGMOOF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF72460)
#define PIOJJEGMOOF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF72340)
#define PIOJJEGMOOF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF72550)
#define PIOJJEGMOOF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF72190)
#define PIOJJEGMOOF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF72850)
#define PIOJJEGMOOF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF72800)
#define PIOJJEGMOOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF721F0)
#define PIOJJEGMOOF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF72650)
#define PIOJJEGMOOF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF726B0)

inline static constexpr unsigned int PIOJJEGMOOF_TypeDefinitionIndex = 29936;

	class PIOJJEGMOOF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* LMLDLDIGAEA; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIOJJEGMOOF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIOJJEGMOOF*>**)UnitySDK::FromName("", "PIOJJEGMOOF")->GetStaticField(0x45660);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KLNGGILBOPI()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PIOJJEGMOOF")->GetStaticField(0x45668);
		}

		// static const ::System::Object DKLLKICPFOF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIOJJEGMOOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOJJEGMOOF*))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIOJJEGMOOF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIOJJEGMOOF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIOJJEGMOOF*>*(*)())((::PBYTE)hIl2Cpp + PIOJJEGMOOF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIOJJEGMOOF* Clone()
		{
			return ((::PIOJJEGMOOF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EJFDOABKDLA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_EJFDOABKDLA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIOJJEGMOOF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIOJJEGMOOF*))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIOJJEGMOOF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIOJJEGMOOF*))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIOJJEGMOOF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
