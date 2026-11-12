#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJJGLJEHPJE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJJGLJEHPJE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FB89EE0)
#define KJJGLJEHPJE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB8A100)
#define KJJGLJEHPJE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FB89AD0)
#define KJJGLJEHPJE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FB89AA0)
#define KJJGLJEHPJE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB89A90)
#define KJJGLJEHPJE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FB89C60)
#define KJJGLJEHPJE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FB89B60)
#define KJJGLJEHPJE_FMLMNNLPGNF_OFFSET UNITYSDK_OFFSET(0x1FB89B40)
#define KJJGLJEHPJE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FB89DD0)
#define KJJGLJEHPJE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FB89A20)
#define KJJGLJEHPJE_LIAPBMEGPFJ_OFFSET UNITYSDK_OFFSET(0x1FB89B50)
#define KJJGLJEHPJE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FB89FA0)
#define KJJGLJEHPJE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FB89F70)
#define KJJGLJEHPJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FB89A80)
#define KJJGLJEHPJE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FB89E00)
#define KJJGLJEHPJE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FB89E60)

inline static constexpr unsigned int KJJGLJEHPJE_TypeDefinitionIndex = 29955;

	class KJJGLJEHPJE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDAKPHDHIEC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KJJGLJEHPJE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KJJGLJEHPJE*>**)UnitySDK::FromName("", "KJJGLJEHPJE")->GetStaticField(0x15890);
		}

		// static const ::System::Object OLFMKBMAODM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJJGLJEHPJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJGLJEHPJE*))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJJGLJEHPJE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KJJGLJEHPJE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KJJGLJEHPJE*>*(*)())((::PBYTE)hIl2Cpp + KJJGLJEHPJE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJJGLJEHPJE* Clone()
		{
			return ((::KJJGLJEHPJE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_CLONE_OFFSET))(this);
		}

		::System::UInt32 FMLMNNLPGNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_FMLMNNLPGNF_OFFSET))(this);
		}

		::System::Void LIAPBMEGPFJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_LIAPBMEGPFJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJJGLJEHPJE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJJGLJEHPJE*))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJJGLJEHPJE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJJGLJEHPJE*))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJJGLJEHPJE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
