#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NIMFANHLFNJ.h"
#include "unitysdk/System/Object.h"
class PMNLJEJKLOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PMNLJEJKLOD_AEACNOLJFLF_OFFSET UNITYSDK_OFFSET(0x1DFAF4C0)
#define PMNLJEJKLOD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFAF800)
#define PMNLJEJKLOD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFAFB10)
#define PMNLJEJKLOD_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFAF440)
#define PMNLJEJKLOD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFAF410)
#define PMNLJEJKLOD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF400)
#define PMNLJEJKLOD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFAF5B0)
#define PMNLJEJKLOD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFAF4D0)
#define PMNLJEJKLOD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFAF680)
#define PMNLJEJKLOD_HIDEJDELEEB_OFFSET UNITYSDK_OFFSET(0x1DFAF4B0)
#define PMNLJEJKLOD_IGMALHMOLNF_OFFSET UNITYSDK_OFFSET(0x1DFAF4A0)
#define PMNLJEJKLOD_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1DFAF490)
#define PMNLJEJKLOD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFAF3C0)
#define PMNLJEJKLOD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFAF990)
#define PMNLJEJKLOD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFAF950)
#define PMNLJEJKLOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFAF3F0)
#define PMNLJEJKLOD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFAF6B0)
#define PMNLJEJKLOD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFAF710)

	class PMNLJEJKLOD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NIMFANHLFNJ GMPNCOBOFDM; // 0x18
		::System::UInt32 BFOBOOGAHKB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PMNLJEJKLOD")->GetStaticField(0x3C6A0);
		}

		// static const ::System::Object GDFHGOOLLFD; // 0x0
		// static const ::System::Object HOHDLIKKMBH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PMNLJEJKLOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMNLJEJKLOD*))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMNLJEJKLOD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PMNLJEJKLOD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PMNLJEJKLOD* Clone()
		{
			return ((::PMNLJEJKLOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_CLONE_OFFSET))(this);
		}

		::NIMFANHLFNJ JBIOGKPHKKC()
		{
			return ((::NIMFANHLFNJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::Void IGMALHMOLNF(::NIMFANHLFNJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::NIMFANHLFNJ))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_IGMALHMOLNF_OFFSET))(this, a1);
		}

		::System::UInt32 HIDEJDELEEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_HIDEJDELEEB_OFFSET))(this);
		}

		::System::Void AEACNOLJFLF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_AEACNOLJFLF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PMNLJEJKLOD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PMNLJEJKLOD*))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PMNLJEJKLOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMNLJEJKLOD*))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PMNLJEJKLOD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
