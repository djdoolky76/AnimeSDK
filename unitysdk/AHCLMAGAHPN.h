#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHCLMAGAHPN;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHCLMAGAHPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204F9B70)
#define AHCLMAGAHPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x204F9E40)
#define AHCLMAGAHPN_CLONE_OFFSET UNITYSDK_OFFSET(0x204F95C0)
#define AHCLMAGAHPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204F9560)
#define AHCLMAGAHPN_CTOR_OFFSET UNITYSDK_OFFSET(0x204F9550)
#define AHCLMAGAHPN_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x204F9630)
#define AHCLMAGAHPN_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x204F9640)
#define AHCLMAGAHPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204F97F0)
#define AHCLMAGAHPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x204F9670)
#define AHCLMAGAHPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204F9970)
#define AHCLMAGAHPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204F9510)
#define AHCLMAGAHPN_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x204F9660)
#define AHCLMAGAHPN_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x204F9650)
#define AHCLMAGAHPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204F9CB0)
#define AHCLMAGAHPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204F9C40)
#define AHCLMAGAHPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204F9540)
#define AHCLMAGAHPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204F9A30)
#define AHCLMAGAHPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x204F9A90)

inline static constexpr unsigned int AHCLMAGAHPN_TypeDefinitionIndex = 33231;

	class AHCLMAGAHPN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::System::UInt32 AMOPIFLCGOO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AHCLMAGAHPN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHCLMAGAHPN*>**)UnitySDK::FromName("", "AHCLMAGAHPN")->GetStaticField(0x30C80);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object KKHPBDAEOLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHCLMAGAHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHCLMAGAHPN*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHCLMAGAHPN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHCLMAGAHPN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHCLMAGAHPN*>*(*)())((::PBYTE)hIl2Cpp + AHCLMAGAHPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHCLMAGAHPN* Clone()
		{
			return ((::AHCLMAGAHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHCLMAGAHPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHCLMAGAHPN*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHCLMAGAHPN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHCLMAGAHPN*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
