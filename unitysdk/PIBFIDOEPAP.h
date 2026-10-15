#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIBFIDOEPAP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PIBFIDOEPAP_AEOLLAKHLGK_OFFSET UNITYSDK_OFFSET(0x1DF40CB0)
#define PIBFIDOEPAP_AGAMIFMFAKF_OFFSET UNITYSDK_OFFSET(0x1DF40CA0)
#define PIBFIDOEPAP_BMEAMKMEBMF_OFFSET UNITYSDK_OFFSET(0x1DF40CC0)
#define PIBFIDOEPAP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF41020)
#define PIBFIDOEPAP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF412F0)
#define PIBFIDOEPAP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF40C20)
#define PIBFIDOEPAP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF40BF0)
#define PIBFIDOEPAP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF40BE0)
#define PIBFIDOEPAP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF40DE0)
#define PIBFIDOEPAP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF40CD0)
#define PIBFIDOEPAP_FFLNOHBNFHL_OFFSET UNITYSDK_OFFSET(0x1DF40C90)
#define PIBFIDOEPAP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF40EB0)
#define PIBFIDOEPAP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF40B70)
#define PIBFIDOEPAP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF41170)
#define PIBFIDOEPAP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF41130)
#define PIBFIDOEPAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF40BD0)
#define PIBFIDOEPAP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF40EE0)
#define PIBFIDOEPAP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF40F40)

inline static constexpr unsigned int PIBFIDOEPAP_TypeDefinitionIndex = 28871;

	class PIBFIDOEPAP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BLCOOMJICJC; // 0x18
		::System::UInt32 AFHKEGMKOJG; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PIBFIDOEPAP")->GetStaticField(0x40730);
		}

		// static const ::System::Object BOJDOPJDNBO; // 0x0
		// static const ::System::Object HMILGJNJNCE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PIBFIDOEPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBFIDOEPAP*))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PIBFIDOEPAP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PIBFIDOEPAP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PIBFIDOEPAP* Clone()
		{
			return ((::PIBFIDOEPAP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_CLONE_OFFSET))(this);
		}

		::System::UInt32 FFLNOHBNFHL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_FFLNOHBNFHL_OFFSET))(this);
		}

		::System::Void AGAMIFMFAKF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_AGAMIFMFAKF_OFFSET))(this, a1);
		}

		::System::UInt32 AEOLLAKHLGK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_AEOLLAKHLGK_OFFSET))(this);
		}

		::System::Void BMEAMKMEBMF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_BMEAMKMEBMF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PIBFIDOEPAP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PIBFIDOEPAP*))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PIBFIDOEPAP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PIBFIDOEPAP*))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PIBFIDOEPAP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
