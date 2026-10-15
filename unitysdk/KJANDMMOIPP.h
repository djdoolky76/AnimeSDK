#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KJANDMMOIPP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KJANDMMOIPP_AJMIAEDNFNF_OFFSET UNITYSDK_OFFSET(0x1E868060)
#define KJANDMMOIPP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E868390)
#define KJANDMMOIPP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E868660)
#define KJANDMMOIPP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E867FE0)
#define KJANDMMOIPP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E867FB0)
#define KJANDMMOIPP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E867FA0)
#define KJANDMMOIPP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E868150)
#define KJANDMMOIPP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E868070)
#define KJANDMMOIPP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E868040)
#define KJANDMMOIPP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E868220)
#define KJANDMMOIPP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E867F60)
#define KJANDMMOIPP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8684E0)
#define KJANDMMOIPP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8684A0)
#define KJANDMMOIPP_NJEODPHLONO_OFFSET UNITYSDK_OFFSET(0x1E868050)
#define KJANDMMOIPP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E868030)
#define KJANDMMOIPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E867F90)
#define KJANDMMOIPP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E868250)
#define KJANDMMOIPP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8682B0)

	class KJANDMMOIPP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 OGPBGPAONEB; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KJANDMMOIPP")->GetStaticField(0x1BD90);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object ECJFFNJNCLK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KJANDMMOIPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJANDMMOIPP*))((::PBYTE)hIl2Cpp + KJANDMMOIPP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KJANDMMOIPP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KJANDMMOIPP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KJANDMMOIPP* Clone()
		{
			return ((::KJANDMMOIPP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJANDMMOIPP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 NJEODPHLONO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_NJEODPHLONO_OFFSET))(this);
		}

		::System::Void AJMIAEDNFNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KJANDMMOIPP_AJMIAEDNFNF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KJANDMMOIPP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KJANDMMOIPP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KJANDMMOIPP*))((::PBYTE)hIl2Cpp + KJANDMMOIPP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KJANDMMOIPP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KJANDMMOIPP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KJANDMMOIPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJANDMMOIPP*))((::PBYTE)hIl2Cpp + KJANDMMOIPP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KJANDMMOIPP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
