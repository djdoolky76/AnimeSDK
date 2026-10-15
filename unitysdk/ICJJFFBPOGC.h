#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ICJJFFBPOGC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ICJJFFBPOGC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6232F0)
#define ICJJFFBPOGC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E623390)
#define ICJJFFBPOGC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E622FE0)
#define ICJJFFBPOGC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E622FB0)
#define ICJJFFBPOGC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E622FA0)
#define ICJJFFBPOGC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6230F0)
#define ICJJFFBPOGC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E623020)
#define ICJJFFBPOGC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E623250)
#define ICJJFFBPOGC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E622F60)
#define ICJJFFBPOGC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E623340)
#define ICJJFFBPOGC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E623310)
#define ICJJFFBPOGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E622F90)
#define ICJJFFBPOGC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E623280)
#define ICJJFFBPOGC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6232E0)

inline static constexpr unsigned int ICJJFFBPOGC_TypeDefinitionIndex = 32132;

	class ICJJFFBPOGC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ICJJFFBPOGC")->GetStaticField(0x44A70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ICJJFFBPOGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICJJFFBPOGC*))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ICJJFFBPOGC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ICJJFFBPOGC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ICJJFFBPOGC* Clone()
		{
			return ((::ICJJFFBPOGC*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ICJJFFBPOGC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ICJJFFBPOGC*))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ICJJFFBPOGC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ICJJFFBPOGC*))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ICJJFFBPOGC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
