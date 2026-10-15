#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DHFGMHFEHEB;
class JKEBEAKOHJJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DHFGMHFEHEB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1B3180)
#define DHFGMHFEHEB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B34B0)
#define DHFGMHFEHEB_CLEFHLPEMKJ_OFFSET UNITYSDK_OFFSET(0x1E1B2CF0)
#define DHFGMHFEHEB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1B2C30)
#define DHFGMHFEHEB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E1B2BB0)
#define DHFGMHFEHEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B2BA0)
#define DHFGMHFEHEB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1B2E80)
#define DHFGMHFEHEB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1B2D00)
#define DHFGMHFEHEB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E1B2CD0)
#define DHFGMHFEHEB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1B3000)
#define DHFGMHFEHEB_JDKPFHDHBBH_OFFSET UNITYSDK_OFFSET(0x1E1B2CE0)
#define DHFGMHFEHEB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1B2B60)
#define DHFGMHFEHEB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E1B32F0)
#define DHFGMHFEHEB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E1B3250)
#define DHFGMHFEHEB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E1B2CC0)
#define DHFGMHFEHEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1B2B90)
#define DHFGMHFEHEB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1B3040)
#define DHFGMHFEHEB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E1B30A0)

	class DHFGMHFEHEB : public ::System::Object
	{
	public:
		::JKEBEAKOHJJ* CODPEOICCHG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DHFGMHFEHEB")->GetStaticField(0x34E10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object GLDEHFLBLMG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DHFGMHFEHEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHFGMHFEHEB*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHFGMHFEHEB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DHFGMHFEHEB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DHFGMHFEHEB* Clone()
		{
			return ((::DHFGMHFEHEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JKEBEAKOHJJ* JDKPFHDHBBH()
		{
			return ((::JKEBEAKOHJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_JDKPFHDHBBH_OFFSET))(this);
		}

		::System::Void CLEFHLPEMKJ(::JKEBEAKOHJJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JKEBEAKOHJJ*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_CLEFHLPEMKJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DHFGMHFEHEB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHFGMHFEHEB*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DHFGMHFEHEB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DHFGMHFEHEB*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DHFGMHFEHEB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
