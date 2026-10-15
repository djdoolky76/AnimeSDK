#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKAKFIMMBAN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MKAKFIMMBAN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA22680)
#define MKAKFIMMBAN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA228E0)
#define MKAKFIMMBAN_CFBHMJGEFJE_OFFSET UNITYSDK_OFFSET(0x1EA222B0)
#define MKAKFIMMBAN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA22280)
#define MKAKFIMMBAN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA221F0)
#define MKAKFIMMBAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA221A0)
#define MKAKFIMMBAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA223B0)
#define MKAKFIMMBAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA222C0)
#define MKAKFIMMBAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA224A0)
#define MKAKFIMMBAN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA22160)
#define MKAKFIMMBAN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA22740)
#define MKAKFIMMBAN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA226F0)
#define MKAKFIMMBAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA22190)
#define MKAKFIMMBAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA225A0)
#define MKAKFIMMBAN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA22600)

inline static constexpr unsigned int MKAKFIMMBAN_TypeDefinitionIndex = 31426;

	class MKAKFIMMBAN : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* FAJOJEOLBHL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MKAKFIMMBAN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MKAKFIMMBAN*>**)UnitySDK::FromName("", "MKAKFIMMBAN")->GetStaticField(0x53CF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_CMBILFBLHHA()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "MKAKFIMMBAN")->GetStaticField(0x53CF8);
		}

		// static const ::System::Object HLBJDPHKNOB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MKAKFIMMBAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKAKFIMMBAN*))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKAKFIMMBAN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MKAKFIMMBAN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MKAKFIMMBAN*>*(*)())((::PBYTE)hIl2Cpp + MKAKFIMMBAN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MKAKFIMMBAN* Clone()
		{
			return ((::MKAKFIMMBAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* CFBHMJGEFJE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_CFBHMJGEFJE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MKAKFIMMBAN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MKAKFIMMBAN*))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MKAKFIMMBAN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MKAKFIMMBAN*))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MKAKFIMMBAN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
