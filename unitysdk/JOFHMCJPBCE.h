#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOFHMCJPBCE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOFHMCJPBCE_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1E772410)
#define JOFHMCJPBCE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E772740)
#define JOFHMCJPBCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E772A10)
#define JOFHMCJPBCE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E772390)
#define JOFHMCJPBCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E772360)
#define JOFHMCJPBCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E772350)
#define JOFHMCJPBCE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E772500)
#define JOFHMCJPBCE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E772420)
#define JOFHMCJPBCE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7725D0)
#define JOFHMCJPBCE_HBLPGFEOHGP_OFFSET UNITYSDK_OFFSET(0x1E7723F0)
#define JOFHMCJPBCE_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1E772400)
#define JOFHMCJPBCE_IKGGGGKMGLN_OFFSET UNITYSDK_OFFSET(0x1E7723E0)
#define JOFHMCJPBCE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E772310)
#define JOFHMCJPBCE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E772890)
#define JOFHMCJPBCE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E772850)
#define JOFHMCJPBCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E772340)
#define JOFHMCJPBCE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E772600)
#define JOFHMCJPBCE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E772660)

inline static constexpr unsigned int JOFHMCJPBCE_TypeDefinitionIndex = 34656;

	class JOFHMCJPBCE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HAHOPPLLGCE; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JOFHMCJPBCE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOFHMCJPBCE*>**)UnitySDK::FromName("", "JOFHMCJPBCE")->GetStaticField(0x23820);
		}

		// static const ::System::Object MJDEFIKLIIE; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOFHMCJPBCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFHMCJPBCE*))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOFHMCJPBCE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOFHMCJPBCE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOFHMCJPBCE*>*(*)())((::PBYTE)hIl2Cpp + JOFHMCJPBCE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOFHMCJPBCE* Clone()
		{
			return ((::JOFHMCJPBCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_CLONE_OFFSET))(this);
		}

		::System::UInt32 IKGGGGKMGLN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_IKGGGGKMGLN_OFFSET))(this);
		}

		::System::Void HBLPGFEOHGP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_HBLPGFEOHGP_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOFHMCJPBCE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOFHMCJPBCE*))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOFHMCJPBCE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOFHMCJPBCE*))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOFHMCJPBCE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
