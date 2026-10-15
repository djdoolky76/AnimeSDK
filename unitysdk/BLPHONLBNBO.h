#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLPHONLBNBO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BLPHONLBNBO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF3A300)
#define BLPHONLBNBO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF3A5D0)
#define BLPHONLBNBO_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF39F50)
#define BLPHONLBNBO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF39F20)
#define BLPHONLBNBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF39F10)
#define BLPHONLBNBO_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1DF39FC0)
#define BLPHONLBNBO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF3A0C0)
#define BLPHONLBNBO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF39FE0)
#define BLPHONLBNBO_FLNBPIICMDL_OFFSET UNITYSDK_OFFSET(0x1DF39FB0)
#define BLPHONLBNBO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF3A190)
#define BLPHONLBNBO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF39ED0)
#define BLPHONLBNBO_LPAJDOKIGHA_OFFSET UNITYSDK_OFFSET(0x1DF39FA0)
#define BLPHONLBNBO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF3A450)
#define BLPHONLBNBO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF3A410)
#define BLPHONLBNBO_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1DF39FD0)
#define BLPHONLBNBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF39F00)
#define BLPHONLBNBO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF3A1C0)
#define BLPHONLBNBO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF3A220)

inline static constexpr unsigned int BLPHONLBNBO_TypeDefinitionIndex = 32316;

	class BLPHONLBNBO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 BANPOIIJGMG; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::BLPHONLBNBO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BLPHONLBNBO*>**)UnitySDK::FromName("", "BLPHONLBNBO")->GetStaticField(0x5BD50);
		}

		// static const ::System::Object LOPLGJAHIFF; // 0x0
		// static const ::System::Object IEAPGPOMBIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BLPHONLBNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLPHONLBNBO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BLPHONLBNBO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BLPHONLBNBO*>*(*)())((::PBYTE)hIl2Cpp + BLPHONLBNBO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BLPHONLBNBO* Clone()
		{
			return ((::BLPHONLBNBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CLONE_OFFSET))(this);
		}

		::System::UInt32 LPAJDOKIGHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_LPAJDOKIGHA_OFFSET))(this);
		}

		::System::Void FLNBPIICMDL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPHONLBNBO_FLNBPIICMDL_OFFSET))(this, a1);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BLPHONLBNBO_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BLPHONLBNBO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BLPHONLBNBO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BLPHONLBNBO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BLPHONLBNBO*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BLPHONLBNBO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
