#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJEFBHPAPND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJEFBHPAPND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2B4460)
#define EJEFBHPAPND_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2B4720)
#define EJEFBHPAPND_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2B3FE0)
#define EJEFBHPAPND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2B3F50)
#define EJEFBHPAPND_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3F00)
#define EJEFBHPAPND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2B4160)
#define EJEFBHPAPND_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2B4040)
#define EJEFBHPAPND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2B4250)
#define EJEFBHPAPND_JINLEONNCEN_OFFSET UNITYSDK_OFFSET(0x1E2B4030)
#define EJEFBHPAPND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2B3E90)
#define EJEFBHPAPND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2B4550)
#define EJEFBHPAPND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2B4500)
#define EJEFBHPAPND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2B3EF0)
#define EJEFBHPAPND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2B4350)
#define EJEFBHPAPND_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2B43B0)

inline static constexpr unsigned int EJEFBHPAPND_TypeDefinitionIndex = 25220;

	class EJEFBHPAPND : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KHHJMABBLAH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EJEFBHPAPND")->GetStaticField(0x4B360);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_JPAEBNKOHFA()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EJEFBHPAPND")->GetStaticField(0x4B368);
		}

		// static const ::System::Object DGOKAKPOELJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJEFBHPAPND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJEFBHPAPND*))((::PBYTE)hIl2Cpp + EJEFBHPAPND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJEFBHPAPND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EJEFBHPAPND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJEFBHPAPND* Clone()
		{
			return ((::EJEFBHPAPND*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JINLEONNCEN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_JINLEONNCEN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJEFBHPAPND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJEFBHPAPND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJEFBHPAPND*))((::PBYTE)hIl2Cpp + EJEFBHPAPND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJEFBHPAPND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJEFBHPAPND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJEFBHPAPND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJEFBHPAPND*))((::PBYTE)hIl2Cpp + EJEFBHPAPND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJEFBHPAPND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
