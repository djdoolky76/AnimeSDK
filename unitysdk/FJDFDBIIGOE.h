#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACINIALAFDE.h"
#include "unitysdk/DMHILEFFPFL.h"
#include "unitysdk/System/Object.h"
class FJDFDBIIGOE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJDFDBIIGOE_ACMHENAEMAB_OFFSET UNITYSDK_OFFSET(0x206A4970)
#define FJDFDBIIGOE_AGCLIMGNLEN_OFFSET UNITYSDK_OFFSET(0x206A4980)
#define FJDFDBIIGOE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206A4DE0)
#define FJDFDBIIGOE_CCTOR_OFFSET UNITYSDK_OFFSET(0x206A5210)
#define FJDFDBIIGOE_CLONE_OFFSET UNITYSDK_OFFSET(0x206A48A0)
#define FJDFDBIIGOE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x206A4860)
#define FJDFDBIIGOE_CTOR_OFFSET UNITYSDK_OFFSET(0x206A4850)
#define FJDFDBIIGOE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x206A4A20)
#define FJDFDBIIGOE_EQUALS_OFFSET UNITYSDK_OFFSET(0x206A49B0)
#define FJDFDBIIGOE_FMFGOAPKGAB_OFFSET UNITYSDK_OFFSET(0x206A4960)
#define FJDFDBIIGOE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206A4A80)
#define FJDFDBIIGOE_ICOJDCCJMEM_OFFSET UNITYSDK_OFFSET(0x206A4990)
#define FJDFDBIIGOE_IPLBECBNJLK_OFFSET UNITYSDK_OFFSET(0x206A4910)
#define FJDFDBIIGOE_JCLAIBFMENP_OFFSET UNITYSDK_OFFSET(0x206A49A0)
#define FJDFDBIIGOE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x206A4810)
#define FJDFDBIIGOE_JNMHHAEPECA_OFFSET UNITYSDK_OFFSET(0x206A4940)
#define FJDFDBIIGOE_KELHNBBBLHA_OFFSET UNITYSDK_OFFSET(0x206A4900)
#define FJDFDBIIGOE_KMHNKEJMDAK_OFFSET UNITYSDK_OFFSET(0x206A4950)
#define FJDFDBIIGOE_LMLKAECMDNH_OFFSET UNITYSDK_OFFSET(0x206A4920)
#define FJDFDBIIGOE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x206A5140)
#define FJDFDBIIGOE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x206A50E0)
#define FJDFDBIIGOE_NEICKKPFHOK_OFFSET UNITYSDK_OFFSET(0x206A48F0)
#define FJDFDBIIGOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x206A4840)
#define FJDFDBIIGOE_PCKEJOJIOOM_OFFSET UNITYSDK_OFFSET(0x206A4930)
#define FJDFDBIIGOE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x206A4AC0)
#define FJDFDBIIGOE_WRITETO_OFFSET UNITYSDK_OFFSET(0x206A4B20)

inline static constexpr unsigned int FJDFDBIIGOE_TypeDefinitionIndex = 31274;

	class FJDFDBIIGOE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean IEKCGCFCMPN; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 BHFEEGICLMK; // 0x1C
		::System::UInt32 KCIKBKIBOPB; // 0x20
		::System::UInt32 HEKOAJFHMJJ; // 0x24
		::DMHILEFFPFL KOCAPDILNCE; // 0x28
		::ACINIALAFDE CFCAMOAGIDE; // 0x2C
		static ::Google::Protobuf::MessageParser_1<::FJDFDBIIGOE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJDFDBIIGOE*>**)UnitySDK::FromName("", "FJDFDBIIGOE")->GetStaticField(0x444A0);
		}

		// static const ::System::Object LEBHDCNOCAF; // 0x0
		// static const ::System::Object OEMNIDFIJEO; // 0x0
		// static const ::System::Object LKCCGCBCJJM; // 0x0
		// static const ::System::Object BOADFNPOBEP; // 0x0
		// static const ::System::Object OPHLICGEPIC; // 0x0
		// static const ::System::Object ADFLIGDHDDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJDFDBIIGOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJDFDBIIGOE*))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJDFDBIIGOE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJDFDBIIGOE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJDFDBIIGOE*>*(*)())((::PBYTE)hIl2Cpp + FJDFDBIIGOE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJDFDBIIGOE* Clone()
		{
			return ((::FJDFDBIIGOE*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_CLONE_OFFSET))(this);
		}

		::DMHILEFFPFL NEICKKPFHOK()
		{
			return ((::DMHILEFFPFL(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_NEICKKPFHOK_OFFSET))(this);
		}

		::System::Void KELHNBBBLHA(::DMHILEFFPFL a1)
		{
			return ((::System::Void(*)(::PVOID, ::DMHILEFFPFL))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_KELHNBBBLHA_OFFSET))(this, a1);
		}

		::System::UInt32 IPLBECBNJLK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_IPLBECBNJLK_OFFSET))(this);
		}

		::System::Void LMLKAECMDNH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_LMLKAECMDNH_OFFSET))(this, a1);
		}

		::System::UInt32 PCKEJOJIOOM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_PCKEJOJIOOM_OFFSET))(this);
		}

		::System::Void JNMHHAEPECA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_JNMHHAEPECA_OFFSET))(this, a1);
		}

		::ACINIALAFDE KMHNKEJMDAK()
		{
			return ((::ACINIALAFDE(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_KMHNKEJMDAK_OFFSET))(this);
		}

		::System::Void FMFGOAPKGAB(::ACINIALAFDE a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACINIALAFDE))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_FMFGOAPKGAB_OFFSET))(this, a1);
		}

		::System::Boolean ACMHENAEMAB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_ACMHENAEMAB_OFFSET))(this);
		}

		::System::Void AGCLIMGNLEN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_AGCLIMGNLEN_OFFSET))(this, a1);
		}

		::System::UInt32 ICOJDCCJMEM()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_ICOJDCCJMEM_OFFSET))(this);
		}

		::System::Void JCLAIBFMENP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_JCLAIBFMENP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJDFDBIIGOE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJDFDBIIGOE*))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJDFDBIIGOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJDFDBIIGOE*))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJDFDBIIGOE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
