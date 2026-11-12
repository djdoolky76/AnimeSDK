#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ENOABFIPHOB;
class IODAFIBPAGM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ENOABFIPHOB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F5D78D0)
#define ENOABFIPHOB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5D7BB0)
#define ENOABFIPHOB_CLONE_OFFSET UNITYSDK_OFFSET(0x1F5D74B0)
#define ENOABFIPHOB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F5D7420)
#define ENOABFIPHOB_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5D73E0)
#define ENOABFIPHOB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F5D7630)
#define ENOABFIPHOB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F5D74F0)
#define ENOABFIPHOB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F5D7750)
#define ENOABFIPHOB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F5D73A0)
#define ENOABFIPHOB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F5D7A10)
#define ENOABFIPHOB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F5D7970)
#define ENOABFIPHOB_NEMDIMKMKCK_OFFSET UNITYSDK_OFFSET(0x1F5D74E0)
#define ENOABFIPHOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F5D73D0)
#define ENOABFIPHOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F5D77C0)
#define ENOABFIPHOB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F5D7820)

inline static constexpr unsigned int ENOABFIPHOB_TypeDefinitionIndex = 26791;

	class ENOABFIPHOB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NNFMIDOBAGL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>** StaticGet_NBEPGHJJGKC()
		{
			return (::Google::Protobuf::FieldCodec_1<::IODAFIBPAGM*>**)UnitySDK::FromName("", "ENOABFIPHOB")->GetStaticField(0x50910);
		}

		static ::Google::Protobuf::MessageParser_1<::ENOABFIPHOB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ENOABFIPHOB*>**)UnitySDK::FromName("", "ENOABFIPHOB")->GetStaticField(0x50918);
		}

		// static const ::System::Object CPPBNJLABGE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ENOABFIPHOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENOABFIPHOB*))((::PBYTE)hIl2Cpp + ENOABFIPHOB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ENOABFIPHOB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ENOABFIPHOB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ENOABFIPHOB*>*(*)())((::PBYTE)hIl2Cpp + ENOABFIPHOB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ENOABFIPHOB* Clone()
		{
			return ((::ENOABFIPHOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>* NEMDIMKMKCK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::IODAFIBPAGM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_NEMDIMKMKCK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ENOABFIPHOB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ENOABFIPHOB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENOABFIPHOB*))((::PBYTE)hIl2Cpp + ENOABFIPHOB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ENOABFIPHOB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ENOABFIPHOB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ENOABFIPHOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENOABFIPHOB*))((::PBYTE)hIl2Cpp + ENOABFIPHOB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ENOABFIPHOB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
