#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HDAHFLMBAAB;
class NCFCNNFIBLJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NCFCNNFIBLJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD9780)
#define NCFCNNFIBLJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9AE0)
#define NCFCNNFIBLJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD91D0)
#define NCFCNNFIBLJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD9130)
#define NCFCNNFIBLJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9120)
#define NCFCNNFIBLJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD9440)
#define NCFCNNFIBLJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD92C0)
#define NCFCNNFIBLJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EAD92B0)
#define NCFCNNFIBLJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD95C0)
#define NCFCNNFIBLJ_INHEFJIHHKD_OFFSET UNITYSDK_OFFSET(0x1EAD9280)
#define NCFCNNFIBLJ_JBKPGAMNPNC_OFFSET UNITYSDK_OFFSET(0x1EAD9290)
#define NCFCNNFIBLJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD90E0)
#define NCFCNNFIBLJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD9930)
#define NCFCNNFIBLJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD9850)
#define NCFCNNFIBLJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EAD92A0)
#define NCFCNNFIBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9110)
#define NCFCNNFIBLJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD9640)
#define NCFCNNFIBLJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD96A0)

	class NCFCNNFIBLJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::HDAHFLMBAAB* PJMDEGAGOJF; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NCFCNNFIBLJ")->GetStaticField(0x5D160);
		}

		// static const ::System::Object GCDNPAGONIF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NCFCNNFIBLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFCNNFIBLJ*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NCFCNNFIBLJ* Clone()
		{
			return ((::NCFCNNFIBLJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_CLONE_OFFSET))(this);
		}

		::HDAHFLMBAAB* INHEFJIHHKD()
		{
			return ((::HDAHFLMBAAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_INHEFJIHHKD_OFFSET))(this);
		}

		::System::Void JBKPGAMNPNC(::HDAHFLMBAAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HDAHFLMBAAB*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_JBKPGAMNPNC_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NCFCNNFIBLJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NCFCNNFIBLJ*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NCFCNNFIBLJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NCFCNNFIBLJ*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NCFCNNFIBLJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
