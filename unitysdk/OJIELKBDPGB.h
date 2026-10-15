#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KFACLOGFNJF;
class OJIELKBDPGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OJIELKBDPGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE86BC0)
#define OJIELKBDPGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE86F20)
#define OJIELKBDPGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE86670)
#define OJIELKBDPGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE86600)
#define OJIELKBDPGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE865F0)
#define OJIELKBDPGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE868B0)
#define OJIELKBDPGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE86730)
#define OJIELKBDPGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DE86720)
#define OJIELKBDPGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE86A30)
#define OJIELKBDPGB_IMHIOGCKGIF_OFFSET UNITYSDK_OFFSET(0x1DE866F0)
#define OJIELKBDPGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE865B0)
#define OJIELKBDPGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE86D40)
#define OJIELKBDPGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE86C90)
#define OJIELKBDPGB_NBEIAFHAJOI_OFFSET UNITYSDK_OFFSET(0x1DE86700)
#define OJIELKBDPGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DE86710)
#define OJIELKBDPGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE865E0)
#define OJIELKBDPGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE86A80)
#define OJIELKBDPGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE86AE0)

	class OJIELKBDPGB : public ::System::Object
	{
	public:
		::KFACLOGFNJF* NJIGKFFGPLD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "OJIELKBDPGB")->GetStaticField(0x1F840);
		}

		// static const ::System::Object NNOBLNPPJGB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OJIELKBDPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJIELKBDPGB*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OJIELKBDPGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + OJIELKBDPGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OJIELKBDPGB* Clone()
		{
			return ((::OJIELKBDPGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CLONE_OFFSET))(this);
		}

		::KFACLOGFNJF* IMHIOGCKGIF()
		{
			return ((::KFACLOGFNJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_IMHIOGCKGIF_OFFSET))(this);
		}

		::System::Void NBEIAFHAJOI(::KFACLOGFNJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFACLOGFNJF*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_NBEIAFHAJOI_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OJIELKBDPGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OJIELKBDPGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OJIELKBDPGB*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIELKBDPGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OJIELKBDPGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OJIELKBDPGB*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OJIELKBDPGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
