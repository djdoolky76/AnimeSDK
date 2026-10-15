#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGIBNBCMEAG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGIBNBCMEAG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E64D0A0)
#define IGIBNBCMEAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E64D3C0)
#define IGIBNBCMEAG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E64CCE0)
#define IGIBNBCMEAG_CPCOADCNLIB_OFFSET UNITYSDK_OFFSET(0x1E64CD40)
#define IGIBNBCMEAG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E64CCA0)
#define IGIBNBCMEAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E64CC90)
#define IGIBNBCMEAG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E64CE50)
#define IGIBNBCMEAG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E64CD70)
#define IGIBNBCMEAG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E64CD60)
#define IGIBNBCMEAG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E64CF20)
#define IGIBNBCMEAG_IMNHMJNENMB_OFFSET UNITYSDK_OFFSET(0x1E64CD30)
#define IGIBNBCMEAG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E64CC50)
#define IGIBNBCMEAG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E64D240)
#define IGIBNBCMEAG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E64D200)
#define IGIBNBCMEAG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E64CD50)
#define IGIBNBCMEAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E64CC80)
#define IGIBNBCMEAG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E64CF60)
#define IGIBNBCMEAG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E64CFC0)

	class IGIBNBCMEAG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::Byte _padding0[0x4];
		::System::Int64 KOBIMDNNGKC; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IGIBNBCMEAG")->GetStaticField(0x4B0D0);
		}

		// static const ::System::Object LLKBEKMEEEB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGIBNBCMEAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGIBNBCMEAG*))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGIBNBCMEAG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IGIBNBCMEAG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGIBNBCMEAG* Clone()
		{
			return ((::IGIBNBCMEAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_CLONE_OFFSET))(this);
		}

		::System::Int64 IMNHMJNENMB()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_IMNHMJNENMB_OFFSET))(this);
		}

		::System::Void CPCOADCNLIB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_CPCOADCNLIB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGIBNBCMEAG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGIBNBCMEAG*))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGIBNBCMEAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGIBNBCMEAG*))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGIBNBCMEAG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
