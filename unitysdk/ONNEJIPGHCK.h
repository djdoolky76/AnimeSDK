#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONNEJIPGHCK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ONNEJIPGHCK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DECF3B0)
#define ONNEJIPGHCK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECF5D0)
#define ONNEJIPGHCK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DECF000)
#define ONNEJIPGHCK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DECEFD0)
#define ONNEJIPGHCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DECEFC0)
#define ONNEJIPGHCK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DECF130)
#define ONNEJIPGHCK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DECF060)
#define ONNEJIPGHCK_GEKIABKDINF_OFFSET UNITYSDK_OFFSET(0x1DECF050)
#define ONNEJIPGHCK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DECF2A0)
#define ONNEJIPGHCK_JIHCNBCLLKP_OFFSET UNITYSDK_OFFSET(0x1DECF040)
#define ONNEJIPGHCK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DECEF80)
#define ONNEJIPGHCK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DECF470)
#define ONNEJIPGHCK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DECF440)
#define ONNEJIPGHCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DECEFB0)
#define ONNEJIPGHCK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DECF2D0)
#define ONNEJIPGHCK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DECF330)

	class ONNEJIPGHCK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPGOPLHGNIP; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "ONNEJIPGHCK")->GetStaticField(0x2DCF0);
		}

		// static const ::System::Object DNGBFNAFCEG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ONNEJIPGHCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNEJIPGHCK*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + ONNEJIPGHCK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ONNEJIPGHCK* Clone()
		{
			return ((::ONNEJIPGHCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHCNBCLLKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_JIHCNBCLLKP_OFFSET))(this);
		}

		::System::Void GEKIABKDINF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_GEKIABKDINF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ONNEJIPGHCK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ONNEJIPGHCK*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ONNEJIPGHCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONNEJIPGHCK*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ONNEJIPGHCK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
