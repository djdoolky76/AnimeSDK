#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIHNFHMEHCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIHNFHMEHCD_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1DF68660)
#define PIHNFHMEHCD_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1DF68670)
#define PIHNFHMEHCD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF689D0)
#define PIHNFHMEHCD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF68BF0)
#define PIHNFHMEHCD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF68620)
#define PIHNFHMEHCD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF685F0)
#define PIHNFHMEHCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF685E0)
#define PIHNFHMEHCD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF68750)
#define PIHNFHMEHCD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF68680)
#define PIHNFHMEHCD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF688C0)
#define PIHNFHMEHCD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF685A0)
#define PIHNFHMEHCD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF68A90)
#define PIHNFHMEHCD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF68A60)
#define PIHNFHMEHCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF685D0)
#define PIHNFHMEHCD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF688F0)
#define PIHNFHMEHCD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF68950)

inline static constexpr unsigned int PIHNFHMEHCD_TypeDefinitionIndex = 32581;

	class PIHNFHMEHCD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIHNFHMEHCD")->GetStaticField(0x43FC0);
		}

		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIHNFHMEHCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHNFHMEHCD*))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIHNFHMEHCD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIHNFHMEHCD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIHNFHMEHCD* Clone()
		{
			return ((::PIHNFHMEHCD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_CLONE_OFFSET))(this);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIHNFHMEHCD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIHNFHMEHCD*))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIHNFHMEHCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIHNFHMEHCD*))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIHNFHMEHCD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
