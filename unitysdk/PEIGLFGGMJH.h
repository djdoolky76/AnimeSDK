#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEIGLFGGMJH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEIGLFGGMJH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1A570)
#define PEIGLFGGMJH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A610)
#define PEIGLFGGMJH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1A260)
#define PEIGLFGGMJH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1A230)
#define PEIGLFGGMJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A220)
#define PEIGLFGGMJH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1A370)
#define PEIGLFGGMJH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1A2A0)
#define PEIGLFGGMJH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1A4D0)
#define PEIGLFGGMJH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1A1E0)
#define PEIGLFGGMJH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1A5C0)
#define PEIGLFGGMJH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1A590)
#define PEIGLFGGMJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1A210)
#define PEIGLFGGMJH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1A500)
#define PEIGLFGGMJH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1A560)

inline static constexpr unsigned int PEIGLFGGMJH_TypeDefinitionIndex = 28196;

	class PEIGLFGGMJH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PEIGLFGGMJH")->GetStaticField(0x39540);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEIGLFGGMJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEIGLFGGMJH*))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEIGLFGGMJH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PEIGLFGGMJH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEIGLFGGMJH* Clone()
		{
			return ((::PEIGLFGGMJH*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEIGLFGGMJH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEIGLFGGMJH*))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEIGLFGGMJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEIGLFGGMJH*))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEIGLFGGMJH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
