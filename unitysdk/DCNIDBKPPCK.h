#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCNIDBKPPCK;
class NMEGIPHFFDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCNIDBKPPCK_BGAPBAMMAGK_OFFSET UNITYSDK_OFFSET(0x1E1772A0)
#define DCNIDBKPPCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1777A0)
#define DCNIDBKPPCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E177AB0)
#define DCNIDBKPPCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E177250)
#define DCNIDBKPPCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E177150)
#define DCNIDBKPPCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1770D0)
#define DCNIDBKPPCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1772F0)
#define DCNIDBKPPCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1772C0)
#define DCNIDBKPPCK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E177290)
#define DCNIDBKPPCK_GCKCAEMBDNN_OFFSET UNITYSDK_OFFSET(0x1E1772B0)
#define DCNIDBKPPCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E177440)
#define DCNIDBKPPCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E177090)
#define DCNIDBKPPCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E177990)
#define DCNIDBKPPCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1778D0)
#define DCNIDBKPPCK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E177280)
#define DCNIDBKPPCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1770C0)
#define DCNIDBKPPCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1775D0)
#define DCNIDBKPPCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E177630)

	class DCNIDBKPPCK : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* MEHJIOPJEIP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* OJFJBMMAHEJ; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x28
		static ::Google::Protobuf::FieldCodec** StaticGet_GCHJHCOKFGD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DCNIDBKPPCK")->GetStaticField(0x2D0C0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_CNCBDIFDGOJ()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "DCNIDBKPPCK")->GetStaticField(0x2D0C8);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DCNIDBKPPCK")->GetStaticField(0x2D0D0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CMOMAELPCOE; // 0x0
		// static const ::System::Object FPMLDEAOLBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCNIDBKPPCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNIDBKPPCK*))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNIDBKPPCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DCNIDBKPPCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCNIDBKPPCK* Clone()
		{
			return ((::DCNIDBKPPCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>* BGAPBAMMAGK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::NMEGIPHFFDA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_BGAPBAMMAGK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>* GCKCAEMBDNN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_GCKCAEMBDNN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCNIDBKPPCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCNIDBKPPCK*))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCNIDBKPPCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNIDBKPPCK*))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCNIDBKPPCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
