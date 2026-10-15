#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAIANGFBBPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAIANGFBBPG_BEKKADKOEKC_OFFSET UNITYSDK_OFFSET(0x1E41CAF0)
#define GAIANGFBBPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E41CE80)
#define GAIANGFBBPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E41D0E0)
#define GAIANGFBBPG_CHOJAPEADMC_OFFSET UNITYSDK_OFFSET(0x1E41CB10)
#define GAIANGFBBPG_CKKLDGHODHC_OFFSET UNITYSDK_OFFSET(0x1E41CB00)
#define GAIANGFBBPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E41CA90)
#define GAIANGFBBPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E41CA50)
#define GAIANGFBBPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E41CA40)
#define GAIANGFBBPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E41CC00)
#define GAIANGFBBPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E41CB20)
#define GAIANGFBBPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E41CCE0)
#define GAIANGFBBPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E41CA00)
#define GAIANGFBBPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E41CF60)
#define GAIANGFBBPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E41CF20)
#define GAIANGFBBPG_PAGHLNNPKBE_OFFSET UNITYSDK_OFFSET(0x1E41CAE0)
#define GAIANGFBBPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E41CA30)
#define GAIANGFBBPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E41CD10)
#define GAIANGFBBPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E41CD70)

	class GAIANGFBBPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CAIKMHOIKIB; // 0x18
		::System::Boolean IGICLDLCOBA; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GAIANGFBBPG")->GetStaticField(0xB120);
		}

		// static const ::System::Object FFBHAEDFGFL; // 0x0
		// static const ::System::Object CBNIOACKJMA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GAIANGFBBPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAIANGFBBPG*))((::PBYTE)hIl2Cpp + GAIANGFBBPG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAIANGFBBPG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GAIANGFBBPG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GAIANGFBBPG* Clone()
		{
			return ((::GAIANGFBBPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_CLONE_OFFSET))(this);
		}

		::System::Boolean PAGHLNNPKBE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_PAGHLNNPKBE_OFFSET))(this);
		}

		::System::Void BEKKADKOEKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAIANGFBBPG_BEKKADKOEKC_OFFSET))(this, a1);
		}

		::System::UInt32 CKKLDGHODHC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_CKKLDGHODHC_OFFSET))(this);
		}

		::System::Void CHOJAPEADMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GAIANGFBBPG_CHOJAPEADMC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GAIANGFBBPG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GAIANGFBBPG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GAIANGFBBPG*))((::PBYTE)hIl2Cpp + GAIANGFBBPG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GAIANGFBBPG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GAIANGFBBPG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GAIANGFBBPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GAIANGFBBPG*))((::PBYTE)hIl2Cpp + GAIANGFBBPG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GAIANGFBBPG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
