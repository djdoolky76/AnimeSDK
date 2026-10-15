#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKEFLKGCMBN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EKEFLKGCMBN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2BF330)
#define EKEFLKGCMBN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2BF6B0)
#define EKEFLKGCMBN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2BEF10)
#define EKEFLKGCMBN_CPBLBPJOBMN_OFFSET UNITYSDK_OFFSET(0x1E2BEFA0)
#define EKEFLKGCMBN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2BEED0)
#define EKEFLKGCMBN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEEC0)
#define EKEFLKGCMBN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2BF0A0)
#define EKEFLKGCMBN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2BEFC0)
#define EKEFLKGCMBN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2BF170)
#define EKEFLKGCMBN_GGKPMFLNHJO_OFFSET UNITYSDK_OFFSET(0x1E2BEF60)
#define EKEFLKGCMBN_IJFJCEOHDLE_OFFSET UNITYSDK_OFFSET(0x1E2BEFB0)
#define EKEFLKGCMBN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2BEE80)
#define EKEFLKGCMBN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2BF510)
#define EKEFLKGCMBN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2BF4C0)
#define EKEFLKGCMBN_MJPGIEICBAP_OFFSET UNITYSDK_OFFSET(0x1E2BEF80)
#define EKEFLKGCMBN_OKPOGFPMGNM_OFFSET UNITYSDK_OFFSET(0x1E2BEF90)
#define EKEFLKGCMBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2BEEB0)
#define EKEFLKGCMBN_PKAIJDNDGHJ_OFFSET UNITYSDK_OFFSET(0x1E2BEF70)
#define EKEFLKGCMBN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2BF1A0)
#define EKEFLKGCMBN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2BF200)

	class EKEFLKGCMBN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NGFGMKLACAK; // 0x18
		::System::UInt32 KJAENGKDFJD; // 0x1C
		::System::UInt32 GKPADDHFMBE; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EKEFLKGCMBN")->GetStaticField(0x4C760);
		}

		// static const ::System::Object HEGEJMNPAOA; // 0x0
		// static const ::System::Object JBEKMBAIGCK; // 0x0
		// static const ::System::Object PIACMPBJOIK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EKEFLKGCMBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKEFLKGCMBN*))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EKEFLKGCMBN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EKEFLKGCMBN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EKEFLKGCMBN* Clone()
		{
			return ((::EKEFLKGCMBN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGKPMFLNHJO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_GGKPMFLNHJO_OFFSET))(this);
		}

		::System::Void PKAIJDNDGHJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_PKAIJDNDGHJ_OFFSET))(this, a1);
		}

		::System::UInt32 MJPGIEICBAP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_MJPGIEICBAP_OFFSET))(this);
		}

		::System::Void OKPOGFPMGNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_OKPOGFPMGNM_OFFSET))(this, a1);
		}

		::System::UInt32 CPBLBPJOBMN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_CPBLBPJOBMN_OFFSET))(this);
		}

		::System::Void IJFJCEOHDLE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_IJFJCEOHDLE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EKEFLKGCMBN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EKEFLKGCMBN*))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EKEFLKGCMBN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKEFLKGCMBN*))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EKEFLKGCMBN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
