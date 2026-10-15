#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEPHIKELLEA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class OptionalReward; }
namespace System { class Object; }
namespace System { class String; }

#define HEPHIKELLEA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E55EF80)
#define HEPHIKELLEA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E55F280)
#define HEPHIKELLEA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E55EB60)
#define HEPHIKELLEA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E55EAB0)
#define HEPHIKELLEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E55EA60)
#define HEPHIKELLEA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E55ECE0)
#define HEPHIKELLEA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E55EBA0)
#define HEPHIKELLEA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E55EE00)
#define HEPHIKELLEA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E55EA20)
#define HEPHIKELLEA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E55F0C0)
#define HEPHIKELLEA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E55F020)
#define HEPHIKELLEA_OMJILCNDMOH_OFFSET UNITYSDK_OFFSET(0x1E55EB90)
#define HEPHIKELLEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E55EA50)
#define HEPHIKELLEA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E55EE70)
#define HEPHIKELLEA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E55EED0)

inline static constexpr unsigned int HEPHIKELLEA_TypeDefinitionIndex = 26555;

	class HEPHIKELLEA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::Proto::OptionalReward*>* BKOMHPBNKPD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HEPHIKELLEA")->GetStaticField(0x336B0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CIBEFBPGOCA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "HEPHIKELLEA")->GetStaticField(0x336B8);
		}

		// static const ::System::Object AGGCHJFEBPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HEPHIKELLEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEPHIKELLEA*))((::PBYTE)hIl2Cpp + HEPHIKELLEA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEPHIKELLEA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HEPHIKELLEA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HEPHIKELLEA* Clone()
		{
			return ((::HEPHIKELLEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::Proto::OptionalReward*>* OMJILCNDMOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::Proto::OptionalReward*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_OMJILCNDMOH_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HEPHIKELLEA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HEPHIKELLEA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HEPHIKELLEA*))((::PBYTE)hIl2Cpp + HEPHIKELLEA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HEPHIKELLEA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HEPHIKELLEA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HEPHIKELLEA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEPHIKELLEA*))((::PBYTE)hIl2Cpp + HEPHIKELLEA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HEPHIKELLEA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
