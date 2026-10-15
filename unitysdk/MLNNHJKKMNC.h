#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLNNHJKKMNC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLNNHJKKMNC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA84C90)
#define MLNNHJKKMNC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA84D30)
#define MLNNHJKKMNC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA84980)
#define MLNNHJKKMNC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA84950)
#define MLNNHJKKMNC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA84940)
#define MLNNHJKKMNC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA84A90)
#define MLNNHJKKMNC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA849C0)
#define MLNNHJKKMNC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA84BF0)
#define MLNNHJKKMNC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA84900)
#define MLNNHJKKMNC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA84CE0)
#define MLNNHJKKMNC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA84CB0)
#define MLNNHJKKMNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA84930)
#define MLNNHJKKMNC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA84C20)
#define MLNNHJKKMNC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA84C80)

inline static constexpr unsigned int MLNNHJKKMNC_TypeDefinitionIndex = 26017;

	class MLNNHJKKMNC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::MLNNHJKKMNC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLNNHJKKMNC*>**)UnitySDK::FromName("", "MLNNHJKKMNC")->GetStaticField(0x58110);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLNNHJKKMNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNNHJKKMNC*))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLNNHJKKMNC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLNNHJKKMNC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLNNHJKKMNC*>*(*)())((::PBYTE)hIl2Cpp + MLNNHJKKMNC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLNNHJKKMNC* Clone()
		{
			return ((::MLNNHJKKMNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLNNHJKKMNC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLNNHJKKMNC*))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLNNHJKKMNC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLNNHJKKMNC*))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLNNHJKKMNC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
