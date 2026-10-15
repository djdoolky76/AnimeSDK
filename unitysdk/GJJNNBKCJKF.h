#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GJJNNBKCJKF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GJJNNBKCJKF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4AA720)
#define GJJNNBKCJKF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA9F0)
#define GJJNNBKCJKF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4AA320)
#define GJJNNBKCJKF_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E4AA390)
#define GJJNNBKCJKF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4AA2F0)
#define GJJNNBKCJKF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA2E0)
#define GJJNNBKCJKF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4AA4E0)
#define GJJNNBKCJKF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4AA3D0)
#define GJJNNBKCJKF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4AA5B0)
#define GJJNNBKCJKF_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E4AA3A0)
#define GJJNNBKCJKF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4AA270)
#define GJJNNBKCJKF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4AA870)
#define GJJNNBKCJKF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4AA830)
#define GJJNNBKCJKF_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1E4AA3B0)
#define GJJNNBKCJKF_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1E4AA3C0)
#define GJJNNBKCJKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4AA2D0)
#define GJJNNBKCJKF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4AA5E0)
#define GJJNNBKCJKF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4AA640)

	class GJJNNBKCJKF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGFGMKLACAK; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GJJNNBKCJKF")->GetStaticField(0x1BF90);
		}

		// static const ::System::Object PIACMPBJOIK; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GJJNNBKCJKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJJNNBKCJKF*))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJJNNBKCJKF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GJJNNBKCJKF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GJJNNBKCJKF* Clone()
		{
			return ((::GJJNNBKCJKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_CLONE_OFFSET))(this);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GJJNNBKCJKF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GJJNNBKCJKF*))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GJJNNBKCJKF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GJJNNBKCJKF*))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GJJNNBKCJKF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
