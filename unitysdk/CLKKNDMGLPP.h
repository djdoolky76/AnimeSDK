#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLKKNDMGLPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CLKKNDMGLPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F3F1780)
#define CLKKNDMGLPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3F1A40)
#define CLKKNDMGLPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F3F1300)
#define CLKKNDMGLPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F3F1270)
#define CLKKNDMGLPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3F1220)
#define CLKKNDMGLPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F3F1480)
#define CLKKNDMGLPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F3F1360)
#define CLKKNDMGLPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F3F1570)
#define CLKKNDMGLPP_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x1F3F1350)
#define CLKKNDMGLPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F3F11B0)
#define CLKKNDMGLPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F3F1870)
#define CLKKNDMGLPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F3F1820)
#define CLKKNDMGLPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F3F1210)
#define CLKKNDMGLPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F3F1670)
#define CLKKNDMGLPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F3F16D0)

inline static constexpr unsigned int CLKKNDMGLPP_TypeDefinitionIndex = 29752;

	class CLKKNDMGLPP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "CLKKNDMGLPP")->GetStaticField(0x183A0);
		}

		static ::Google::Protobuf::MessageParser_1<::CLKKNDMGLPP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CLKKNDMGLPP*>**)UnitySDK::FromName("", "CLKKNDMGLPP")->GetStaticField(0x183A8);
		}

		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CLKKNDMGLPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLKKNDMGLPP*))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLKKNDMGLPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CLKKNDMGLPP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CLKKNDMGLPP*>*(*)())((::PBYTE)hIl2Cpp + CLKKNDMGLPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CLKKNDMGLPP* Clone()
		{
			return ((::CLKKNDMGLPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CLKKNDMGLPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CLKKNDMGLPP*))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CLKKNDMGLPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CLKKNDMGLPP*))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CLKKNDMGLPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
