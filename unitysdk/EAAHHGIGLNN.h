#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EAAHHGIGLNN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EAAHHGIGLNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E220D60)
#define EAAHHGIGLNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E221030)
#define EAAHHGIGLNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2209B0)
#define EAAHHGIGLNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E220980)
#define EAAHHGIGLNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E220970)
#define EAAHHGIGLNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E220B20)
#define EAAHHGIGLNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E220A40)
#define EAAHHGIGLNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E220A10)
#define EAAHHGIGLNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E220BF0)
#define EAAHHGIGLNN_IBOLKMJNDNC_OFFSET UNITYSDK_OFFSET(0x1E220A20)
#define EAAHHGIGLNN_JDGEKAHGKDP_OFFSET UNITYSDK_OFFSET(0x1E220A30)
#define EAAHHGIGLNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E220930)
#define EAAHHGIGLNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E220EB0)
#define EAAHHGIGLNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E220E70)
#define EAAHHGIGLNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E220A00)
#define EAAHHGIGLNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E220960)
#define EAAHHGIGLNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E220C20)
#define EAAHHGIGLNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E220C80)

	class EAAHHGIGLNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 LJKBHMOJFEC; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EAAHHGIGLNN")->GetStaticField(0x47D10);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HKIFFNHGLKA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EAAHHGIGLNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAAHHGIGLNN*))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EAAHHGIGLNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EAAHHGIGLNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EAAHHGIGLNN* Clone()
		{
			return ((::EAAHHGIGLNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 IBOLKMJNDNC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_IBOLKMJNDNC_OFFSET))(this);
		}

		::System::Void JDGEKAHGKDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_JDGEKAHGKDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EAAHHGIGLNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EAAHHGIGLNN*))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EAAHHGIGLNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EAAHHGIGLNN*))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EAAHHGIGLNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
