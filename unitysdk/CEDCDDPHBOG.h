#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEDCDDPHBOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CEDCDDPHBOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204C6930)
#define CEDCDDPHBOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x204C69D0)
#define CEDCDDPHBOG_CLONE_OFFSET UNITYSDK_OFFSET(0x204C6620)
#define CEDCDDPHBOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204C65F0)
#define CEDCDDPHBOG_CTOR_OFFSET UNITYSDK_OFFSET(0x204C65E0)
#define CEDCDDPHBOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204C6730)
#define CEDCDDPHBOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x204C6660)
#define CEDCDDPHBOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204C6890)
#define CEDCDDPHBOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204C65A0)
#define CEDCDDPHBOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204C6980)
#define CEDCDDPHBOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204C6950)
#define CEDCDDPHBOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204C65D0)
#define CEDCDDPHBOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204C68C0)
#define CEDCDDPHBOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x204C6920)

inline static constexpr unsigned int CEDCDDPHBOG_TypeDefinitionIndex = 33867;

	class CEDCDDPHBOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::CEDCDDPHBOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CEDCDDPHBOG*>**)UnitySDK::FromName("", "CEDCDDPHBOG")->GetStaticField(0x62980);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CEDCDDPHBOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEDCDDPHBOG*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CEDCDDPHBOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CEDCDDPHBOG*>*(*)())((::PBYTE)hIl2Cpp + CEDCDDPHBOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CEDCDDPHBOG* Clone()
		{
			return ((::CEDCDDPHBOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CEDCDDPHBOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CEDCDDPHBOG*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CEDCDDPHBOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CEDCDDPHBOG*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CEDCDDPHBOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
