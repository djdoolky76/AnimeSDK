#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHCLMAGAHPN;
class NPEHFAHLDNM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHCLMAGAHPN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E26D020)
#define AHCLMAGAHPN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26D2F0)
#define AHCLMAGAHPN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E26CA90)
#define AHCLMAGAHPN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E26CA40)
#define AHCLMAGAHPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26CA30)
#define AHCLMAGAHPN_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1E26CB10)
#define AHCLMAGAHPN_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1E26CB20)
#define AHCLMAGAHPN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E26CCB0)
#define AHCLMAGAHPN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E26CB30)
#define AHCLMAGAHPN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E26CE30)
#define AHCLMAGAHPN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E26C9F0)
#define AHCLMAGAHPN_JNFBHFOFHFO_OFFSET UNITYSDK_OFFSET(0x1E26CB00)
#define AHCLMAGAHPN_KLKAIAKLHMF_OFFSET UNITYSDK_OFFSET(0x1E26CAF0)
#define AHCLMAGAHPN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E26D160)
#define AHCLMAGAHPN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E26D0F0)
#define AHCLMAGAHPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E26CA20)
#define AHCLMAGAHPN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E26CEE0)
#define AHCLMAGAHPN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E26CF40)

inline static constexpr unsigned int AHCLMAGAHPN_TypeDefinitionIndex = 32318;

	class AHCLMAGAHPN : public ::System::Object
	{
	public:
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 AMOPIFLCGOO; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "AHCLMAGAHPN")->GetStaticField(0x31460);
		}

		// static const ::System::Object KKHPBDAEOLM; // 0x0
		// static const ::System::Object OAMMBKNIIJL; // 0x0
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

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + AHCLMAGAHPN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHCLMAGAHPN* Clone()
		{
			return ((::AHCLMAGAHPN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLKAIAKLHMF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_KLKAIAKLHMF_OFFSET))(this);
		}

		::System::Void JNFBHFOFHFO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_JNFBHFOFHFO_OFFSET))(this, a1);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + AHCLMAGAHPN_EMBDACAJHCG_OFFSET))(this, a1);
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
