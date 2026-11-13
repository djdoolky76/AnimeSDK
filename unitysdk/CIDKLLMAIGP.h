#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIDKLLMAIGP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CIDKLLMAIGP_APMIGLEIMMO_OFFSET UNITYSDK_OFFSET(0x1F841960)
#define CIDKLLMAIGP_BNIPKJKBICO_OFFSET UNITYSDK_OFFSET(0x1F8419C0)
#define CIDKLLMAIGP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F841E50)
#define CIDKLLMAIGP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8421E0)
#define CIDKLLMAIGP_CLILNPACBJG_OFFSET UNITYSDK_OFFSET(0x1F8419B0)
#define CIDKLLMAIGP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F8418D0)
#define CIDKLLMAIGP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F841880)
#define CIDKLLMAIGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F841870)
#define CIDKLLMAIGP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F841AE0)
#define CIDKLLMAIGP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F8419D0)
#define CIDKLLMAIGP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1F841940)
#define CIDKLLMAIGP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F841BF0)
#define CIDKLLMAIGP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F841830)
#define CIDKLLMAIGP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F842010)
#define CIDKLLMAIGP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F841FB0)
#define CIDKLLMAIGP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1F841930)
#define CIDKLLMAIGP_OEEAMGALALP_OFFSET UNITYSDK_OFFSET(0x1F841950)
#define CIDKLLMAIGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F841860)
#define CIDKLLMAIGP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F841CA0)
#define CIDKLLMAIGP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F841D00)

inline static constexpr unsigned int CIDKLLMAIGP_TypeDefinitionIndex = 28327;

	class CIDKLLMAIGP : public ::System::Object
	{
	public:
		::System::String* LKGNNEIDBII; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 IPFHHCHDDAC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::CIDKLLMAIGP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CIDKLLMAIGP*>**)UnitySDK::FromName("", "CIDKLLMAIGP")->GetStaticField(0xFA80);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EPNLPKGNFCM; // 0x0
		// static const ::System::Object NPNONCLADFD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CIDKLLMAIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIDKLLMAIGP*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIDKLLMAIGP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CIDKLLMAIGP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CIDKLLMAIGP*>*(*)())((::PBYTE)hIl2Cpp + CIDKLLMAIGP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CIDKLLMAIGP* Clone()
		{
			return ((::CIDKLLMAIGP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::String* OEEAMGALALP()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_OEEAMGALALP_OFFSET))(this);
		}

		::System::Void APMIGLEIMMO(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_APMIGLEIMMO_OFFSET))(this, a1);
		}

		::System::UInt32 CLILNPACBJG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_CLILNPACBJG_OFFSET))(this);
		}

		::System::Void BNIPKJKBICO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_BNIPKJKBICO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CIDKLLMAIGP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CIDKLLMAIGP*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CIDKLLMAIGP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CIDKLLMAIGP*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CIDKLLMAIGP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
