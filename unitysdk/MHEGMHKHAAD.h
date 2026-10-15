#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MHEGMHKHAAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MHEGMHKHAAD_ACOJNBBKMOE_OFFSET UNITYSDK_OFFSET(0x1EA2DD90)
#define MHEGMHKHAAD_BEKIAONFNHN_OFFSET UNITYSDK_OFFSET(0x1EA2DDC0)
#define MHEGMHKHAAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA2E120)
#define MHEGMHKHAAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2E3F0)
#define MHEGMHKHAAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA2DD20)
#define MHEGMHKHAAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA2DCF0)
#define MHEGMHKHAAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DCE0)
#define MHEGMHKHAAD_EODGHOPFDCJ_OFFSET UNITYSDK_OFFSET(0x1EA2DDA0)
#define MHEGMHKHAAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA2DEE0)
#define MHEGMHKHAAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA2DDD0)
#define MHEGMHKHAAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA2DFB0)
#define MHEGMHKHAAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA2DC70)
#define MHEGMHKHAAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA2E270)
#define MHEGMHKHAAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA2E230)
#define MHEGMHKHAAD_MHHDBKELGIO_OFFSET UNITYSDK_OFFSET(0x1EA2DDB0)
#define MHEGMHKHAAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA2DCD0)
#define MHEGMHKHAAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA2DFE0)
#define MHEGMHKHAAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA2E040)

	class MHEGMHKHAAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KLINKNMHOCI; // 0x18
		::System::UInt32 NPFBAFODCBI; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "MHEGMHKHAAD")->GetStaticField(0x14DF0);
		}

		// static const ::System::Object JJDOFLLPDJE; // 0x0
		// static const ::System::Object GKKKEHJAKII; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MHEGMHKHAAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHEGMHKHAAD*))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MHEGMHKHAAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + MHEGMHKHAAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MHEGMHKHAAD* Clone()
		{
			return ((::MHEGMHKHAAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_CLONE_OFFSET))(this);
		}

		::System::UInt32 ACOJNBBKMOE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_ACOJNBBKMOE_OFFSET))(this);
		}

		::System::Void EODGHOPFDCJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_EODGHOPFDCJ_OFFSET))(this, a1);
		}

		::System::UInt32 MHHDBKELGIO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_MHHDBKELGIO_OFFSET))(this);
		}

		::System::Void BEKIAONFNHN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_BEKIAONFNHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MHEGMHKHAAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEGMHKHAAD*))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MHEGMHKHAAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MHEGMHKHAAD*))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MHEGMHKHAAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
