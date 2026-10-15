#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FANIODAOCGG;
class KFACLOGFNJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FANIODAOCGG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32A880)
#define FANIODAOCGG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32ABE0)
#define FANIODAOCGG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32A340)
#define FANIODAOCGG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32A2D0)
#define FANIODAOCGG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32A2C0)
#define FANIODAOCGG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32A580)
#define FANIODAOCGG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32A400)
#define FANIODAOCGG_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E32A3D0)
#define FANIODAOCGG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32A700)
#define FANIODAOCGG_IMHIOGCKGIF_OFFSET UNITYSDK_OFFSET(0x1E32A3E0)
#define FANIODAOCGG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32A280)
#define FANIODAOCGG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32AA00)
#define FANIODAOCGG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32A950)
#define FANIODAOCGG_NBEIAFHAJOI_OFFSET UNITYSDK_OFFSET(0x1E32A3F0)
#define FANIODAOCGG_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E32A3C0)
#define FANIODAOCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32A2B0)
#define FANIODAOCGG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32A740)
#define FANIODAOCGG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32A7A0)

	class FANIODAOCGG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KFACLOGFNJF* NJIGKFFGPLD; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FANIODAOCGG")->GetStaticField(0x586A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object NNOBLNPPJGB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FANIODAOCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FANIODAOCGG*))((::PBYTE)hIl2Cpp + FANIODAOCGG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FANIODAOCGG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FANIODAOCGG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FANIODAOCGG* Clone()
		{
			return ((::FANIODAOCGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FANIODAOCGG_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KFACLOGFNJF* IMHIOGCKGIF()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_IMHIOGCKGIF_OFFSET))(this);
		}

		::System::Void NBEIAFHAJOI(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + FANIODAOCGG_NBEIAFHAJOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FANIODAOCGG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FANIODAOCGG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FANIODAOCGG*))((::PBYTE)hIl2Cpp + FANIODAOCGG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FANIODAOCGG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FANIODAOCGG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FANIODAOCGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FANIODAOCGG*))((::PBYTE)hIl2Cpp + FANIODAOCGG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FANIODAOCGG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
