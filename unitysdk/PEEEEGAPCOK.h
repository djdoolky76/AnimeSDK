#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEEEEGAPCOK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEEEEGAPCOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF15880)
#define PEEEEGAPCOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF15C80)
#define PEEEEGAPCOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF152C0)
#define PEEEEGAPCOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF15270)
#define PEEEEGAPCOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF15260)
#define PEEEEGAPCOK_EMHOGFKJHKC_OFFSET UNITYSDK_OFFSET(0x1DF15340)
#define PEEEEGAPCOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF154C0)
#define PEEEEGAPCOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF15420)
#define PEEEEGAPCOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF15550)
#define PEEEEGAPCOK_HGNKBOOCNFI_OFFSET UNITYSDK_OFFSET(0x1DF15380)
#define PEEEEGAPCOK_HKKKDGEOBBN_OFFSET UNITYSDK_OFFSET(0x1DF153A0)
#define PEEEEGAPCOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF151F0)
#define PEEEEGAPCOK_KJILKDCCLNM_OFFSET UNITYSDK_OFFSET(0x1DF15370)
#define PEEEEGAPCOK_KMCMFGEOFKP_OFFSET UNITYSDK_OFFSET(0x1DF15390)
#define PEEEEGAPCOK_MEOCKALCCHH_OFFSET UNITYSDK_OFFSET(0x1DF153D0)
#define PEEEEGAPCOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF15B90)
#define PEEEEGAPCOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF15B20)
#define PEEEEGAPCOK_NKCAKGLLBDN_OFFSET UNITYSDK_OFFSET(0x1DF153C0)
#define PEEEEGAPCOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF15250)
#define PEEEEGAPCOK_PGAOGGNFFNG_OFFSET UNITYSDK_OFFSET(0x1DF15360)
#define PEEEEGAPCOK_PIAMEJPLCDB_OFFSET UNITYSDK_OFFSET(0x1DF153B0)
#define PEEEEGAPCOK_PJFNONHMHDK_OFFSET UNITYSDK_OFFSET(0x1DF15350)
#define PEEEEGAPCOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF15620)
#define PEEEEGAPCOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF15680)

inline static constexpr unsigned int PEEEEGAPCOK_TypeDefinitionIndex = 25892;

	class PEEEEGAPCOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* CAAGOKECFOE; // 0x18
		::System::Int64 HKJONGPBAJM; // 0x20
		::System::UInt32 LMFIGBEHMJE; // 0x28
		::System::UInt32 GJPIAKFKHDF; // 0x2C
		::System::UInt32 JFJHJLGHDGJ; // 0x30
		static ::Google::Protobuf::MessageParser_1<::PEEEEGAPCOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEEEEGAPCOK*>**)UnitySDK::FromName("", "PEEEEGAPCOK")->GetStaticField(0x384C0);
		}

		// static const ::System::Object IBNKDOBKENK; // 0x0
		// static const ::System::Object HFNMBCJHMFM; // 0x0
		// static const ::System::Object HOHEINOINNG; // 0x0
		// static const ::System::Object JEPLKDOGBJN; // 0x0
		// static const ::System::Object PIGPEJOEMGC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEEEEGAPCOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEEEGAPCOK*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEEEEGAPCOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEEEEGAPCOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEEEEGAPCOK*>*(*)())((::PBYTE)hIl2Cpp + PEEEEGAPCOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEEEEGAPCOK* Clone()
		{
			return ((::PEEEEGAPCOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_CLONE_OFFSET))(this);
		}

		::System::UInt32 EMHOGFKJHKC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_EMHOGFKJHKC_OFFSET))(this);
		}

		::System::Void PJFNONHMHDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_PJFNONHMHDK_OFFSET))(this, a1);
		}

		::System::UInt32 PGAOGGNFFNG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_PGAOGGNFFNG_OFFSET))(this);
		}

		::System::Void KJILKDCCLNM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_KJILKDCCLNM_OFFSET))(this, a1);
		}

		::System::UInt32 HGNKBOOCNFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_HGNKBOOCNFI_OFFSET))(this);
		}

		::System::Void KMCMFGEOFKP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_KMCMFGEOFKP_OFFSET))(this, a1);
		}

		::System::Int64 HKKKDGEOBBN()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_HKKKDGEOBBN_OFFSET))(this);
		}

		::System::Void PIAMEJPLCDB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_PIAMEJPLCDB_OFFSET))(this, a1);
		}

		::System::String* NKCAKGLLBDN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_NKCAKGLLBDN_OFFSET))(this);
		}

		::System::Void MEOCKALCCHH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_MEOCKALCCHH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEEEEGAPCOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEEEEGAPCOK*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEEEEGAPCOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEEEEGAPCOK*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEEEEGAPCOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
