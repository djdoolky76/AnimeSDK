#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHPEPPKFMJO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHPEPPKFMJO_BLILPNPEACH_OFFSET UNITYSDK_OFFSET(0x1DF3F370)
#define PHPEPPKFMJO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3F6D0)
#define PHPEPPKFMJO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3F9A0)
#define PHPEPPKFMJO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF3F320)
#define PHPEPPKFMJO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF3F2F0)
#define PHPEPPKFMJO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF3F2E0)
#define PHPEPPKFMJO_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1DF3F390)
#define PHPEPPKFMJO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3F490)
#define PHPEPPKFMJO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF3F3B0)
#define PHPEPPKFMJO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3F560)
#define PHPEPPKFMJO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF3F2A0)
#define PHPEPPKFMJO_KIJDPPMHBME_OFFSET UNITYSDK_OFFSET(0x1DF3F380)
#define PHPEPPKFMJO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF3F820)
#define PHPEPPKFMJO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF3F7E0)
#define PHPEPPKFMJO_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1DF3F3A0)
#define PHPEPPKFMJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF3F2D0)
#define PHPEPPKFMJO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3F590)
#define PHPEPPKFMJO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3F5F0)

inline static constexpr unsigned int PHPEPPKFMJO_TypeDefinitionIndex = 35129;

	class PHPEPPKFMJO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FOBLPJCIGJE; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PHPEPPKFMJO")->GetStaticField(0x40320);
		}

		// static const ::System::Object NOBLDDEFEKI; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHPEPPKFMJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHPEPPKFMJO*))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHPEPPKFMJO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PHPEPPKFMJO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHPEPPKFMJO* Clone()
		{
			return ((::PHPEPPKFMJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_CLONE_OFFSET))(this);
		}

		::System::UInt32 BLILPNPEACH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_BLILPNPEACH_OFFSET))(this);
		}

		::System::Void KIJDPPMHBME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_KIJDPPMHBME_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHPEPPKFMJO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHPEPPKFMJO*))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHPEPPKFMJO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHPEPPKFMJO*))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHPEPPKFMJO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
