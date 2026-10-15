#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KKIACMJGIKN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KKIACMJGIKN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E879240)
#define KKIACMJGIKN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8794E0)
#define KKIACMJGIKN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E878DB0)
#define KKIACMJGIKN_COLAIKCLCLA_OFFSET UNITYSDK_OFFSET(0x1E878E20)
#define KKIACMJGIKN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E878D10)
#define KKIACMJGIKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E878CC0)
#define KKIACMJGIKN_DCADELCNPFJ_OFFSET UNITYSDK_OFFSET(0x1E878DE0)
#define KKIACMJGIKN_EHINDNMNAOH_OFFSET UNITYSDK_OFFSET(0x1E878E00)
#define KKIACMJGIKN_EPMJFDHNJGN_OFFSET UNITYSDK_OFFSET(0x1E878E10)
#define KKIACMJGIKN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E878EB0)
#define KKIACMJGIKN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E878E30)
#define KKIACMJGIKN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E878FB0)
#define KKIACMJGIKN_GNNKCNOLFFA_OFFSET UNITYSDK_OFFSET(0x1E878DF0)
#define KKIACMJGIKN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E878C80)
#define KKIACMJGIKN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E879410)
#define KKIACMJGIKN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8793B0)
#define KKIACMJGIKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E878CB0)
#define KKIACMJGIKN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8790B0)
#define KKIACMJGIKN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E879110)

	class KKIACMJGIKN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EKFAEMIPFBC; // 0x18
		::System::UInt32 ADNEOLENHFB; // 0x20
		::System::UInt32 EHNAHMHALIK; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KKIACMJGIKN")->GetStaticField(0xE8E0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_PPMNMGAMEFD()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "KKIACMJGIKN")->GetStaticField(0xE8E8);
		}

		// static const ::System::Object KPMCIOLIHAE; // 0x0
		// static const ::System::Object LBCOPJCOFDP; // 0x0
		// static const ::System::Object FIJDBOIPPGO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KKIACMJGIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKIACMJGIKN*))((::PBYTE)hIl2Cpp + KKIACMJGIKN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KKIACMJGIKN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KKIACMJGIKN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KKIACMJGIKN* Clone()
		{
			return ((::KKIACMJGIKN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_CLONE_OFFSET))(this);
		}

		::System::UInt32 DCADELCNPFJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_DCADELCNPFJ_OFFSET))(this);
		}

		::System::Void GNNKCNOLFFA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKIACMJGIKN_GNNKCNOLFFA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EHINDNMNAOH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_EHINDNMNAOH_OFFSET))(this);
		}

		::System::UInt32 EPMJFDHNJGN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_EPMJFDHNJGN_OFFSET))(this);
		}

		::System::Void COLAIKCLCLA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KKIACMJGIKN_COLAIKCLCLA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KKIACMJGIKN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KKIACMJGIKN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KKIACMJGIKN*))((::PBYTE)hIl2Cpp + KKIACMJGIKN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KKIACMJGIKN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKIACMJGIKN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KKIACMJGIKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KKIACMJGIKN*))((::PBYTE)hIl2Cpp + KKIACMJGIKN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KKIACMJGIKN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
