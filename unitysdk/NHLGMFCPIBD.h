#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JLJPFFILKIO;
class NHLGMFCPIBD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NHLGMFCPIBD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB22940)
#define NHLGMFCPIBD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB22BB0)
#define NHLGMFCPIBD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB22300)
#define NHLGMFCPIBD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB22280)
#define NHLGMFCPIBD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB22270)
#define NHLGMFCPIBD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB22520)
#define NHLGMFCPIBD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB223B0)
#define NHLGMFCPIBD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB227F0)
#define NHLGMFCPIBD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB22230)
#define NHLGMFCPIBD_KGLIPAJLDMC_OFFSET UNITYSDK_OFFSET(0x1EB22390)
#define NHLGMFCPIBD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB22A30)
#define NHLGMFCPIBD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB229A0)
#define NHLGMFCPIBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB22260)
#define NHLGMFCPIBD_PIGCJIAOIKA_OFFSET UNITYSDK_OFFSET(0x1EB223A0)
#define NHLGMFCPIBD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB22850)
#define NHLGMFCPIBD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB228B0)

	class NHLGMFCPIBD : public ::System::Object
	{
	public:
		::JLJPFFILKIO* KMJKJFJEDBF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NHLGMFCPIBD")->GetStaticField(0x607C0);
		}

		// static const ::System::Object EEDDEINLCCA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NHLGMFCPIBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGMFCPIBD*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NHLGMFCPIBD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NHLGMFCPIBD* Clone()
		{
			return ((::NHLGMFCPIBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CLONE_OFFSET))(this);
		}

		::JLJPFFILKIO* KGLIPAJLDMC()
		{
			return ((::JLJPFFILKIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_KGLIPAJLDMC_OFFSET))(this);
		}

		::System::Void PIGCJIAOIKA(::JLJPFFILKIO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JLJPFFILKIO*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_PIGCJIAOIKA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NHLGMFCPIBD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NHLGMFCPIBD*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NHLGMFCPIBD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NHLGMFCPIBD*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NHLGMFCPIBD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
