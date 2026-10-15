#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAMCKJLAFCN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NAMCKJLAFCN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAC7140)
#define NAMCKJLAFCN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAC71E0)
#define NAMCKJLAFCN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAC6E30)
#define NAMCKJLAFCN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAC6E00)
#define NAMCKJLAFCN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6DF0)
#define NAMCKJLAFCN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAC6F40)
#define NAMCKJLAFCN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAC6E70)
#define NAMCKJLAFCN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAC70A0)
#define NAMCKJLAFCN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAC6DB0)
#define NAMCKJLAFCN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAC7190)
#define NAMCKJLAFCN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAC7160)
#define NAMCKJLAFCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAC6DE0)
#define NAMCKJLAFCN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAC70D0)
#define NAMCKJLAFCN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAC7130)

inline static constexpr unsigned int NAMCKJLAFCN_TypeDefinitionIndex = 33660;

	class NAMCKJLAFCN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NAMCKJLAFCN")->GetStaticField(0x5C9E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NAMCKJLAFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAMCKJLAFCN*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NAMCKJLAFCN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NAMCKJLAFCN* Clone()
		{
			return ((::NAMCKJLAFCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NAMCKJLAFCN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NAMCKJLAFCN*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NAMCKJLAFCN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NAMCKJLAFCN*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NAMCKJLAFCN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
