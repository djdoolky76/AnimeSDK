#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDBDLBAPDBE;
class GGGFNBNGIIP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GGGFNBNGIIP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E47B2F0)
#define GGGFNBNGIIP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E47B6B0)
#define GGGFNBNGIIP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E47ACC0)
#define GGGFNBNGIIP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E47AC50)
#define GGGFNBNGIIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E47AC40)
#define GGGFNBNGIIP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E47AF30)
#define GGGFNBNGIIP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E47ADA0)
#define GGGFNBNGIIP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E47AD50)
#define GGGFNBNGIIP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E47B0C0)
#define GGGFNBNGIIP_GHEIAEAOKAC_OFFSET UNITYSDK_OFFSET(0x1E47AD90)
#define GGGFNBNGIIP_IGJOIMKFBNG_OFFSET UNITYSDK_OFFSET(0x1E47AD80)
#define GGGFNBNGIIP_IHOIMOOAEEE_OFFSET UNITYSDK_OFFSET(0x1E47AD60)
#define GGGFNBNGIIP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E47AC00)
#define GGGFNBNGIIP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E47B4D0)
#define GGGFNBNGIIP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E47B430)
#define GGGFNBNGIIP_NKICJALKDGG_OFFSET UNITYSDK_OFFSET(0x1E47AD70)
#define GGGFNBNGIIP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E47AD40)
#define GGGFNBNGIIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E47AC30)
#define GGGFNBNGIIP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E47B150)
#define GGGFNBNGIIP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E47B1B0)

	class GGGFNBNGIIP : public ::System::Object
	{
	public:
		::FDBDLBAPDBE* GMLPGJJJKDP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		::System::UInt32 CEAHPOGMPMB; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GGGFNBNGIIP")->GetStaticField(0x15B60);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EAIHKAPNKDA; // 0x0
		// static const ::System::Object KIAJFAMLJEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GGGFNBNGIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGGFNBNGIIP*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGGFNBNGIIP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GGGFNBNGIIP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GGGFNBNGIIP* Clone()
		{
			return ((::GGGFNBNGIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 IHOIMOOAEEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_IHOIMOOAEEE_OFFSET))(this);
		}

		::System::Void NKICJALKDGG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_NKICJALKDGG_OFFSET))(this, a1);
		}

		::FDBDLBAPDBE* IGJOIMKFBNG()
		{
			return ((::FDBDLBAPDBE*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_IGJOIMKFBNG_OFFSET))(this);
		}

		::System::Void GHEIAEAOKAC(::FDBDLBAPDBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FDBDLBAPDBE*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_GHEIAEAOKAC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GGGFNBNGIIP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GGGFNBNGIIP*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GGGFNBNGIIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGGFNBNGIIP*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GGGFNBNGIIP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
