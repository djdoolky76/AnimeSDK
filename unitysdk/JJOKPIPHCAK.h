#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJOKPIPHCAK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JJOKPIPHCAK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FA935A0)
#define JJOKPIPHCAK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA93800)
#define JJOKPIPHCAK_CLONE_OFFSET UNITYSDK_OFFSET(0x1FA931A0)
#define JJOKPIPHCAK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FA93110)
#define JJOKPIPHCAK_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA930C0)
#define JJOKPIPHCAK_DOMNIAGBEJF_OFFSET UNITYSDK_OFFSET(0x1FA931D0)
#define JJOKPIPHCAK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FA932D0)
#define JJOKPIPHCAK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FA931E0)
#define JJOKPIPHCAK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FA933C0)
#define JJOKPIPHCAK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FA93080)
#define JJOKPIPHCAK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FA93660)
#define JJOKPIPHCAK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FA93610)
#define JJOKPIPHCAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FA930B0)
#define JJOKPIPHCAK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FA934C0)
#define JJOKPIPHCAK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FA93520)

inline static constexpr unsigned int JJOKPIPHCAK_TypeDefinitionIndex = 35490;

	class JJOKPIPHCAK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EFHMOIHGIIL; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_IMLLHKKIENC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "JJOKPIPHCAK")->GetStaticField(0x4FE40);
		}

		static ::Google::Protobuf::MessageParser_1<::JJOKPIPHCAK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JJOKPIPHCAK*>**)UnitySDK::FromName("", "JJOKPIPHCAK")->GetStaticField(0x4FE48);
		}

		// static const ::System::Object OCFCIANNKKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JJOKPIPHCAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJOKPIPHCAK*))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJOKPIPHCAK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JJOKPIPHCAK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JJOKPIPHCAK*>*(*)())((::PBYTE)hIl2Cpp + JJOKPIPHCAK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JJOKPIPHCAK* Clone()
		{
			return ((::JJOKPIPHCAK*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DOMNIAGBEJF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_DOMNIAGBEJF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JJOKPIPHCAK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJOKPIPHCAK*))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JJOKPIPHCAK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJOKPIPHCAK*))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JJOKPIPHCAK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
