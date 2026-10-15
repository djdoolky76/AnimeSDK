#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PALAOPCBAPC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PALAOPCBAPC_ALIDAFMCJGG_OFFSET UNITYSDK_OFFSET(0x1DEEFC20)
#define PALAOPCBAPC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DEEFF70)
#define PALAOPCBAPC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEF0240)
#define PALAOPCBAPC_CLONE_OFFSET UNITYSDK_OFFSET(0x1DEEFBC0)
#define PALAOPCBAPC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DEEFB90)
#define PALAOPCBAPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEEFB80)
#define PALAOPCBAPC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DEEFD30)
#define PALAOPCBAPC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DEEFC50)
#define PALAOPCBAPC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DEEFC40)
#define PALAOPCBAPC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DEEFE00)
#define PALAOPCBAPC_GGIPNHGMPCN_OFFSET UNITYSDK_OFFSET(0x1DEEFC10)
#define PALAOPCBAPC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DEEFB40)
#define PALAOPCBAPC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DEF00C0)
#define PALAOPCBAPC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DEF0080)
#define PALAOPCBAPC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DEEFC30)
#define PALAOPCBAPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DEEFB70)
#define PALAOPCBAPC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DEEFE30)
#define PALAOPCBAPC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DEEFE90)

inline static constexpr unsigned int PALAOPCBAPC_TypeDefinitionIndex = 33772;

	class PALAOPCBAPC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MDHELICKNPE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PALAOPCBAPC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PALAOPCBAPC*>**)UnitySDK::FromName("", "PALAOPCBAPC")->GetStaticField(0x32240);
		}

		// static const ::System::Object HLKDEGJOKIO; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PALAOPCBAPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PALAOPCBAPC*))((::PBYTE)hIl2Cpp + PALAOPCBAPC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PALAOPCBAPC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PALAOPCBAPC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PALAOPCBAPC*>*(*)())((::PBYTE)hIl2Cpp + PALAOPCBAPC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PALAOPCBAPC* Clone()
		{
			return ((::PALAOPCBAPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_CLONE_OFFSET))(this);
		}

		::System::UInt32 GGIPNHGMPCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_GGIPNHGMPCN_OFFSET))(this);
		}

		::System::Void ALIDAFMCJGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PALAOPCBAPC_ALIDAFMCJGG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PALAOPCBAPC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PALAOPCBAPC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PALAOPCBAPC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PALAOPCBAPC*))((::PBYTE)hIl2Cpp + PALAOPCBAPC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PALAOPCBAPC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PALAOPCBAPC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PALAOPCBAPC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PALAOPCBAPC*))((::PBYTE)hIl2Cpp + PALAOPCBAPC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PALAOPCBAPC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
