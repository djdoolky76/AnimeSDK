#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DDOOEDOKEPF;
class GAAMBBFPCHB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DDOOEDOKEPF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E18BF80)
#define DDOOEDOKEPF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E18C340)
#define DDOOEDOKEPF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E18BA40)
#define DDOOEDOKEPF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E18B9D0)
#define DDOOEDOKEPF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E18B9C0)
#define DDOOEDOKEPF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E18BC80)
#define DDOOEDOKEPF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E18BB00)
#define DDOOEDOKEPF_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E18BAD0)
#define DDOOEDOKEPF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E18BE00)
#define DDOOEDOKEPF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E18B980)
#define DDOOEDOKEPF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E18C160)
#define DDOOEDOKEPF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E18C050)
#define DDOOEDOKEPF_NMMBFGNHDIH_OFFSET UNITYSDK_OFFSET(0x1E18BAF0)
#define DDOOEDOKEPF_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E18BAC0)
#define DDOOEDOKEPF_OJECLJEIFLJ_OFFSET UNITYSDK_OFFSET(0x1E18BAE0)
#define DDOOEDOKEPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E18B9B0)
#define DDOOEDOKEPF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E18BE40)
#define DDOOEDOKEPF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E18BEA0)

	class DDOOEDOKEPF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::GAAMBBFPCHB* GAPDBIBJBAG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "DDOOEDOKEPF")->GetStaticField(0x2F540);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LHMKKEEFHLB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DDOOEDOKEPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDOOEDOKEPF*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DDOOEDOKEPF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + DDOOEDOKEPF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DDOOEDOKEPF* Clone()
		{
			return ((::DDOOEDOKEPF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::GAAMBBFPCHB* OJECLJEIFLJ()
		{
			return ((::GAAMBBFPCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_OJECLJEIFLJ_OFFSET))(this);
		}

		::System::Void NMMBFGNHDIH(::GAAMBBFPCHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAAMBBFPCHB*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_NMMBFGNHDIH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DDOOEDOKEPF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DDOOEDOKEPF*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DDOOEDOKEPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DDOOEDOKEPF*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DDOOEDOKEPF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
