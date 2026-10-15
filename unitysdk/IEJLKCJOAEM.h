#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEJLKCJOAEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IEJLKCJOAEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E63C360)
#define IEJLKCJOAEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63C400)
#define IEJLKCJOAEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E63C050)
#define IEJLKCJOAEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E63C020)
#define IEJLKCJOAEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63C010)
#define IEJLKCJOAEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E63C160)
#define IEJLKCJOAEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E63C090)
#define IEJLKCJOAEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E63C2C0)
#define IEJLKCJOAEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E63BFD0)
#define IEJLKCJOAEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E63C3B0)
#define IEJLKCJOAEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E63C380)
#define IEJLKCJOAEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E63C000)
#define IEJLKCJOAEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E63C2F0)
#define IEJLKCJOAEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E63C350)

	class IEJLKCJOAEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IEJLKCJOAEM")->GetStaticField(0x48C60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IEJLKCJOAEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEJLKCJOAEM*))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJLKCJOAEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IEJLKCJOAEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IEJLKCJOAEM* Clone()
		{
			return ((::IEJLKCJOAEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IEJLKCJOAEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IEJLKCJOAEM*))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IEJLKCJOAEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IEJLKCJOAEM*))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IEJLKCJOAEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
