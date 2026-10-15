#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMLNJOPALPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMLNJOPALPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E02C4C0)
#define BMLNJOPALPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E02C6E0)
#define BMLNJOPALPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E02C110)
#define BMLNJOPALPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E02C0E0)
#define BMLNJOPALPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E02C0D0)
#define BMLNJOPALPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E02C240)
#define BMLNJOPALPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E02C170)
#define BMLNJOPALPJ_FAMGHDLEDLP_OFFSET UNITYSDK_OFFSET(0x1E02C160)
#define BMLNJOPALPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E02C3B0)
#define BMLNJOPALPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E02C090)
#define BMLNJOPALPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E02C580)
#define BMLNJOPALPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E02C550)
#define BMLNJOPALPJ_MHFBDNGECAE_OFFSET UNITYSDK_OFFSET(0x1E02C150)
#define BMLNJOPALPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E02C0C0)
#define BMLNJOPALPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E02C3E0)
#define BMLNJOPALPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E02C440)

inline static constexpr unsigned int BMLNJOPALPJ_TypeDefinitionIndex = 34942;

	class BMLNJOPALPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LAAGBFNNOKM; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMLNJOPALPJ")->GetStaticField(0x51620);
		}

		// static const ::System::Object BAOPMJAPINI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMLNJOPALPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMLNJOPALPJ*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMLNJOPALPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMLNJOPALPJ* Clone()
		{
			return ((::BMLNJOPALPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 MHFBDNGECAE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_MHFBDNGECAE_OFFSET))(this);
		}

		::System::Void FAMGHDLEDLP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_FAMGHDLEDLP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMLNJOPALPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMLNJOPALPJ*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMLNJOPALPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMLNJOPALPJ*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMLNJOPALPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
