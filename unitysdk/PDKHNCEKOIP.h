#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDKHNCEKOIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDKHNCEKOIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF11690)
#define PDKHNCEKOIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF118B0)
#define PDKHNCEKOIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF112E0)
#define PDKHNCEKOIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF112B0)
#define PDKHNCEKOIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF112A0)
#define PDKHNCEKOIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF11410)
#define PDKHNCEKOIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF11340)
#define PDKHNCEKOIP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DF11330)
#define PDKHNCEKOIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF11580)
#define PDKHNCEKOIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF11260)
#define PDKHNCEKOIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF11750)
#define PDKHNCEKOIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF11720)
#define PDKHNCEKOIP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DF11320)
#define PDKHNCEKOIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF11290)
#define PDKHNCEKOIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF115B0)
#define PDKHNCEKOIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF11610)

inline static constexpr unsigned int PDKHNCEKOIP_TypeDefinitionIndex = 30988;

	class PDKHNCEKOIP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PDKHNCEKOIP")->GetStaticField(0x37BC0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDKHNCEKOIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDKHNCEKOIP*))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDKHNCEKOIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PDKHNCEKOIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDKHNCEKOIP* Clone()
		{
			return ((::PDKHNCEKOIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDKHNCEKOIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDKHNCEKOIP*))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDKHNCEKOIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDKHNCEKOIP*))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDKHNCEKOIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
