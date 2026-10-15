#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MBCOHBBDJAA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace Proto { class ItemList; }
namespace System { class Object; }
namespace System { class String; }

#define MBCOHBBDJAA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9E1770)
#define MBCOHBBDJAA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1A90)
#define MBCOHBBDJAA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9E11D0)
#define MBCOHBBDJAA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9E1160)
#define MBCOHBBDJAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1150)
#define MBCOHBBDJAA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9E1410)
#define MBCOHBBDJAA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9E1290)
#define MBCOHBBDJAA_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9E1280)
#define MBCOHBBDJAA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E9E1590)
#define MBCOHBBDJAA_IIOGBPJHCFM_OFFSET UNITYSDK_OFFSET(0x1E9E1260)
#define MBCOHBBDJAA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9E1110)
#define MBCOHBBDJAA_KIGOKLJICON_OFFSET UNITYSDK_OFFSET(0x1E9E1250)
#define MBCOHBBDJAA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9E18D0)
#define MBCOHBBDJAA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E9E1840)
#define MBCOHBBDJAA_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9E1270)
#define MBCOHBBDJAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9E1140)
#define MBCOHBBDJAA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9E1630)
#define MBCOHBBDJAA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9E1690)

inline static constexpr unsigned int MBCOHBBDJAA_TypeDefinitionIndex = 32227;

	class MBCOHBBDJAA : public ::System::Object
	{
	public:
		::Proto::ItemList* FOOECIHLNOF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MBCOHBBDJAA")->GetStaticField(0x430B0);
		}

		// static const ::System::Object BDFIJFHMINA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MBCOHBBDJAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBCOHBBDJAA*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MBCOHBBDJAA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MBCOHBBDJAA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MBCOHBBDJAA* Clone()
		{
			return ((::MBCOHBBDJAA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_CLONE_OFFSET))(this);
		}

		::Proto::ItemList* KIGOKLJICON()
		{
			return ((::Proto::ItemList*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_KIGOKLJICON_OFFSET))(this);
		}

		::System::Void IIOGBPJHCFM(::Proto::ItemList* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Proto::ItemList*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_IIOGBPJHCFM_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MBCOHBBDJAA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MBCOHBBDJAA*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MBCOHBBDJAA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MBCOHBBDJAA*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MBCOHBBDJAA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
