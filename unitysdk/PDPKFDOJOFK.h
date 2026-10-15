#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PDPKFDOJOFK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PDPKFDOJOFK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF14490)
#define PDPKFDOJOFK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF14760)
#define PDPKFDOJOFK_CDKBINKPDIB_OFFSET UNITYSDK_OFFSET(0x1DF14140)
#define PDPKFDOJOFK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF140E0)
#define PDPKFDOJOFK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF140B0)
#define PDPKFDOJOFK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF140A0)
#define PDPKFDOJOFK_DNAJNKOACGO_OFFSET UNITYSDK_OFFSET(0x1DF14160)
#define PDPKFDOJOFK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF14250)
#define PDPKFDOJOFK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF14170)
#define PDPKFDOJOFK_FDLFEPMLGCN_OFFSET UNITYSDK_OFFSET(0x1DF14150)
#define PDPKFDOJOFK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF14320)
#define PDPKFDOJOFK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF14060)
#define PDPKFDOJOFK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF145E0)
#define PDPKFDOJOFK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF145A0)
#define PDPKFDOJOFK_MOBCCAECOMA_OFFSET UNITYSDK_OFFSET(0x1DF14130)
#define PDPKFDOJOFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF14090)
#define PDPKFDOJOFK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF14350)
#define PDPKFDOJOFK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF143B0)

	class PDPKFDOJOFK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GGGAAOBKNKJ; // 0x18
		::System::UInt32 OBCKAMIPOGM; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PDPKFDOJOFK")->GetStaticField(0x38200);
		}

		// static const ::System::Object AJLEHODGIJD; // 0x0
		// static const ::System::Object CMOOAFMCMDC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PDPKFDOJOFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDPKFDOJOFK*))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PDPKFDOJOFK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PDPKFDOJOFK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PDPKFDOJOFK* Clone()
		{
			return ((::PDPKFDOJOFK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_CLONE_OFFSET))(this);
		}

		::System::UInt32 MOBCCAECOMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_MOBCCAECOMA_OFFSET))(this);
		}

		::System::Void CDKBINKPDIB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_CDKBINKPDIB_OFFSET))(this, a1);
		}

		::System::UInt32 FDLFEPMLGCN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_FDLFEPMLGCN_OFFSET))(this);
		}

		::System::Void DNAJNKOACGO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_DNAJNKOACGO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PDPKFDOJOFK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PDPKFDOJOFK*))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PDPKFDOJOFK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PDPKFDOJOFK*))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PDPKFDOJOFK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
