#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJJPGIGPDIA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CJJPGIGPDIA_AMMGPMPLPGK_OFFSET UNITYSDK_OFFSET(0x1E0B4440)
#define CJJPGIGPDIA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0B4810)
#define CJJPGIGPDIA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4A70)
#define CJJPGIGPDIA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0B4410)
#define CJJPGIGPDIA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0B4380)
#define CJJPGIGPDIA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4330)
#define CJJPGIGPDIA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0B4540)
#define CJJPGIGPDIA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0B4450)
#define CJJPGIGPDIA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0B4630)
#define CJJPGIGPDIA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0B42F0)
#define CJJPGIGPDIA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0B48D0)
#define CJJPGIGPDIA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0B4880)
#define CJJPGIGPDIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0B4320)
#define CJJPGIGPDIA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0B4730)
#define CJJPGIGPDIA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0B4790)

inline static constexpr unsigned int CJJPGIGPDIA_TypeDefinitionIndex = 30168;

	class CJJPGIGPDIA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ENAJJOHBOIF; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CJJPGIGPDIA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CJJPGIGPDIA*>**)UnitySDK::FromName("", "CJJPGIGPDIA")->GetStaticField(0x189A0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_GOANGLALJIJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CJJPGIGPDIA")->GetStaticField(0x189A8);
		}

		// static const ::System::Object CNGBPNHLGHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CJJPGIGPDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJJPGIGPDIA*))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJJPGIGPDIA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CJJPGIGPDIA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CJJPGIGPDIA*>*(*)())((::PBYTE)hIl2Cpp + CJJPGIGPDIA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CJJPGIGPDIA* Clone()
		{
			return ((::CJJPGIGPDIA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* AMMGPMPLPGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_AMMGPMPLPGK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CJJPGIGPDIA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CJJPGIGPDIA*))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CJJPGIGPDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CJJPGIGPDIA*))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CJJPGIGPDIA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
