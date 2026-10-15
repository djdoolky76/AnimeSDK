#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEEHNCGHLEO;
class KJMKOJEHMII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FEEHNCGHLEO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3648D0)
#define FEEHNCGHLEO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E364BF0)
#define FEEHNCGHLEO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E364300)
#define FEEHNCGHLEO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E364290)
#define FEEHNCGHLEO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E364280)
#define FEEHNCGHLEO_DDLGCOIFIAB_OFFSET UNITYSDK_OFFSET(0x1E364390)
#define FEEHNCGHLEO_ELHFCMBPKIL_OFFSET UNITYSDK_OFFSET(0x1E364380)
#define FEEHNCGHLEO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E364540)
#define FEEHNCGHLEO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3643C0)
#define FEEHNCGHLEO_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E3643B0)
#define FEEHNCGHLEO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3646C0)
#define FEEHNCGHLEO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E364240)
#define FEEHNCGHLEO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E364A30)
#define FEEHNCGHLEO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3649A0)
#define FEEHNCGHLEO_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E3643A0)
#define FEEHNCGHLEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E364270)
#define FEEHNCGHLEO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E364790)
#define FEEHNCGHLEO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3647F0)

	class FEEHNCGHLEO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KJMKOJEHMII* HOPDKOBGIGG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FEEHNCGHLEO")->GetStaticField(0x5D5E0);
		}

		// static const ::System::Object NLGBNLCIKGN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FEEHNCGHLEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEEHNCGHLEO*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEEHNCGHLEO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FEEHNCGHLEO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FEEHNCGHLEO* Clone()
		{
			return ((::FEEHNCGHLEO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_CLONE_OFFSET))(this);
		}

		::KJMKOJEHMII* ELHFCMBPKIL()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_ELHFCMBPKIL_OFFSET))(this);
		}

		::System::Void DDLGCOIFIAB(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_DDLGCOIFIAB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FEEHNCGHLEO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FEEHNCGHLEO*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FEEHNCGHLEO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FEEHNCGHLEO*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FEEHNCGHLEO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
