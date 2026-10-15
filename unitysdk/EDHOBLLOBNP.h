#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EDHOBLLOBNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EDHOBLLOBNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E25FA30)
#define EDHOBLLOBNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25FDE0)
#define EDHOBLLOBNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E25F410)
#define EDHOBLLOBNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E25F310)
#define EDHOBLLOBNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25F280)
#define EDHOBLLOBNP_DHOFFNPCHLO_OFFSET UNITYSDK_OFFSET(0x1E25F490)
#define EDHOBLLOBNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E25F520)
#define EDHOBLLOBNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E25F4C0)
#define EDHOBLLOBNP_FKKAEDOIFMJ_OFFSET UNITYSDK_OFFSET(0x1E25F4B0)
#define EDHOBLLOBNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E25F640)
#define EDHOBLLOBNP_GKPNKNEFECH_OFFSET UNITYSDK_OFFSET(0x1E25F460)
#define EDHOBLLOBNP_GONGLAIPCJN_OFFSET UNITYSDK_OFFSET(0x1E25F4A0)
#define EDHOBLLOBNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E25F210)
#define EDHOBLLOBNP_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x1E25F480)
#define EDHOBLLOBNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E25FC90)
#define EDHOBLLOBNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E25FC20)
#define EDHOBLLOBNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E25F270)
#define EDHOBLLOBNP_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x1E25F470)
#define EDHOBLLOBNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E25F810)
#define EDHOBLLOBNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E25F870)

	class EDHOBLLOBNP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* POPDLFONEPG; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HENAGGGMACB; // 0x20
		::System::UInt32 NPLCNHBFDJP; // 0x28
		::System::UInt32 KCIKBKIBOPB; // 0x2C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EDHOBLLOBNP")->GetStaticField(0xE0F0);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_GICFHOGMGDC()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EDHOBLLOBNP")->GetStaticField(0xE0F8);
		}

		static ::Google::Protobuf::FieldCodec** StaticGet_FCPJHNEIGMF()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "EDHOBLLOBNP")->GetStaticField(0xE100);
		}

		// static const ::System::Object NKLJOEEDJGL; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object PPNBMLMCPKK; // 0x0
		// static const ::System::Object PGFBMKJNPFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EDHOBLLOBNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDHOBLLOBNP*))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EDHOBLLOBNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EDHOBLLOBNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EDHOBLLOBNP* Clone()
		{
			return ((::EDHOBLLOBNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GKPNKNEFECH()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_GKPNKNEFECH_OFFSET))(this);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* DHOFFNPCHLO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_DHOFFNPCHLO_OFFSET))(this);
		}

		::System::UInt32 GONGLAIPCJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_GONGLAIPCJN_OFFSET))(this);
		}

		::System::Void FKKAEDOIFMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_FKKAEDOIFMJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EDHOBLLOBNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EDHOBLLOBNP*))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EDHOBLLOBNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EDHOBLLOBNP*))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EDHOBLLOBNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
