#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCLGDKFKPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LLCLGDKFKPJ_AKBNGOCLOCI_OFFSET UNITYSDK_OFFSET(0x1E96ACF0)
#define LLCLGDKFKPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E96B050)
#define LLCLGDKFKPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96B270)
#define LLCLGDKFKPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E96ACA0)
#define LLCLGDKFKPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E96AC70)
#define LLCLGDKFKPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E96AC60)
#define LLCLGDKFKPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E96ADD0)
#define LLCLGDKFKPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E96AD00)
#define LLCLGDKFKPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E96AF40)
#define LLCLGDKFKPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E96AC20)
#define LLCLGDKFKPJ_MBHDGNNCJGH_OFFSET UNITYSDK_OFFSET(0x1E96ACE0)
#define LLCLGDKFKPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E96B110)
#define LLCLGDKFKPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E96B0E0)
#define LLCLGDKFKPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E96AC50)
#define LLCLGDKFKPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E96AF70)
#define LLCLGDKFKPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E96AFD0)

inline static constexpr unsigned int LLCLGDKFKPJ_TypeDefinitionIndex = 34457;

	class LLCLGDKFKPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CIIPNEBKCLI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LLCLGDKFKPJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LLCLGDKFKPJ*>**)UnitySDK::FromName("", "LLCLGDKFKPJ")->GetStaticField(0x3B960);
		}

		// static const ::System::Object GOBJOHKBCFI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LLCLGDKFKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLCLGDKFKPJ*))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LLCLGDKFKPJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LLCLGDKFKPJ*>*(*)())((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LLCLGDKFKPJ* Clone()
		{
			return ((::LLCLGDKFKPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 MBHDGNNCJGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_MBHDGNNCJGH_OFFSET))(this);
		}

		::System::Void AKBNGOCLOCI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_AKBNGOCLOCI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LLCLGDKFKPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LLCLGDKFKPJ*))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LLCLGDKFKPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LLCLGDKFKPJ*))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LLCLGDKFKPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
