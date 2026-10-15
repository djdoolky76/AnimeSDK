#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEFPOLFCOO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEEFPOLFCOO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E716460)
#define JEEFPOLFCOO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E716500)
#define JEEFPOLFCOO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E716150)
#define JEEFPOLFCOO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E716120)
#define JEEFPOLFCOO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E716110)
#define JEEFPOLFCOO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E716260)
#define JEEFPOLFCOO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E716190)
#define JEEFPOLFCOO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7163C0)
#define JEEFPOLFCOO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7160D0)
#define JEEFPOLFCOO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7164B0)
#define JEEFPOLFCOO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E716480)
#define JEEFPOLFCOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E716100)
#define JEEFPOLFCOO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7163F0)
#define JEEFPOLFCOO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E716450)

inline static constexpr unsigned int JEEFPOLFCOO_TypeDefinitionIndex = 26728;

	class JEEFPOLFCOO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEEFPOLFCOO")->GetStaticField(0x5E8B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEEFPOLFCOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEEFPOLFCOO*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEEFPOLFCOO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEEFPOLFCOO* Clone()
		{
			return ((::JEEFPOLFCOO*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEEFPOLFCOO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEEFPOLFCOO*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEEFPOLFCOO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEEFPOLFCOO*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEEFPOLFCOO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
