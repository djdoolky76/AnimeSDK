#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNOICNIGEBC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NNOICNIGEBC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB568B0)
#define NNOICNIGEBC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB56950)
#define NNOICNIGEBC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB565A0)
#define NNOICNIGEBC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB56570)
#define NNOICNIGEBC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB56560)
#define NNOICNIGEBC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB566B0)
#define NNOICNIGEBC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB565E0)
#define NNOICNIGEBC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB56810)
#define NNOICNIGEBC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB56520)
#define NNOICNIGEBC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB56900)
#define NNOICNIGEBC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB568D0)
#define NNOICNIGEBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB56550)
#define NNOICNIGEBC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB56840)
#define NNOICNIGEBC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB568A0)

inline static constexpr unsigned int NNOICNIGEBC_TypeDefinitionIndex = 34742;

	class NNOICNIGEBC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::NNOICNIGEBC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NNOICNIGEBC*>**)UnitySDK::FromName("", "NNOICNIGEBC")->GetStaticField(0x3090);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NNOICNIGEBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOICNIGEBC*))((::PBYTE)hIl2Cpp + NNOICNIGEBC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNOICNIGEBC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NNOICNIGEBC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NNOICNIGEBC*>*(*)())((::PBYTE)hIl2Cpp + NNOICNIGEBC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NNOICNIGEBC* Clone()
		{
			return ((::NNOICNIGEBC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNOICNIGEBC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NNOICNIGEBC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NNOICNIGEBC*))((::PBYTE)hIl2Cpp + NNOICNIGEBC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NNOICNIGEBC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNOICNIGEBC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NNOICNIGEBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNOICNIGEBC*))((::PBYTE)hIl2Cpp + NNOICNIGEBC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NNOICNIGEBC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
