#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAIANGFBBPG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GAIANGFBBPG_BEKKADKOEKC_OFFSET UNITYSDK_OFFSET(0x1E3EF420)
#define GAIANGFBBPG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3EF7B0)
#define GAIANGFBBPG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3EFA10)
#define GAIANGFBBPG_CHOJAPEADMC_OFFSET UNITYSDK_OFFSET(0x1E3EF440)
#define GAIANGFBBPG_CKKLDGHODHC_OFFSET UNITYSDK_OFFSET(0x1E3EF430)
#define GAIANGFBBPG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3EF3C0)
#define GAIANGFBBPG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3EF380)
#define GAIANGFBBPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3EF370)
#define GAIANGFBBPG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3EF530)
#define GAIANGFBBPG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3EF450)
#define GAIANGFBBPG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3EF610)
#define GAIANGFBBPG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3EF330)
#define GAIANGFBBPG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3EF890)
#define GAIANGFBBPG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3EF850)
#define GAIANGFBBPG_PAGHLNNPKBE_OFFSET UNITYSDK_OFFSET(0x1E3EF410)
#define GAIANGFBBPG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3EF360)
#define GAIANGFBBPG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3EF640)
#define GAIANGFBBPG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3EF6A0)

inline static constexpr unsigned int GAIANGFBBPG_TypeDefinitionIndex = 29994;

	class GAIANGFBBPG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CAIKMHOIKIB; // 0x18
		::System::Boolean IGICLDLCOBA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::GAIANGFBBPG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GAIANGFBBPG*>**)UnitySDK::FromName("", "GAIANGFBBPG")->GetStaticField(0x3010);
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

		static ::Google::Protobuf::MessageParser_1<::GAIANGFBBPG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GAIANGFBBPG*>*(*)())((::PBYTE)hIl2Cpp + GAIANGFBBPG_JJGHOBBFNJD_OFFSET))();
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
