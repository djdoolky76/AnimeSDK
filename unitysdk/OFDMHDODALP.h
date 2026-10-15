#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFDMHDODALP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OFDMHDODALP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE37460)
#define OFDMHDODALP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE37730)
#define OFDMHDODALP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE370B0)
#define OFDMHDODALP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE37080)
#define OFDMHDODALP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE37070)
#define OFDMHDODALP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE37220)
#define OFDMHDODALP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE37140)
#define OFDMHDODALP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE37110)
#define OFDMHDODALP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE372F0)
#define OFDMHDODALP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE37030)
#define OFDMHDODALP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE375B0)
#define OFDMHDODALP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE37570)
#define OFDMHDODALP_NOKGLDLPBMF_OFFSET UNITYSDK_OFFSET(0x1DE37120)
#define OFDMHDODALP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE37100)
#define OFDMHDODALP_PAADFGNKKBC_OFFSET UNITYSDK_OFFSET(0x1DE37130)
#define OFDMHDODALP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE37060)
#define OFDMHDODALP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE37320)
#define OFDMHDODALP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE37380)

	class OFDMHDODALP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GMIBHOBIEFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OFDMHDODALP")->GetStaticField(0x16250);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DONMANGCEDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OFDMHDODALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFDMHDODALP*))((::PBYTE)hIl2Cpp + OFDMHDODALP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFDMHDODALP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OFDMHDODALP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OFDMHDODALP* Clone()
		{
			return ((::OFDMHDODALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFDMHDODALP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NOKGLDLPBMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_NOKGLDLPBMF_OFFSET))(this);
		}

		::System::Void PAADFGNKKBC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFDMHDODALP_PAADFGNKKBC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OFDMHDODALP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OFDMHDODALP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OFDMHDODALP*))((::PBYTE)hIl2Cpp + OFDMHDODALP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OFDMHDODALP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDMHDODALP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OFDMHDODALP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OFDMHDODALP*))((::PBYTE)hIl2Cpp + OFDMHDODALP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OFDMHDODALP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
