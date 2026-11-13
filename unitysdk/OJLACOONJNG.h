#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGJKAIPLMCA;
class OJLACOONJNG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJLACOONJNG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6A4C20)
#define OJLACOONJNG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A4F20)
#define OJLACOONJNG_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6A47A0)
#define OJLACOONJNG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A46F0)
#define OJLACOONJNG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A46A0)
#define OJLACOONJNG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6A4980)
#define OJLACOONJNG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6A4800)
#define OJLACOONJNG_GEFGNFEPLNL_OFFSET UNITYSDK_OFFSET(0x1F6A47F0)
#define OJLACOONJNG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6A4AA0)
#define OJLACOONJNG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6A4630)
#define OJLACOONJNG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6A4D60)
#define OJLACOONJNG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6A4CC0)
#define OJLACOONJNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6A4690)
#define OJLACOONJNG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6A4B10)
#define OJLACOONJNG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6A4B70)

inline static constexpr unsigned int OJLACOONJNG_TypeDefinitionIndex = 33390;

	class OJLACOONJNG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::JGJKAIPLMCA*>* CFKMLMAGPBB; // 0x18
		static ::Google::Protobuf::MessageParser_1<::OJLACOONJNG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OJLACOONJNG*>**)UnitySDK::FromName("", "OJLACOONJNG")->GetStaticField(0x1C4C0);
		}

		static ::Google::Protobuf::FieldCodec_1<::JGJKAIPLMCA*>** StaticGet_FJMFEJNJBIN()
		{
			return (::Google::Protobuf::FieldCodec_1<::JGJKAIPLMCA*>**)UnitySDK::FromName("", "OJLACOONJNG")->GetStaticField(0x1C4C8);
		}

		// static const ::System::Object IONKLNBMEGN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJLACOONJNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLACOONJNG*))((::PBYTE)hIl2Cpp + OJLACOONJNG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJLACOONJNG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OJLACOONJNG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OJLACOONJNG*>*(*)())((::PBYTE)hIl2Cpp + OJLACOONJNG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJLACOONJNG* Clone()
		{
			return ((::OJLACOONJNG*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::JGJKAIPLMCA*>* GEFGNFEPLNL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::JGJKAIPLMCA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_GEFGNFEPLNL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJLACOONJNG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJLACOONJNG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJLACOONJNG*))((::PBYTE)hIl2Cpp + OJLACOONJNG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJLACOONJNG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJLACOONJNG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJLACOONJNG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJLACOONJNG*))((::PBYTE)hIl2Cpp + OJLACOONJNG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJLACOONJNG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
