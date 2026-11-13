#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOHJGOCPPMF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NOHJGOCPPMF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB6DE40)
#define NOHJGOCPPMF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB6DEE0)
#define NOHJGOCPPMF_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB6DB30)
#define NOHJGOCPPMF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB6DB00)
#define NOHJGOCPPMF_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB6DAF0)
#define NOHJGOCPPMF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB6DC40)
#define NOHJGOCPPMF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB6DB70)
#define NOHJGOCPPMF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB6DDA0)
#define NOHJGOCPPMF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB6DAB0)
#define NOHJGOCPPMF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB6DE90)
#define NOHJGOCPPMF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB6DE60)
#define NOHJGOCPPMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB6DAE0)
#define NOHJGOCPPMF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB6DDD0)
#define NOHJGOCPPMF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB6DE30)

inline static constexpr unsigned int NOHJGOCPPMF_TypeDefinitionIndex = 27352;

	class NOHJGOCPPMF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NOHJGOCPPMF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NOHJGOCPPMF*>**)UnitySDK::FromName("", "NOHJGOCPPMF")->GetStaticField(0x53250);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NOHJGOCPPMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHJGOCPPMF*))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHJGOCPPMF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NOHJGOCPPMF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NOHJGOCPPMF*>*(*)())((::PBYTE)hIl2Cpp + NOHJGOCPPMF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NOHJGOCPPMF* Clone()
		{
			return ((::NOHJGOCPPMF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NOHJGOCPPMF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NOHJGOCPPMF*))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NOHJGOCPPMF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NOHJGOCPPMF*))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NOHJGOCPPMF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
