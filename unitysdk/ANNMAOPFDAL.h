#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ANNMAOPFDAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ANNMAOPFDAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E637900)
#define ANNMAOPFDAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6379A0)
#define ANNMAOPFDAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6375F0)
#define ANNMAOPFDAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6375C0)
#define ANNMAOPFDAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6375B0)
#define ANNMAOPFDAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E637700)
#define ANNMAOPFDAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E637630)
#define ANNMAOPFDAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E637860)
#define ANNMAOPFDAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E637570)
#define ANNMAOPFDAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E637950)
#define ANNMAOPFDAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E637920)
#define ANNMAOPFDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6375A0)
#define ANNMAOPFDAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E637890)
#define ANNMAOPFDAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6378F0)

inline static constexpr unsigned int ANNMAOPFDAL_TypeDefinitionIndex = 31241;

	class ANNMAOPFDAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::ANNMAOPFDAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ANNMAOPFDAL*>**)UnitySDK::FromName("", "ANNMAOPFDAL")->GetStaticField(0x47DE0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ANNMAOPFDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNMAOPFDAL*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ANNMAOPFDAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ANNMAOPFDAL*>*(*)())((::PBYTE)hIl2Cpp + ANNMAOPFDAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ANNMAOPFDAL* Clone()
		{
			return ((::ANNMAOPFDAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ANNMAOPFDAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ANNMAOPFDAL*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ANNMAOPFDAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNMAOPFDAL*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ANNMAOPFDAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
