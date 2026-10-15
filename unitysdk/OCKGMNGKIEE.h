#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCKGMNGKIEE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OCKGMNGKIEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE174F0)
#define OCKGMNGKIEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE177C0)
#define OCKGMNGKIEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE17140)
#define OCKGMNGKIEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE17110)
#define OCKGMNGKIEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE17100)
#define OCKGMNGKIEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE172B0)
#define OCKGMNGKIEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE171D0)
#define OCKGMNGKIEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE17380)
#define OCKGMNGKIEE_HPNGDONMAPF_OFFSET UNITYSDK_OFFSET(0x1DE171C0)
#define OCKGMNGKIEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE170C0)
#define OCKGMNGKIEE_LKBKNGLMAMN_OFFSET UNITYSDK_OFFSET(0x1DE17190)
#define OCKGMNGKIEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE17640)
#define OCKGMNGKIEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE17600)
#define OCKGMNGKIEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE170F0)
#define OCKGMNGKIEE_PHCMBNJGBGB_OFFSET UNITYSDK_OFFSET(0x1DE171B0)
#define OCKGMNGKIEE_PNJCLMCJHBE_OFFSET UNITYSDK_OFFSET(0x1DE171A0)
#define OCKGMNGKIEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE173B0)
#define OCKGMNGKIEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE17410)

	class OCKGMNGKIEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FACHANGNFIN; // 0x18
		::System::UInt32 HJPCMINMFBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OCKGMNGKIEE")->GetStaticField(0x13110);
		}

		// static const ::System::Object ACLGGLDCAEC; // 0x0
		// static const ::System::Object LJEDNBHJPDA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OCKGMNGKIEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCKGMNGKIEE*))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCKGMNGKIEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OCKGMNGKIEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OCKGMNGKIEE* Clone()
		{
			return ((::OCKGMNGKIEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_CLONE_OFFSET))(this);
		}

		::System::UInt32 LKBKNGLMAMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_LKBKNGLMAMN_OFFSET))(this);
		}

		::System::Void PNJCLMCJHBE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_PNJCLMCJHBE_OFFSET))(this, a1);
		}

		::System::UInt32 PHCMBNJGBGB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_PHCMBNJGBGB_OFFSET))(this);
		}

		::System::Void HPNGDONMAPF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_HPNGDONMAPF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OCKGMNGKIEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OCKGMNGKIEE*))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OCKGMNGKIEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OCKGMNGKIEE*))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OCKGMNGKIEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
