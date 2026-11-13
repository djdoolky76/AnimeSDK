#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDIBHDEKJCG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDIBHDEKJCG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202368A0)
#define GDIBHDEKJCG_CCTOR_OFFSET UNITYSDK_OFFSET(0x20236940)
#define GDIBHDEKJCG_CLONE_OFFSET UNITYSDK_OFFSET(0x20236540)
#define GDIBHDEKJCG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20236510)
#define GDIBHDEKJCG_CTOR_OFFSET UNITYSDK_OFFSET(0x20236500)
#define GDIBHDEKJCG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202366A0)
#define GDIBHDEKJCG_EQUALS_OFFSET UNITYSDK_OFFSET(0x202365B0)
#define GDIBHDEKJCG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20236800)
#define GDIBHDEKJCG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20236490)
#define GDIBHDEKJCG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202368F0)
#define GDIBHDEKJCG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202368C0)
#define GDIBHDEKJCG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202364F0)
#define GDIBHDEKJCG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20236830)
#define GDIBHDEKJCG_WRITETO_OFFSET UNITYSDK_OFFSET(0x20236890)

inline static constexpr unsigned int GDIBHDEKJCG_TypeDefinitionIndex = 25710;

	class GDIBHDEKJCG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::GDIBHDEKJCG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDIBHDEKJCG*>**)UnitySDK::FromName("", "GDIBHDEKJCG")->GetStaticField(0x5CE60);
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

		static ::Google::Protobuf::MessageParser_1<::GDIBHDEKJCG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDIBHDEKJCG*>*(*)())((::PBYTE)hIl2Cpp + GDIBHDEKJCG_JJGHOBBFNJD_OFFSET))();
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
