#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGIHCKPGACF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGIHCKPGACF_AAMOOFDMECN_OFFSET UNITYSDK_OFFSET(0x2026A260)
#define GGIHCKPGACF_CAGMKBKHJND_OFFSET UNITYSDK_OFFSET(0x2026A250)
#define GGIHCKPGACF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2026A670)
#define GGIHCKPGACF_CCTOR_OFFSET UNITYSDK_OFFSET(0x2026AA90)
#define GGIHCKPGACF_CLONE_OFFSET UNITYSDK_OFFSET(0x2026A1F0)
#define GGIHCKPGACF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2026A0D0)
#define GGIHCKPGACF_CTOR_OFFSET UNITYSDK_OFFSET(0x2026A050)
#define GGIHCKPGACF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2026A2A0)
#define GGIHCKPGACF_EQUALS_OFFSET UNITYSDK_OFFSET(0x2026A270)
#define GGIHCKPGACF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x2026A230)
#define GGIHCKPGACF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2026A420)
#define GGIHCKPGACF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2026A010)
#define GGIHCKPGACF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2026A940)
#define GGIHCKPGACF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2026A7E0)
#define GGIHCKPGACF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x2026A220)
#define GGIHCKPGACF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2026A040)
#define GGIHCKPGACF_PPHOPFMHGDK_OFFSET UNITYSDK_OFFSET(0x2026A240)
#define GGIHCKPGACF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2026A4D0)
#define GGIHCKPGACF_WRITETO_OFFSET UNITYSDK_OFFSET(0x2026A530)

inline static constexpr unsigned int GGIHCKPGACF_TypeDefinitionIndex = 33084;

	class GGIHCKPGACF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* DCPLMCEPGIA; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* NBICODBPJLO; // 0x20
		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* CIHDGHHFLOO; // 0x28
		::System::UInt32 NAEACGPKNNH; // 0x30
		static ::Google::Protobuf::MessageParser_1<::GGIHCKPGACF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GGIHCKPGACF*>**)UnitySDK::FromName("", "GGIHCKPGACF")->GetStaticField(0xDEF0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_EOHJLEMOJKG()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("", "GGIHCKPGACF")->GetStaticField(0xDEF8);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_PCMOFODPNID()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("", "GGIHCKPGACF")->GetStaticField(0xDF00);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::String*>** StaticGet_HMOPJGOHFHJ()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::String*>**)UnitySDK::FromName("", "GGIHCKPGACF")->GetStaticField(0xDF08);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LDPBAEGDPHJ; // 0x0
		// static const ::System::Object OAODOMDMOGE; // 0x0
		// static const ::System::Object DBBLMJHLHGA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGIHCKPGACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGIHCKPGACF*))((::PBYTE)hIl2Cpp + GGIHCKPGACF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGIHCKPGACF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GGIHCKPGACF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GGIHCKPGACF*>*(*)())((::PBYTE)hIl2Cpp + GGIHCKPGACF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGIHCKPGACF* Clone()
		{
			return ((::GGIHCKPGACF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGIHCKPGACF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* PPHOPFMHGDK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_PPHOPFMHGDK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* CAGMKBKHJND()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_CAGMKBKHJND_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::String*>* AAMOOFDMECN()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_AAMOOFDMECN_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGIHCKPGACF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGIHCKPGACF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGIHCKPGACF*))((::PBYTE)hIl2Cpp + GGIHCKPGACF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGIHCKPGACF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGIHCKPGACF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGIHCKPGACF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGIHCKPGACF*))((::PBYTE)hIl2Cpp + GGIHCKPGACF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGIHCKPGACF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
