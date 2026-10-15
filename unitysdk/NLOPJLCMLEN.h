#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NLOPJLCMLEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NLOPJLCMLEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB69B70)
#define NLOPJLCMLEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB69C10)
#define NLOPJLCMLEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB69860)
#define NLOPJLCMLEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB69830)
#define NLOPJLCMLEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB69820)
#define NLOPJLCMLEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB69970)
#define NLOPJLCMLEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB698A0)
#define NLOPJLCMLEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB69AD0)
#define NLOPJLCMLEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB697E0)
#define NLOPJLCMLEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB69BC0)
#define NLOPJLCMLEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB69B90)
#define NLOPJLCMLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB69810)
#define NLOPJLCMLEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB69B00)
#define NLOPJLCMLEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB69B60)

inline static constexpr unsigned int NLOPJLCMLEN_TypeDefinitionIndex = 31258;

	class NLOPJLCMLEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NLOPJLCMLEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NLOPJLCMLEN*>**)UnitySDK::FromName("", "NLOPJLCMLEN")->GetStaticField(0x6BC20);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NLOPJLCMLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLOPJLCMLEN*))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NLOPJLCMLEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NLOPJLCMLEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NLOPJLCMLEN*>*(*)())((::PBYTE)hIl2Cpp + NLOPJLCMLEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NLOPJLCMLEN* Clone()
		{
			return ((::NLOPJLCMLEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NLOPJLCMLEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NLOPJLCMLEN*))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NLOPJLCMLEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NLOPJLCMLEN*))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NLOPJLCMLEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
