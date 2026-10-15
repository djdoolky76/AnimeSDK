#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHLMFDBFCEC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHLMFDBFCEC_AAPDNNOGAJF_OFFSET UNITYSDK_OFFSET(0x1EA35030)
#define MHLMFDBFCEC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA35370)
#define MHLMFDBFCEC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA35640)
#define MHLMFDBFCEC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA34FC0)
#define MHLMFDBFCEC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA34F90)
#define MHLMFDBFCEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA34F80)
#define MHLMFDBFCEC_EMJOCDGPDGE_OFFSET UNITYSDK_OFFSET(0x1EA35040)
#define MHLMFDBFCEC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA35130)
#define MHLMFDBFCEC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA35050)
#define MHLMFDBFCEC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA35020)
#define MHLMFDBFCEC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA35200)
#define MHLMFDBFCEC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA34F40)
#define MHLMFDBFCEC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA354C0)
#define MHLMFDBFCEC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA35480)
#define MHLMFDBFCEC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA35010)
#define MHLMFDBFCEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA34F70)
#define MHLMFDBFCEC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA35230)
#define MHLMFDBFCEC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA35290)

	class MHLMFDBFCEC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 NKFNGEMOKPF; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHLMFDBFCEC")->GetStaticField(0x520C0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object KCFPOKBCCDK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHLMFDBFCEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHLMFDBFCEC*))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHLMFDBFCEC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHLMFDBFCEC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHLMFDBFCEC* Clone()
		{
			return ((::MHLMFDBFCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 AAPDNNOGAJF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_AAPDNNOGAJF_OFFSET))(this);
		}

		::System::Void EMJOCDGPDGE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_EMJOCDGPDGE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHLMFDBFCEC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHLMFDBFCEC*))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHLMFDBFCEC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHLMFDBFCEC*))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHLMFDBFCEC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
