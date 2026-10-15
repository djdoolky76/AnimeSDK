#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JCFJFAFJACN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JCFJFAFJACN_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E7006B0)
#define JCFJFAFJACN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E700A10)
#define JCFJFAFJACN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E700C30)
#define JCFJFAFJACN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E700660)
#define JCFJFAFJACN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E700630)
#define JCFJFAFJACN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E700620)
#define JCFJFAFJACN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E700790)
#define JCFJFAFJACN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7006C0)
#define JCFJFAFJACN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E700900)
#define JCFJFAFJACN_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E7006A0)
#define JCFJFAFJACN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7005E0)
#define JCFJFAFJACN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E700AD0)
#define JCFJFAFJACN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E700AA0)
#define JCFJFAFJACN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E700610)
#define JCFJFAFJACN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E700930)
#define JCFJFAFJACN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E700990)

inline static constexpr unsigned int JCFJFAFJACN_TypeDefinitionIndex = 32750;

	class JCFJFAFJACN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BFOBOOGAHKB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JCFJFAFJACN")->GetStaticField(0x5D710);
		}

		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JCFJFAFJACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCFJFAFJACN*))((::PBYTE)hIl2Cpp + JCFJFAFJACN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCFJFAFJACN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JCFJFAFJACN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JCFJFAFJACN* Clone()
		{
			return ((::JCFJFAFJACN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_CLONE_OFFSET))(this);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JCFJFAFJACN_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JCFJFAFJACN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JCFJFAFJACN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JCFJFAFJACN*))((::PBYTE)hIl2Cpp + JCFJFAFJACN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JCFJFAFJACN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJFAFJACN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JCFJFAFJACN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JCFJFAFJACN*))((::PBYTE)hIl2Cpp + JCFJFAFJACN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JCFJFAFJACN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
