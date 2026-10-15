#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FLCPJJMHAGO;
class MMOAIOJAMPA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MMOAIOJAMPA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA8FB30)
#define MMOAIOJAMPA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA8FED0)
#define MMOAIOJAMPA_CLGKBEDEGIG_OFFSET UNITYSDK_OFFSET(0x1EA8F6C0)
#define MMOAIOJAMPA_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA8F690)
#define MMOAIOJAMPA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA8F5D0)
#define MMOAIOJAMPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F580)
#define MMOAIOJAMPA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA8F840)
#define MMOAIOJAMPA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA8F6F0)
#define MMOAIOJAMPA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA8F6E0)
#define MMOAIOJAMPA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA8F960)
#define MMOAIOJAMPA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA8F540)
#define MMOAIOJAMPA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA8FD00)
#define MMOAIOJAMPA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA8FC60)
#define MMOAIOJAMPA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA8F6D0)
#define MMOAIOJAMPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA8F570)
#define MMOAIOJAMPA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA8F9D0)
#define MMOAIOJAMPA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA8FA30)

	class MMOAIOJAMPA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::FLCPJJMHAGO*>* LJPDDDJMMLO; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_MPDFEKFIIDJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MMOAIOJAMPA")->GetStaticField(0x59330);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MMOAIOJAMPA")->GetStaticField(0x59338);
		}

		// static const ::System::Object GLCPDKCMHHN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MMOAIOJAMPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMOAIOJAMPA*))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MMOAIOJAMPA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MMOAIOJAMPA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MMOAIOJAMPA* Clone()
		{
			return ((::MMOAIOJAMPA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::FLCPJJMHAGO*>* CLGKBEDEGIG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::FLCPJJMHAGO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_CLGKBEDEGIG_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MMOAIOJAMPA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MMOAIOJAMPA*))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MMOAIOJAMPA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMOAIOJAMPA*))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MMOAIOJAMPA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
