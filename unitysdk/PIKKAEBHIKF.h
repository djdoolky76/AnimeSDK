#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIKKAEBHIKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIKKAEBHIKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205530A0)
#define PIKKAEBHIKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x205532C0)
#define PIKKAEBHIKF_CLONE_OFFSET UNITYSDK_OFFSET(0x20552C90)
#define PIKKAEBHIKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20552C60)
#define PIKKAEBHIKF_CTOR_OFFSET UNITYSDK_OFFSET(0x20552C50)
#define PIKKAEBHIKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20552E20)
#define PIKKAEBHIKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x20552D20)
#define PIKKAEBHIKF_FMLMNNLPGNF_OFFSET UNITYSDK_OFFSET(0x20552D00)
#define PIKKAEBHIKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20552F90)
#define PIKKAEBHIKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20552BE0)
#define PIKKAEBHIKF_LIAPBMEGPFJ_OFFSET UNITYSDK_OFFSET(0x20552D10)
#define PIKKAEBHIKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20553160)
#define PIKKAEBHIKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20553130)
#define PIKKAEBHIKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20552C40)
#define PIKKAEBHIKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20552FC0)
#define PIKKAEBHIKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x20553020)

inline static constexpr unsigned int PIKKAEBHIKF_TypeDefinitionIndex = 29953;

	class PIKKAEBHIKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IDAKPHDHIEC; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PIKKAEBHIKF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PIKKAEBHIKF*>**)UnitySDK::FromName("", "PIKKAEBHIKF")->GetStaticField(0x3C870);
		}

		// static const ::System::Object OLFMKBMAODM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIKKAEBHIKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKKAEBHIKF*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PIKKAEBHIKF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PIKKAEBHIKF*>*(*)())((::PBYTE)hIl2Cpp + PIKKAEBHIKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIKKAEBHIKF* Clone()
		{
			return ((::PIKKAEBHIKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 FMLMNNLPGNF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_FMLMNNLPGNF_OFFSET))(this);
		}

		::System::Void LIAPBMEGPFJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_LIAPBMEGPFJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIKKAEBHIKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIKKAEBHIKF*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIKKAEBHIKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIKKAEBHIKF*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIKKAEBHIKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
