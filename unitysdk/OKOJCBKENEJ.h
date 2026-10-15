#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKOJCBKENEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OKOJCBKENEJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE73C00)
#define OKOJCBKENEJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE73CA0)
#define OKOJCBKENEJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE738A0)
#define OKOJCBKENEJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE73870)
#define OKOJCBKENEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE73860)
#define OKOJCBKENEJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE73A00)
#define OKOJCBKENEJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE73910)
#define OKOJCBKENEJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE73B60)
#define OKOJCBKENEJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE737F0)
#define OKOJCBKENEJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE73C50)
#define OKOJCBKENEJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE73C20)
#define OKOJCBKENEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE73850)
#define OKOJCBKENEJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE73B90)
#define OKOJCBKENEJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE73BF0)

inline static constexpr unsigned int OKOJCBKENEJ_TypeDefinitionIndex = 34402;

	class OKOJCBKENEJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::OKOJCBKENEJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OKOJCBKENEJ*>**)UnitySDK::FromName("", "OKOJCBKENEJ")->GetStaticField(0x20A40);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OKOJCBKENEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKOJCBKENEJ*))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKOJCBKENEJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OKOJCBKENEJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OKOJCBKENEJ*>*(*)())((::PBYTE)hIl2Cpp + OKOJCBKENEJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OKOJCBKENEJ* Clone()
		{
			return ((::OKOJCBKENEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OKOJCBKENEJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OKOJCBKENEJ*))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OKOJCBKENEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OKOJCBKENEJ*))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OKOJCBKENEJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
