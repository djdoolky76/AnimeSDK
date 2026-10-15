#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAFBLIGHAMO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CAFBLIGHAMO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E058750)
#define CAFBLIGHAMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0587F0)
#define CAFBLIGHAMO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E058440)
#define CAFBLIGHAMO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E058410)
#define CAFBLIGHAMO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E058400)
#define CAFBLIGHAMO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E058550)
#define CAFBLIGHAMO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E058480)
#define CAFBLIGHAMO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0586B0)
#define CAFBLIGHAMO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0583C0)
#define CAFBLIGHAMO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0587A0)
#define CAFBLIGHAMO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E058770)
#define CAFBLIGHAMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0583F0)
#define CAFBLIGHAMO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0586E0)
#define CAFBLIGHAMO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E058740)

inline static constexpr unsigned int CAFBLIGHAMO_TypeDefinitionIndex = 34315;

	class CAFBLIGHAMO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CAFBLIGHAMO")->GetStaticField(0x56430);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CAFBLIGHAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAFBLIGHAMO*))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CAFBLIGHAMO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CAFBLIGHAMO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CAFBLIGHAMO* Clone()
		{
			return ((::CAFBLIGHAMO*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CAFBLIGHAMO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CAFBLIGHAMO*))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CAFBLIGHAMO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAFBLIGHAMO*))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CAFBLIGHAMO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
