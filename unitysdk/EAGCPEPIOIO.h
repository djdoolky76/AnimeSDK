#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAGCPEPIOIO;
class JECNOELJLKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAGCPEPIOIO_ANALOEDDDHD_OFFSET UNITYSDK_OFFSET(0x1E228490)
#define EAGCPEPIOIO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E228A30)
#define EAGCPEPIOIO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E228DD0)
#define EAGCPEPIOIO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2283F0)
#define EAGCPEPIOIO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E228360)
#define EAGCPEPIOIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E228350)
#define EAGCPEPIOIO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E228620)
#define EAGCPEPIOIO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2284B0)
#define EAGCPEPIOIO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2288F0)
#define EAGCPEPIOIO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E228310)
#define EAGCPEPIOIO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E228BB0)
#define EAGCPEPIOIO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E228A90)
#define EAGCPEPIOIO_OAJDGCDLFLL_OFFSET UNITYSDK_OFFSET(0x1E2284A0)
#define EAGCPEPIOIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E228340)
#define EAGCPEPIOIO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E228940)
#define EAGCPEPIOIO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2289A0)

inline static constexpr unsigned int EAGCPEPIOIO_TypeDefinitionIndex = 28766;

	class EAGCPEPIOIO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JECNOELJLKO* CMDGAIOLHKP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAGCPEPIOIO")->GetStaticField(0x48B40);
		}

		// static const ::System::Object BFJOJJHJAIJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAGCPEPIOIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGCPEPIOIO*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAGCPEPIOIO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAGCPEPIOIO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAGCPEPIOIO* Clone()
		{
			return ((::EAGCPEPIOIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_CLONE_OFFSET))(this);
		}

		::JECNOELJLKO* ANALOEDDDHD()
		{
			return ((::JECNOELJLKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_ANALOEDDDHD_OFFSET))(this);
		}

		::System::Void OAJDGCDLFLL(::JECNOELJLKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JECNOELJLKO*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_OAJDGCDLFLL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAGCPEPIOIO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAGCPEPIOIO*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAGCPEPIOIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAGCPEPIOIO*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAGCPEPIOIO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
