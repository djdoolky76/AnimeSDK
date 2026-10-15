#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDIBHDEKJCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDIBHDEKJCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44B600)
#define GDIBHDEKJCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44B670)
#define GDIBHDEKJCG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E436F10)
#define GDIBHDEKJCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E44B310)
#define GDIBHDEKJCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4396F0)
#define GDIBHDEKJCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E44B430)
#define GDIBHDEKJCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E44B340)
#define GDIBHDEKJCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E438080)
#define GDIBHDEKJCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E44B2A0)
#define GDIBHDEKJCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44B620)
#define GDIBHDEKJCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E439700)
#define GDIBHDEKJCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E44B300)
#define GDIBHDEKJCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44B590)
#define GDIBHDEKJCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44B5F0)

inline static constexpr unsigned int GDIBHDEKJCG_TypeDefinitionIndex = 25232;

	class GDIBHDEKJCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GDIBHDEKJCG")->GetStaticField(0x10E20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDIBHDEKJCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDIBHDEKJCG*))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDIBHDEKJCG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GDIBHDEKJCG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDIBHDEKJCG* Clone()
		{
			return ((::GDIBHDEKJCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDIBHDEKJCG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDIBHDEKJCG*))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDIBHDEKJCG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDIBHDEKJCG*))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDIBHDEKJCG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
