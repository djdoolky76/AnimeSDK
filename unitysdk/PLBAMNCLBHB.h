#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNLKMHLAPHC;
class MMBBHFNJILI;
class PLBAMNCLBHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLBAMNCLBHB_ABGBJFODNON_OFFSET UNITYSDK_OFFSET(0x1DF9D310)
#define PLBAMNCLBHB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF9D7D0)
#define PLBAMNCLBHB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF9DB80)
#define PLBAMNCLBHB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF9D280)
#define PLBAMNCLBHB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF9D1A0)
#define PLBAMNCLBHB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF9D140)
#define PLBAMNCLBHB_EFPJCNOEKLI_OFFSET UNITYSDK_OFFSET(0x1DF9D2E0)
#define PLBAMNCLBHB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF9D390)
#define PLBAMNCLBHB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF9D330)
#define PLBAMNCLBHB_FHFIPLCLBKK_OFFSET UNITYSDK_OFFSET(0x1DF9D300)
#define PLBAMNCLBHB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF9D4F0)
#define PLBAMNCLBHB_GLHEHIDAPCN_OFFSET UNITYSDK_OFFSET(0x1DF9D2F0)
#define PLBAMNCLBHB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF9D0D0)
#define PLBAMNCLBHB_LKPKFDPJOLD_OFFSET UNITYSDK_OFFSET(0x1DF9D2D0)
#define PLBAMNCLBHB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF9DA30)
#define PLBAMNCLBHB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF9D920)
#define PLBAMNCLBHB_NIAMBMOEMJJ_OFFSET UNITYSDK_OFFSET(0x1DF9D320)
#define PLBAMNCLBHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF9D130)
#define PLBAMNCLBHB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF9D580)
#define PLBAMNCLBHB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF9D5E0)

	class PLBAMNCLBHB : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DNLKMHLAPHC*>* AEEDCDHMINN; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::MMBBHFNJILI*>* EHBCNEABANI; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		::System::Boolean LIGJMCOOLIJ; // 0x28
		::System::Byte _padding0[0x3];
		::System::UInt32 CMDHGBJDDGL; // 0x2C
		static ::Google::Protobuf::FieldCodec** StaticGet_ODAKJNOCIFK()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PLBAMNCLBHB")->GetStaticField(0x4B6B0);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PLBAMNCLBHB")->GetStaticField(0x4B6B8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_EEPJDNAMHBL()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "PLBAMNCLBHB")->GetStaticField(0x4B6C0);
		}

		// static const ::System::Object EGDCNNHOBKG; // 0x0
		// static const ::System::Object COPKFJJMANI; // 0x0
		// static const ::System::Object DNKDGPBAJHH; // 0x0
		// static const ::System::Object LGEEAGOIOHA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLBAMNCLBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLBAMNCLBHB*))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLBAMNCLBHB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PLBAMNCLBHB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLBAMNCLBHB* Clone()
		{
			return ((::PLBAMNCLBHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_CLONE_OFFSET))(this);
		}

		::System::Boolean LKPKFDPJOLD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_LKPKFDPJOLD_OFFSET))(this);
		}

		::System::Void EFPJCNOEKLI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_EFPJCNOEKLI_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::MMBBHFNJILI*>* GLHEHIDAPCN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::MMBBHFNJILI*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_GLHEHIDAPCN_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DNLKMHLAPHC*>* FHFIPLCLBKK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DNLKMHLAPHC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_FHFIPLCLBKK_OFFSET))(this);
		}

		::System::UInt32 ABGBJFODNON()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_ABGBJFODNON_OFFSET))(this);
		}

		::System::Void NIAMBMOEMJJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_NIAMBMOEMJJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLBAMNCLBHB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLBAMNCLBHB*))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLBAMNCLBHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLBAMNCLBHB*))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLBAMNCLBHB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
