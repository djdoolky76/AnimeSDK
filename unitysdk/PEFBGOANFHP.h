#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEFBGOANFHP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEFBGOANFHP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20669860)
#define PEFBGOANFHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x20669BE0)
#define PEFBGOANFHP_CLONE_OFFSET UNITYSDK_OFFSET(0x20669440)
#define PEFBGOANFHP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20669400)
#define PEFBGOANFHP_CTOR_OFFSET UNITYSDK_OFFSET(0x206693F0)
#define PEFBGOANFHP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206695D0)
#define PEFBGOANFHP_EQUALS_OFFSET UNITYSDK_OFFSET(0x206694F0)
#define PEFBGOANFHP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x206694E0)
#define PEFBGOANFHP_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x206694B0)
#define PEFBGOANFHP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206696A0)
#define PEFBGOANFHP_IAKOHDKKOAI_OFFSET UNITYSDK_OFFSET(0x20669490)
#define PEFBGOANFHP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206693B0)
#define PEFBGOANFHP_LMGOICEFBPN_OFFSET UNITYSDK_OFFSET(0x206694A0)
#define PEFBGOANFHP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20669A40)
#define PEFBGOANFHP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206699F0)
#define PEFBGOANFHP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x206694D0)
#define PEFBGOANFHP_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x206694C0)
#define PEFBGOANFHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206693E0)
#define PEFBGOANFHP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206696D0)
#define PEFBGOANFHP_WRITETO_OFFSET UNITYSDK_OFFSET(0x20669730)

inline static constexpr unsigned int PEFBGOANFHP_TypeDefinitionIndex = 28331;

	class PEFBGOANFHP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 GFIEPBFOMON; // 0x1C
		::System::UInt32 OPPNMFMNMGC; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PEFBGOANFHP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEFBGOANFHP*>**)UnitySDK::FromName("", "PEFBGOANFHP")->GetStaticField(0x32840);
		}

		// static const ::System::Object ABBONIGHCMB; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEFBGOANFHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEFBGOANFHP*))((::PBYTE)hIl2Cpp + PEFBGOANFHP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEFBGOANFHP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEFBGOANFHP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEFBGOANFHP*>*(*)())((::PBYTE)hIl2Cpp + PEFBGOANFHP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEFBGOANFHP* Clone()
		{
			return ((::PEFBGOANFHP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_CLONE_OFFSET))(this);
		}

		::System::UInt32 IAKOHDKKOAI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_IAKOHDKKOAI_OFFSET))(this);
		}

		::System::Void LMGOICEFBPN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEFBGOANFHP_LMGOICEFBPN_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEFBGOANFHP_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEFBGOANFHP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEFBGOANFHP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEFBGOANFHP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEFBGOANFHP*))((::PBYTE)hIl2Cpp + PEFBGOANFHP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEFBGOANFHP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEFBGOANFHP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEFBGOANFHP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEFBGOANFHP*))((::PBYTE)hIl2Cpp + PEFBGOANFHP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEFBGOANFHP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
