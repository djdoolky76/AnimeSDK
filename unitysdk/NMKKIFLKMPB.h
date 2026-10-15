#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFJPGILAAON;
class NMKKIFLKMPB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NMKKIFLKMPB_AFMBMHLAHPD_OFFSET UNITYSDK_OFFSET(0x1EB4A330)
#define NMKKIFLKMPB_ANJAMMBMJIE_OFFSET UNITYSDK_OFFSET(0x1EB4A310)
#define NMKKIFLKMPB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB4A890)
#define NMKKIFLKMPB_CBGEKBBDMMO_OFFSET UNITYSDK_OFFSET(0x1EB4A300)
#define NMKKIFLKMPB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4AC20)
#define NMKKIFLKMPB_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB4A260)
#define NMKKIFLKMPB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB4A1F0)
#define NMKKIFLKMPB_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A1E0)
#define NMKKIFLKMPB_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1EB4A2E0)
#define NMKKIFLKMPB_ENIKNMBBKBG_OFFSET UNITYSDK_OFFSET(0x1EB4A320)
#define NMKKIFLKMPB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB4A480)
#define NMKKIFLKMPB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB4A360)
#define NMKKIFLKMPB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB4A610)
#define NMKKIFLKMPB_HIONJKFLDNM_OFFSET UNITYSDK_OFFSET(0x1EB4A350)
#define NMKKIFLKMPB_JDOHDIGHMHN_OFFSET UNITYSDK_OFFSET(0x1EB4A340)
#define NMKKIFLKMPB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB4A1A0)
#define NMKKIFLKMPB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB4AB10)
#define NMKKIFLKMPB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB4A9E0)
#define NMKKIFLKMPB_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1EB4A2F0)
#define NMKKIFLKMPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB4A1D0)
#define NMKKIFLKMPB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB4A660)
#define NMKKIFLKMPB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB4A6C0)

inline static constexpr unsigned int NMKKIFLKMPB_TypeDefinitionIndex = 27963;

	class NMKKIFLKMPB : public ::System::Object
	{
	public:
		::DFJPGILAAON* PJFFAIDNPAP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLBKCMIIFFP; // 0x20
		::System::Boolean ALHOLMPDJKO; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 NHMLHCNGJFM; // 0x28
		static ::Google::Protobuf::MessageParser_1<::NMKKIFLKMPB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NMKKIFLKMPB*>**)UnitySDK::FromName("", "NMKKIFLKMPB")->GetStaticField(0x6AAC0);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object PLGABPIAIHO; // 0x0
		// static const ::System::Object NOBNEKGEAPH; // 0x0
		// static const ::System::Object DHCMIMFJPPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NMKKIFLKMPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMKKIFLKMPB*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMKKIFLKMPB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NMKKIFLKMPB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NMKKIFLKMPB*>*(*)())((::PBYTE)hIl2Cpp + NMKKIFLKMPB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NMKKIFLKMPB* Clone()
		{
			return ((::NMKKIFLKMPB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::DFJPGILAAON* CBGEKBBDMMO()
		{
			return ((::DFJPGILAAON*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_CBGEKBBDMMO_OFFSET))(this);
		}

		::System::Void ANJAMMBMJIE(::DFJPGILAAON* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFJPGILAAON*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_ANJAMMBMJIE_OFFSET))(this, a1);
		}

		::System::UInt32 ENIKNMBBKBG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_ENIKNMBBKBG_OFFSET))(this);
		}

		::System::Void AFMBMHLAHPD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_AFMBMHLAHPD_OFFSET))(this, a1);
		}

		::System::Boolean JDOHDIGHMHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_JDOHDIGHMHN_OFFSET))(this);
		}

		::System::Void HIONJKFLDNM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_HIONJKFLDNM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NMKKIFLKMPB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NMKKIFLKMPB*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NMKKIFLKMPB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NMKKIFLKMPB*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NMKKIFLKMPB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
