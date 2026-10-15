#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BFGNNODONFI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BFGNNODONFI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA6CF00)
#define BFGNNODONFI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CFA0)
#define BFGNNODONFI_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA6CBA0)
#define BFGNNODONFI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA6CB70)
#define BFGNNODONFI_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CB60)
#define BFGNNODONFI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA6CD00)
#define BFGNNODONFI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA6CC10)
#define BFGNNODONFI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA6CE60)
#define BFGNNODONFI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA6CAF0)
#define BFGNNODONFI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA6CF50)
#define BFGNNODONFI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA6CF20)
#define BFGNNODONFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA6CB50)
#define BFGNNODONFI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA6CE90)
#define BFGNNODONFI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA6CEF0)

	class BFGNNODONFI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BFGNNODONFI")->GetStaticField(0x421B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BFGNNODONFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGNNODONFI*))((::PBYTE)hIl2Cpp + BFGNNODONFI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BFGNNODONFI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BFGNNODONFI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BFGNNODONFI* Clone()
		{
			return ((::BFGNNODONFI*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFGNNODONFI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BFGNNODONFI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BFGNNODONFI*))((::PBYTE)hIl2Cpp + BFGNNODONFI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BFGNNODONFI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BFGNNODONFI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BFGNNODONFI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BFGNNODONFI*))((::PBYTE)hIl2Cpp + BFGNNODONFI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BFGNNODONFI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
