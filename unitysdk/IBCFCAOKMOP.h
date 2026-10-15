#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBCFCAOKMOP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IBCFCAOKMOP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E610500)
#define IBCFCAOKMOP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E610720)
#define IBCFCAOKMOP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E610150)
#define IBCFCAOKMOP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E610120)
#define IBCFCAOKMOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E610110)
#define IBCFCAOKMOP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E610280)
#define IBCFCAOKMOP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6101B0)
#define IBCFCAOKMOP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6103F0)
#define IBCFCAOKMOP_IJNIBMJIFNC_OFFSET UNITYSDK_OFFSET(0x1E6101A0)
#define IBCFCAOKMOP_ILFGHGCDOMG_OFFSET UNITYSDK_OFFSET(0x1E610190)
#define IBCFCAOKMOP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6100D0)
#define IBCFCAOKMOP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6105C0)
#define IBCFCAOKMOP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E610590)
#define IBCFCAOKMOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E610100)
#define IBCFCAOKMOP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E610420)
#define IBCFCAOKMOP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E610480)

	class IBCFCAOKMOP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HIJEJBOFOIB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "IBCFCAOKMOP")->GetStaticField(0x40B70);
		}

		// static const ::System::Object LEALNOIOAKC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IBCFCAOKMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBCFCAOKMOP*))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBCFCAOKMOP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + IBCFCAOKMOP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IBCFCAOKMOP* Clone()
		{
			return ((::IBCFCAOKMOP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_CLONE_OFFSET))(this);
		}

		::System::UInt32 ILFGHGCDOMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_ILFGHGCDOMG_OFFSET))(this);
		}

		::System::Void IJNIBMJIFNC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_IJNIBMJIFNC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IBCFCAOKMOP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IBCFCAOKMOP*))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IBCFCAOKMOP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBCFCAOKMOP*))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IBCFCAOKMOP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
