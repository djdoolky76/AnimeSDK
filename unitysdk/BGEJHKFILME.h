#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGEJHKFILME;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BGEJHKFILME_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA45E20)
#define BGEJHKFILME_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA45EC0)
#define BGEJHKFILME_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA45B10)
#define BGEJHKFILME_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA45AE0)
#define BGEJHKFILME_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA45AD0)
#define BGEJHKFILME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA45C20)
#define BGEJHKFILME_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA45B50)
#define BGEJHKFILME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA45D80)
#define BGEJHKFILME_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA45A90)
#define BGEJHKFILME_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA45E70)
#define BGEJHKFILME_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA45E40)
#define BGEJHKFILME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA45AC0)
#define BGEJHKFILME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA45DB0)
#define BGEJHKFILME_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA45E10)

inline static constexpr unsigned int BGEJHKFILME_TypeDefinitionIndex = 28804;

	class BGEJHKFILME : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::BGEJHKFILME*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BGEJHKFILME*>**)UnitySDK::FromName("", "BGEJHKFILME")->GetStaticField(0x54750);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BGEJHKFILME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEJHKFILME*))((::PBYTE)hIl2Cpp + BGEJHKFILME_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGEJHKFILME_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BGEJHKFILME*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BGEJHKFILME*>*(*)())((::PBYTE)hIl2Cpp + BGEJHKFILME_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BGEJHKFILME* Clone()
		{
			return ((::BGEJHKFILME*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BGEJHKFILME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BGEJHKFILME* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BGEJHKFILME*))((::PBYTE)hIl2Cpp + BGEJHKFILME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BGEJHKFILME_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGEJHKFILME_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BGEJHKFILME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BGEJHKFILME*))((::PBYTE)hIl2Cpp + BGEJHKFILME_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BGEJHKFILME_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
