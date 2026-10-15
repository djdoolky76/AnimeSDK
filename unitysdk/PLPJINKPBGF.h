#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEHFAHLDNM;
class PLPJINKPBGF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLPJINKPBGF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFA83F0)
#define PLPJINKPBGF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA8760)
#define PLPJINKPBGF_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFA7DC0)
#define PLPJINKPBGF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFA7D70)
#define PLPJINKPBGF_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA7D60)
#define PLPJINKPBGF_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1DFA7E60)
#define PLPJINKPBGF_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1DFA7E70)
#define PLPJINKPBGF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFA8010)
#define PLPJINKPBGF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFA7E80)
#define PLPJINKPBGF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFA7E30)
#define PLPJINKPBGF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFA81A0)
#define PLPJINKPBGF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFA7D20)
#define PLPJINKPBGF_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x1DFA7E40)
#define PLPJINKPBGF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFA85B0)
#define PLPJINKPBGF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFA8530)
#define PLPJINKPBGF_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x1DFA7E50)
#define PLPJINKPBGF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFA7E20)
#define PLPJINKPBGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFA7D50)
#define PLPJINKPBGF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFA8250)
#define PLPJINKPBGF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFA82B0)

inline static constexpr unsigned int PLPJINKPBGF_TypeDefinitionIndex = 30523;

	class PLPJINKPBGF : public ::System::Object
	{
	public:
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 MEGGDDIDHFM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::PLPJINKPBGF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLPJINKPBGF*>**)UnitySDK::FromName("", "PLPJINKPBGF")->GetStaticField(0x4C9B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLPJINKPBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLPJINKPBGF*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLPJINKPBGF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLPJINKPBGF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLPJINKPBGF*>*(*)())((::PBYTE)hIl2Cpp + PLPJINKPBGF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLPJINKPBGF* Clone()
		{
			return ((::PLPJINKPBGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLPJINKPBGF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLPJINKPBGF_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLPJINKPBGF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLPJINKPBGF*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLPJINKPBGF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLPJINKPBGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLPJINKPBGF*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLPJINKPBGF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
