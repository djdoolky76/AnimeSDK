#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MGBKBIKLJDN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MGBKBIKLJDN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA20F80)
#define MGBKBIKLJDN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA211C0)
#define MGBKBIKLJDN_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA20A90)
#define MGBKBIKLJDN_COOJCNNMGGP_OFFSET UNITYSDK_OFFSET(0x1EA20AE0)
#define MGBKBIKLJDN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA209F0)
#define MGBKBIKLJDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA209A0)
#define MGBKBIKLJDN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA20BA0)
#define MGBKBIKLJDN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA20B10)
#define MGBKBIKLJDN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA20B00)
#define MGBKBIKLJDN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA20CB0)
#define MGBKBIKLJDN_GOBCLJFPCAF_OFFSET UNITYSDK_OFFSET(0x1EA20AD0)
#define MGBKBIKLJDN_IEDOGJFAGIE_OFFSET UNITYSDK_OFFSET(0x1EA20AC0)
#define MGBKBIKLJDN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA20960)
#define MGBKBIKLJDN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA210D0)
#define MGBKBIKLJDN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA21070)
#define MGBKBIKLJDN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA20AF0)
#define MGBKBIKLJDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA20990)
#define MGBKBIKLJDN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA20DB0)
#define MGBKBIKLJDN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA20E10)

	class MGBKBIKLJDN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIBIIFNLNJJ; // 0x18
		::System::Boolean DKDLLJDGCCB; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MGBKBIKLJDN")->GetStaticField(0x4D3C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FLJBJMDPFHH()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "MGBKBIKLJDN")->GetStaticField(0x4D3C8);
		}

		// static const ::System::Object IICKCIKPOKO; // 0x0
		// static const ::System::Object DGBMBFCBOMK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MGBKBIKLJDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBKBIKLJDN*))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGBKBIKLJDN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MGBKBIKLJDN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MGBKBIKLJDN* Clone()
		{
			return ((::MGBKBIKLJDN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* IEDOGJFAGIE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_IEDOGJFAGIE_OFFSET))(this);
		}

		::System::Boolean GOBCLJFPCAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_GOBCLJFPCAF_OFFSET))(this);
		}

		::System::Void COOJCNNMGGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_COOJCNNMGGP_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MGBKBIKLJDN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MGBKBIKLJDN*))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MGBKBIKLJDN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MGBKBIKLJDN*))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MGBKBIKLJDN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
