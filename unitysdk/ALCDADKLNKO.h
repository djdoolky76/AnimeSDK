#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALCDADKLNKO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ALCDADKLNKO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20014F00)
#define ALCDADKLNKO_CCTOR_OFFSET UNITYSDK_OFFSET(0x200151D0)
#define ALCDADKLNKO_CLONE_OFFSET UNITYSDK_OFFSET(0x20014B00)
#define ALCDADKLNKO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20014AD0)
#define ALCDADKLNKO_CTOR_OFFSET UNITYSDK_OFFSET(0x20014AC0)
#define ALCDADKLNKO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20014CC0)
#define ALCDADKLNKO_EQUALS_OFFSET UNITYSDK_OFFSET(0x20014BB0)
#define ALCDADKLNKO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20014D90)
#define ALCDADKLNKO_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x20014B70)
#define ALCDADKLNKO_GMCOLFLMGKK_OFFSET UNITYSDK_OFFSET(0x20014B90)
#define ALCDADKLNKO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20014A50)
#define ALCDADKLNKO_JPCONKBGPNL_OFFSET UNITYSDK_OFFSET(0x20014BA0)
#define ALCDADKLNKO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20015050)
#define ALCDADKLNKO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20015010)
#define ALCDADKLNKO_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x20014B80)
#define ALCDADKLNKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20014AB0)
#define ALCDADKLNKO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20014DC0)
#define ALCDADKLNKO_WRITETO_OFFSET UNITYSDK_OFFSET(0x20014E20)

inline static constexpr unsigned int ALCDADKLNKO_TypeDefinitionIndex = 28315;

	class ALCDADKLNKO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 IHHANCNMDMA; // 0x18
		::System::UInt32 MICDIDBPLPD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::ALCDADKLNKO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ALCDADKLNKO*>**)UnitySDK::FromName("", "ALCDADKLNKO")->GetStaticField(0x36360);
		}

		// static const ::System::Object FCLKOFBAFMC; // 0x0
		// static const ::System::Object ELLPLDPODJE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ALCDADKLNKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCDADKLNKO*))((::PBYTE)hIl2Cpp + ALCDADKLNKO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ALCDADKLNKO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ALCDADKLNKO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ALCDADKLNKO*>*(*)())((::PBYTE)hIl2Cpp + ALCDADKLNKO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ALCDADKLNKO* Clone()
		{
			return ((::ALCDADKLNKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALCDADKLNKO_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::System::UInt32 GMCOLFLMGKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_GMCOLFLMGKK_OFFSET))(this);
		}

		::System::Void JPCONKBGPNL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALCDADKLNKO_JPCONKBGPNL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ALCDADKLNKO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ALCDADKLNKO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALCDADKLNKO*))((::PBYTE)hIl2Cpp + ALCDADKLNKO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ALCDADKLNKO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALCDADKLNKO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ALCDADKLNKO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALCDADKLNKO*))((::PBYTE)hIl2Cpp + ALCDADKLNKO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ALCDADKLNKO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
