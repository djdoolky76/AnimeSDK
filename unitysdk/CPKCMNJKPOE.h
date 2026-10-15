#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CPKCMNJKPOE;
class GGHOBPBFFOB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CPKCMNJKPOE_BGEMDHNDOBP_OFFSET UNITYSDK_OFFSET(0x1E140F90)
#define CPKCMNJKPOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E141460)
#define CPKCMNJKPOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E141820)
#define CPKCMNJKPOE_CKPMCBGJBDA_OFFSET UNITYSDK_OFFSET(0x1E140FA0)
#define CPKCMNJKPOE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E140EF0)
#define CPKCMNJKPOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E140E60)
#define CPKCMNJKPOE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E140E50)
#define CPKCMNJKPOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E141150)
#define CPKCMNJKPOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E140FD0)
#define CPKCMNJKPOE_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E140FC0)
#define CPKCMNJKPOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1412D0)
#define CPKCMNJKPOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E140E10)
#define CPKCMNJKPOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E141620)
#define CPKCMNJKPOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E141530)
#define CPKCMNJKPOE_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E140FB0)
#define CPKCMNJKPOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E140E40)
#define CPKCMNJKPOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E141320)
#define CPKCMNJKPOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E141380)

	class CPKCMNJKPOE : public ::System::Object
	{
	public:
		::GGHOBPBFFOB* NIBJKKOGKAE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "CPKCMNJKPOE")->GetStaticField(0x22B60);
		}

		// static const ::System::Object EAHAEFHMLHD; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CPKCMNJKPOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPKCMNJKPOE*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CPKCMNJKPOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + CPKCMNJKPOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CPKCMNJKPOE* Clone()
		{
			return ((::CPKCMNJKPOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_CLONE_OFFSET))(this);
		}

		::GGHOBPBFFOB* BGEMDHNDOBP()
		{
			return ((::GGHOBPBFFOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_BGEMDHNDOBP_OFFSET))(this);
		}

		::System::Void CKPMCBGJBDA(::GGHOBPBFFOB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGHOBPBFFOB*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_CKPMCBGJBDA_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CPKCMNJKPOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CPKCMNJKPOE*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CPKCMNJKPOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CPKCMNJKPOE*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CPKCMNJKPOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
