#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FFBPKIGNIAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FFBPKIGNIAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20547350)
#define FFBPKIGNIAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x205473F0)
#define FFBPKIGNIAO_CLONE_OFFSET UNITYSDK_OFFSET(0x20547040)
#define FFBPKIGNIAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20547010)
#define FFBPKIGNIAO_CTOR_OFFSET UNITYSDK_OFFSET(0x20547000)
#define FFBPKIGNIAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20547150)
#define FFBPKIGNIAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20547080)
#define FFBPKIGNIAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205472B0)
#define FFBPKIGNIAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20546FC0)
#define FFBPKIGNIAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205473A0)
#define FFBPKIGNIAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20547370)
#define FFBPKIGNIAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20546FF0)
#define FFBPKIGNIAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205472E0)
#define FFBPKIGNIAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x20547340)

inline static constexpr unsigned int FFBPKIGNIAO_TypeDefinitionIndex = 35968;

	class FFBPKIGNIAO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::FFBPKIGNIAO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FFBPKIGNIAO*>**)UnitySDK::FromName("", "FFBPKIGNIAO")->GetStaticField(0x4B940);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FFBPKIGNIAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFBPKIGNIAO*))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFBPKIGNIAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FFBPKIGNIAO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FFBPKIGNIAO*>*(*)())((::PBYTE)hIl2Cpp + FFBPKIGNIAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FFBPKIGNIAO* Clone()
		{
			return ((::FFBPKIGNIAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FFBPKIGNIAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FFBPKIGNIAO*))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FFBPKIGNIAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FFBPKIGNIAO*))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FFBPKIGNIAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
