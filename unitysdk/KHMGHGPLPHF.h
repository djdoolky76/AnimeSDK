#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHMGHGPLPHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KHMGHGPLPHF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E81BEC0)
#define KHMGHGPLPHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E81BF60)
#define KHMGHGPLPHF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E81BBB0)
#define KHMGHGPLPHF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E81BB80)
#define KHMGHGPLPHF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E81BB70)
#define KHMGHGPLPHF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E81BCC0)
#define KHMGHGPLPHF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E81BBF0)
#define KHMGHGPLPHF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E81BE20)
#define KHMGHGPLPHF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E81BB30)
#define KHMGHGPLPHF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E81BF10)
#define KHMGHGPLPHF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E81BEE0)
#define KHMGHGPLPHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E81BB60)
#define KHMGHGPLPHF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E81BE50)
#define KHMGHGPLPHF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E81BEB0)

inline static constexpr unsigned int KHMGHGPLPHF_TypeDefinitionIndex = 27118;

	class KHMGHGPLPHF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::KHMGHGPLPHF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KHMGHGPLPHF*>**)UnitySDK::FromName("", "KHMGHGPLPHF")->GetStaticField(0x16620);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KHMGHGPLPHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHMGHGPLPHF*))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHMGHGPLPHF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KHMGHGPLPHF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KHMGHGPLPHF*>*(*)())((::PBYTE)hIl2Cpp + KHMGHGPLPHF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KHMGHGPLPHF* Clone()
		{
			return ((::KHMGHGPLPHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KHMGHGPLPHF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KHMGHGPLPHF*))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KHMGHGPLPHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KHMGHGPLPHF*))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KHMGHGPLPHF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
