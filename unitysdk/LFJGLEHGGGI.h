#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LFJGLEHGGGI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LFJGLEHGGGI_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1E93EAA0)
#define LFJGLEHGGGI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E93EDE0)
#define LFJGLEHGGGI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E93F0B0)
#define LFJGLEHGGGI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E93EA30)
#define LFJGLEHGGGI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E93EA00)
#define LFJGLEHGGGI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93E9F0)
#define LFJGLEHGGGI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E93EBA0)
#define LFJGLEHGGGI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E93EAC0)
#define LFJGLEHGGGI_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E93EA90)
#define LFJGLEHGGGI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E93EC70)
#define LFJGLEHGGGI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E93E9B0)
#define LFJGLEHGGGI_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1E93EAB0)
#define LFJGLEHGGGI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E93EF30)
#define LFJGLEHGGGI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E93EEF0)
#define LFJGLEHGGGI_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E93EA80)
#define LFJGLEHGGGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E93E9E0)
#define LFJGLEHGGGI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E93ECA0)
#define LFJGLEHGGGI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E93ED00)

	class LFJGLEHGGGI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FOBLPJCIGJE; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LFJGLEHGGGI")->GetStaticField(0x3B0A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NOBLDDEFEKI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LFJGLEHGGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFJGLEHGGGI*))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LFJGLEHGGGI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LFJGLEHGGGI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LFJGLEHGGGI* Clone()
		{
			return ((::LFJGLEHGGGI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LFJGLEHGGGI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFJGLEHGGGI*))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LFJGLEHGGGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LFJGLEHGGGI*))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LFJGLEHGGGI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
