#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCNKCCPMKLE;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DCNKCCPMKLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E14AE60)
#define DCNKCCPMKLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14B1E0)
#define DCNKCCPMKLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E14A830)
#define DCNKCCPMKLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E14A7E0)
#define DCNKCCPMKLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14A7D0)
#define DCNKCCPMKLE_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E14A8B0)
#define DCNKCCPMKLE_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E14A8C0)
#define DCNKCCPMKLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E14AA80)
#define DCNKCCPMKLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E14A8F0)
#define DCNKCCPMKLE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E14A8E0)
#define DCNKCCPMKLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E14AC10)
#define DCNKCCPMKLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E14A790)
#define DCNKCCPMKLE_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x1E14A890)
#define DCNKCCPMKLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E14B030)
#define DCNKCCPMKLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E14AFB0)
#define DCNKCCPMKLE_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x1E14A8A0)
#define DCNKCCPMKLE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E14A8D0)
#define DCNKCCPMKLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E14A7C0)
#define DCNKCCPMKLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E14ACC0)
#define DCNKCCPMKLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E14AD20)

inline static constexpr unsigned int DCNKCCPMKLE_TypeDefinitionIndex = 30964;

	class DCNKCCPMKLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 MEGGDDIDHFM; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DCNKCCPMKLE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DCNKCCPMKLE*>**)UnitySDK::FromName("", "DCNKCCPMKLE")->GetStaticField(0x25640);
		}

		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DCNKCCPMKLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNKCCPMKLE*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNKCCPMKLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DCNKCCPMKLE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DCNKCCPMKLE*>*(*)())((::PBYTE)hIl2Cpp + DCNKCCPMKLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DCNKCCPMKLE* Clone()
		{
			return ((::DCNKCCPMKLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DCNKCCPMKLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DCNKCCPMKLE*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DCNKCCPMKLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DCNKCCPMKLE*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DCNKCCPMKLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
