#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IMEFDMEGEON;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IMEFDMEGEON_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6B6020)
#define IMEFDMEGEON_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B60C0)
#define IMEFDMEGEON_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6B5D10)
#define IMEFDMEGEON_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6B5CE0)
#define IMEFDMEGEON_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5CD0)
#define IMEFDMEGEON_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6B5E20)
#define IMEFDMEGEON_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6B5D50)
#define IMEFDMEGEON_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6B5F80)
#define IMEFDMEGEON_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6B5C90)
#define IMEFDMEGEON_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6B6070)
#define IMEFDMEGEON_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6B6040)
#define IMEFDMEGEON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6B5CC0)
#define IMEFDMEGEON_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6B5FB0)
#define IMEFDMEGEON_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6B6010)

	class IMEFDMEGEON : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IMEFDMEGEON")->GetStaticField(0x57140);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IMEFDMEGEON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMEFDMEGEON*))((::PBYTE)hIl2Cpp + IMEFDMEGEON_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IMEFDMEGEON_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IMEFDMEGEON_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IMEFDMEGEON* Clone()
		{
			return ((::IMEFDMEGEON*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IMEFDMEGEON_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IMEFDMEGEON* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IMEFDMEGEON*))((::PBYTE)hIl2Cpp + IMEFDMEGEON_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IMEFDMEGEON_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEFDMEGEON_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IMEFDMEGEON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IMEFDMEGEON*))((::PBYTE)hIl2Cpp + IMEFDMEGEON_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IMEFDMEGEON_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
