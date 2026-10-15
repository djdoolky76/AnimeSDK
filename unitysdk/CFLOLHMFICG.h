#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CFLOLHMFICG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CFLOLHMFICG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0A6200)
#define CFLOLHMFICG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0A6420)
#define CFLOLHMFICG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0A5E50)
#define CFLOLHMFICG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0A5E20)
#define CFLOLHMFICG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0A5E10)
#define CFLOLHMFICG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0A5F80)
#define CFLOLHMFICG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0A5EB0)
#define CFLOLHMFICG_GBLDMKDBOIB_OFFSET UNITYSDK_OFFSET(0x1E0A5EA0)
#define CFLOLHMFICG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0A60F0)
#define CFLOLHMFICG_GLPDJFFEILA_OFFSET UNITYSDK_OFFSET(0x1E0A5E90)
#define CFLOLHMFICG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0A5DD0)
#define CFLOLHMFICG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0A62C0)
#define CFLOLHMFICG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0A6290)
#define CFLOLHMFICG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0A5E00)
#define CFLOLHMFICG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0A6120)
#define CFLOLHMFICG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0A6180)

inline static constexpr unsigned int CFLOLHMFICG_TypeDefinitionIndex = 34541;

	class CFLOLHMFICG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KDHBDECBPJK; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CFLOLHMFICG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CFLOLHMFICG*>**)UnitySDK::FromName("", "CFLOLHMFICG")->GetStaticField(0x13460);
		}

		// static const ::System::Object ELFBAKNFEIG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CFLOLHMFICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFLOLHMFICG*))((::PBYTE)hIl2Cpp + CFLOLHMFICG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CFLOLHMFICG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CFLOLHMFICG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CFLOLHMFICG*>*(*)())((::PBYTE)hIl2Cpp + CFLOLHMFICG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CFLOLHMFICG* Clone()
		{
			return ((::CFLOLHMFICG*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_CLONE_OFFSET))(this);
		}

		::System::UInt32 GLPDJFFEILA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_GLPDJFFEILA_OFFSET))(this);
		}

		::System::Void GBLDMKDBOIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CFLOLHMFICG_GBLDMKDBOIB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CFLOLHMFICG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CFLOLHMFICG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CFLOLHMFICG*))((::PBYTE)hIl2Cpp + CFLOLHMFICG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CFLOLHMFICG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLOLHMFICG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CFLOLHMFICG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFLOLHMFICG*))((::PBYTE)hIl2Cpp + CFLOLHMFICG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CFLOLHMFICG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
