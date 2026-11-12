#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLNJKGOGKKL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GLNJKGOGKKL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F7B9EC0)
#define GLNJKGOGKKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7BA1C0)
#define GLNJKGOGKKL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F7B9A40)
#define GLNJKGOGKKL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F7B99B0)
#define GLNJKGOGKKL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7B9970)
#define GLNJKGOGKKL_EDCAIEEGNML_OFFSET UNITYSDK_OFFSET(0x1F7B9A90)
#define GLNJKGOGKKL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F7B9C20)
#define GLNJKGOGKKL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F7B9AA0)
#define GLNJKGOGKKL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F7B9D40)
#define GLNJKGOGKKL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F7B9900)
#define GLNJKGOGKKL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F7BA000)
#define GLNJKGOGKKL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F7B9F60)
#define GLNJKGOGKKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F7B9960)
#define GLNJKGOGKKL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F7B9DB0)
#define GLNJKGOGKKL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F7B9E10)

inline static constexpr unsigned int GLNJKGOGKKL_TypeDefinitionIndex = 33070;

	class GLNJKGOGKKL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* FLAMEAGFLPG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>**)UnitySDK::FromName("", "GLNJKGOGKKL")->GetStaticField(0x16D50);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_LOLKEKDMBHC()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("", "GLNJKGOGKKL")->GetStaticField(0x16D58);
		}

		// static const ::System::Object DCLKJKLKOGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GLNJKGOGKKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GLNJKGOGKKL*>*(*)())((::PBYTE)hIl2Cpp + GLNJKGOGKKL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GLNJKGOGKKL* Clone()
		{
			return ((::GLNJKGOGKKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* EDCAIEEGNML()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_EDCAIEEGNML_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GLNJKGOGKKL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GLNJKGOGKKL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GLNJKGOGKKL*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GLNJKGOGKKL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
