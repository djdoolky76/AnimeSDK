#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JNKMLCAKGND;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JNKMLCAKGND_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20000A40)
#define JNKMLCAKGND_CCTOR_OFFSET UNITYSDK_OFFSET(0x20000D00)
#define JNKMLCAKGND_CLONE_OFFSET UNITYSDK_OFFSET(0x200005C0)
#define JNKMLCAKGND_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20000530)
#define JNKMLCAKGND_CTOR_OFFSET UNITYSDK_OFFSET(0x200004E0)
#define JNKMLCAKGND_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20000740)
#define JNKMLCAKGND_EQUALS_OFFSET UNITYSDK_OFFSET(0x20000620)
#define JNKMLCAKGND_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20000830)
#define JNKMLCAKGND_JDFFEJFPHBJ_OFFSET UNITYSDK_OFFSET(0x20000610)
#define JNKMLCAKGND_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20000470)
#define JNKMLCAKGND_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20000B30)
#define JNKMLCAKGND_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20000AE0)
#define JNKMLCAKGND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x200004D0)
#define JNKMLCAKGND_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20000930)
#define JNKMLCAKGND_WRITETO_OFFSET UNITYSDK_OFFSET(0x20000990)

inline static constexpr unsigned int JNKMLCAKGND_TypeDefinitionIndex = 30372;

	class JNKMLCAKGND : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JBEPELLPAJC; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_OKDIKGNLFBH()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JNKMLCAKGND")->GetStaticField(0x671E0);
		}

		static ::Google::Protobuf::MessageParser_1<::JNKMLCAKGND*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JNKMLCAKGND*>**)UnitySDK::FromName("", "JNKMLCAKGND")->GetStaticField(0x671E8);
		}

		// static const ::System::Object PDFFAKHMEPI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JNKMLCAKGND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNKMLCAKGND*))((::PBYTE)hIl2Cpp + JNKMLCAKGND_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JNKMLCAKGND_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JNKMLCAKGND*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JNKMLCAKGND*>*(*)())((::PBYTE)hIl2Cpp + JNKMLCAKGND_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JNKMLCAKGND* Clone()
		{
			return ((::JNKMLCAKGND*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* JDFFEJFPHBJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_JDFFEJFPHBJ_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JNKMLCAKGND_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JNKMLCAKGND* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JNKMLCAKGND*))((::PBYTE)hIl2Cpp + JNKMLCAKGND_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JNKMLCAKGND_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNKMLCAKGND_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JNKMLCAKGND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JNKMLCAKGND*))((::PBYTE)hIl2Cpp + JNKMLCAKGND_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JNKMLCAKGND_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
