#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIALCDGNNLC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NIALCDGNNLC_AOIAGOPLPHO_OFFSET UNITYSDK_OFFSET(0x1EB24CA0)
#define NIALCDGNNLC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB24FD0)
#define NIALCDGNNLC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB252A0)
#define NIALCDGNNLC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB24C20)
#define NIALCDGNNLC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB24BF0)
#define NIALCDGNNLC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB24BE0)
#define NIALCDGNNLC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB24D90)
#define NIALCDGNNLC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB24CB0)
#define NIALCDGNNLC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EB24C80)
#define NIALCDGNNLC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB24E60)
#define NIALCDGNNLC_GNBHJPJKCNE_OFFSET UNITYSDK_OFFSET(0x1EB24C90)
#define NIALCDGNNLC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB24BA0)
#define NIALCDGNNLC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB25120)
#define NIALCDGNNLC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB250E0)
#define NIALCDGNNLC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EB24C70)
#define NIALCDGNNLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB24BD0)
#define NIALCDGNNLC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB24E90)
#define NIALCDGNNLC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB24EF0)

	class NIALCDGNNLC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BPHDNNEOBIH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NIALCDGNNLC")->GetStaticField(0x609B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object POJHDFPIFCJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NIALCDGNNLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIALCDGNNLC*))((::PBYTE)hIl2Cpp + NIALCDGNNLC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIALCDGNNLC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NIALCDGNNLC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NIALCDGNNLC* Clone()
		{
			return ((::NIALCDGNNLC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIALCDGNNLC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 GNBHJPJKCNE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_GNBHJPJKCNE_OFFSET))(this);
		}

		::System::Void AOIAGOPLPHO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NIALCDGNNLC_AOIAGOPLPHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NIALCDGNNLC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NIALCDGNNLC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NIALCDGNNLC*))((::PBYTE)hIl2Cpp + NIALCDGNNLC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NIALCDGNNLC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NIALCDGNNLC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NIALCDGNNLC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIALCDGNNLC*))((::PBYTE)hIl2Cpp + NIALCDGNNLC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NIALCDGNNLC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
