#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCIAPKELAF;
class LJBHHFGLKPD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LJBHHFGLKPD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E975CF0)
#define LJBHHFGLKPD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E976010)
#define LJBHHFGLKPD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E975750)
#define LJBHHFGLKPD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9756E0)
#define LJBHHFGLKPD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9756D0)
#define LJBHHFGLKPD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E975990)
#define LJBHHFGLKPD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E975810)
#define LJBHHFGLKPD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E9757E0)
#define LJBHHFGLKPD_FJPMMKNEEOA_OFFSET UNITYSDK_OFFSET(0x1E9757F0)
#define LJBHHFGLKPD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E975B10)
#define LJBHHFGLKPD_IINPGEOKMKC_OFFSET UNITYSDK_OFFSET(0x1E975800)
#define LJBHHFGLKPD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E975690)
#define LJBHHFGLKPD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E975E50)
#define LJBHHFGLKPD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E975DC0)
#define LJBHHFGLKPD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E9757D0)
#define LJBHHFGLKPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9756C0)
#define LJBHHFGLKPD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E975BB0)
#define LJBHHFGLKPD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E975C10)

	class LJBHHFGLKPD : public ::System::Object
	{
	public:
		::HGCIAPKELAF* PNFPNJLFGPC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LJBHHFGLKPD")->GetStaticField(0x46270);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JPJPDLBENDH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LJBHHFGLKPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJBHHFGLKPD*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJBHHFGLKPD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LJBHHFGLKPD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LJBHHFGLKPD* Clone()
		{
			return ((::LJBHHFGLKPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::HGCIAPKELAF* FJPMMKNEEOA()
		{
			return ((::HGCIAPKELAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_FJPMMKNEEOA_OFFSET))(this);
		}

		::System::Void IINPGEOKMKC(::HGCIAPKELAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HGCIAPKELAF*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_IINPGEOKMKC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LJBHHFGLKPD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LJBHHFGLKPD*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LJBHHFGLKPD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LJBHHFGLKPD*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LJBHHFGLKPD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
